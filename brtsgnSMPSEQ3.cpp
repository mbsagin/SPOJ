#include <iostream>

using namespace std;

int main()
{
    int size1;
    cin >> size1;
    int sequence1[size1];
    for (int i=0; i<size1; i++)
    {
        cin >> sequence1[i];
    }
    int size2;
    cin >> size2;
    int sequence2[size2];
    for (int j=0; j<size2; j++)
    {
        cin >> sequence2[j];
    }

    int arr[99];
    int k,l;
    int count=0;
    for(k=0; k<size1; k++)
    {
        for(l=0; l<size2; l++)
        {
            if(sequence1[k]==sequence2[l])
            {
                l=size2+1;
            }
        }
        if(l==size2)
        {
            arr[count]=sequence1[k];
            count++;
        }
        l=0;
    }
    for(int w=0; w<count; w++)
    {
        cout << arr[w] << endl;
    }
    return 0;
}
