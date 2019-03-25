#include <iostream>

using namespace std;

void reverseSumArray(int*, int);
int main()
{
    int num;
    cin >> num;
    int *array = new int[20000];

    for(int i=0; i<(num*2); i++)
    {
        cin >> array[i];
    }

    reverseSumArray(array, num);
}

void reverseSumArray(int *arr, int num)
{
    int *reversedArray = new int[10000];
    int remainder;
    int reversedNumber;
    for(int i=0; i<(num*2); i++)
    {
        remainder=0;
        reversedNumber=0;
        while(arr[i] != 0)
        {
            remainder = arr[i]%10;
            reversedNumber = reversedNumber*10 + remainder;
            arr[i] /= 10;

        }
        reversedArray[i]=reversedNumber;
    }

    for(int i=0; i<(num*2); i=i+2)
    {
        reversedArray[i]=reversedArray[i]+reversedArray[i+1];
    }

    for(int i=0; i<(num*2); i++)
    {
        remainder=0;
        reversedNumber=0;
        while(reversedArray[i] != 0)
        {
            remainder = reversedArray[i]%10;
            reversedNumber = reversedNumber*10 + remainder;
            reversedArray[i] /= 10;

        }
        reversedArray[i]=reversedNumber;
    }
    for(int i=0; i<(num*2); i=i+2)
    {
        cout << reversedArray[i] << endl;
    }
}
