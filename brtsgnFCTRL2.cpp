// MEHMET BERAAT SAĞIN - 12.10.2018
// FOR THIS TASK I USED 2 FUNCTIONs WHICH THEY ARE MULTIPLY AND FACTORIAL
// IN MULTIPLY FUNCTION I MADE JUST BASIC MULTIPLICATON
// FACTORIAL FUNCTION IS USING MULTIPLY FUNCTION FOR FINDING FACTORIAL
// WRITING THE NUMBER TO THE SCREEN

#include<iostream>
using namespace std;
#define MAX 500

int multiply(int x, int arr[], int size);
void factorial(int num);

void factorial(int num)
{
    int arr[MAX];
    arr[0] = 1;
    int size = 1;
// THIS FOR LOOP IS ESSENTIAL PART OF FACTORIAL FUNCTION
// WE ARE MAKING JUST MULTIPLICATION IN HERE WITH THE MULTIPLY FUNCTION
    for (int x=2; x<=num; x++)
    {
        size = multiply(x, arr, size);
    }
// THIS FOR LOOP FOR WRITING THE NUMBER ON THE SCREEN
    for (int i=size-1; i>=0; i--)
    {
       cout << arr[i];
    }

    cout << endl;
}

int multiply(int x, int arr[], int size)
{
    int carry = 0;
// MULTIPLY FUNCTION IS
// MAKING BASIC MULTIPLICATION
// INSIDE OF THIS FOR LOOP
    for (int i=0; i<size; i++)
    {
        int product = arr[i] * x + carry;
        arr[i] = product % 10;
        carry  = product/10;
    }
// INSDE OF THIS WHILE LOOP
// WE ARE INCREASING SIZE OF ARRAY
// AND WHEN CARRY EQUAL TO 0 WE ARE MOVING ON
    while (carry)
    {
        arr[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}

int main()
{
    int size;
    cin >> size; // IT IS THE HOW MANY NUMBERS PROGRAM GONNA USE
    int *arr = new int[size];

    for(int i=0; i<size; i++)
    {
        cin >> arr[i]; // TAKING THE NUMBERS ONE BY ONE
    }

    for(int k=0; k<size; k++)
    {
        factorial(arr[k]); // CALCULATING THE FACTORIAL OF THE NUMBERS HAVE TAKEN
    }
    return 0;
}
