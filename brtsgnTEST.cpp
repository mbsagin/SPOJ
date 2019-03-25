#include <iostream>

using namespace std;

int main()
{
    int num[99];
    int count=0;
    bool end=0;
    while(end!=1)
    {
        cin >> num[count];
        if (num[count]==42)
        {
            end=1;
        }
        count++;
    }
    for(int i=0; i<count-1 ; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}
