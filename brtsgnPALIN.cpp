#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int checkNines(char[],int);
int isPalindrome(char[], int);
char findPalindrome(char[],int);
int main()
{
    int num;
    cin >> num;
    int digitNum;
    for(int i = 0; i < num; i++)
    {
		char char123[1000000];
        cin >> char123;
        digitNum = strlen(char123);
        findPalindrome(char123, digitNum);
    }
    return 0;
}

char findPalindrome(char arr[1000000], int digits)
{
    if(checkNines(arr, digits))
    {
        cout << "1";
        for(int i = 0; i < digits-1; i++)
        {
            cout << "0";
        }
        cout << "1" << endl;
    }
    else
    {
            int mid = digits / 2;
            int left = mid - 1;
            int right = (digits%2) ? mid+1 : mid;

            bool LEFTsmaller = false;
            while(left >= 0 && arr[left]==arr[right]) { // PASS SAME DIGITS
                left--;
                right++;
            }

            if( left < 0 || arr[left] < arr[right]) {
                LEFTsmaller = true;
            }

            while (left >= 0) {
                arr[right] = arr[left];
                right++;
                left--;
            }
            if(LEFTsmaller==true) {
                int carry = 1;
                left = mid - 1;
                if(digits%2 == 1) {
                    int temp1;

                    temp1 = (int)arr[mid] - 48;
                    temp1 += carry;
                    arr[mid] = temp1 + 48;

                    temp1 = (int)arr[mid] - 48;
                    carry = temp1 / 10;
                    arr[mid] = (temp1 % 10) + 48;
                    right = mid + 1;
                }else {
                    right = mid;
                }
                while(left >= 0) {
                    int temp2;

                    temp2 = (int)arr[left] - 48;
                    temp2 += carry;
                    arr[left] = temp2 + 48;

                    temp2 = (int)arr[left] - 48;
                    carry = temp2 / 10;
                    arr[left] = (temp2 % 10) + 48;
                    arr[right++] = arr[left--];
                }
            }

            for(int i = 0; i < digits; i++) {
                cout << arr[i];
            }
            cout << endl;

    }
}
int checkNines(char arr[1000000], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != '9')
        {
			return 0;
        }
    }
    return 1;
}

int isPalindrome(char arr[1000000], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        if(arr[i]==arr[size-i-1])
        {
            return 1;
        }else{
        return 0;
        }
    }
}
