#include <iostream>
using namespace std;

main() {
    char DNA[1000001];
    int size;
    cin >> size;
    cin >> DNA;

    char x='A';
    int count=0;

    for(int i=size-1; i>0; i--) {
        if(x!=DNA[i]) { // IF LAST ELEMENT IS B ENTER
            if(x!=DNA[i-1]) { // IF NEXT TO LAST ELEMENT IS B ENTER
                x=DNA[i];
                i--;
            }
            count++;
        }
    }

    if(DNA[0]!=x) {
        count++;
    }
    cout << count << endl;
    return 0;
}
