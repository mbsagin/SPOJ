#include <iostream>
using namespace std;
void FCTRL(int*, int);
int main()
{
    int num;
    cin >> num;
    int *array = new int[100000];
    for(int i=0; i<num; i++)
    {
        cin >> array[i];
    }

    FCTRL(array, num);

    return 0;
}

void FCTRL(int* arr, int x)
{
    int sum=0;
    int remain;
    for(int i=0; i<x; i++)
    {
        sum=0;
        while(arr[i]!=0)
        {
            sum=sum+(arr[i]/5);
            arr[i]=arr[i]/5;
        }
        cout << sum << endl;
    }
}
