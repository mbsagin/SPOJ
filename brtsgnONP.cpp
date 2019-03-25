#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
	vector <char> charVector;
	stack <char> charStack;

	char char1,char2;
	int charCount=0;

    int count=0;
	cin>>count;
	int x;
	while (count--)
	{
		charVector.clear();
		x=0;
		cin>>char1;
		x++;
		while (x != 0) {
			cin>>char2;

			if (char2=='(') {
				x++;
			}
			else {
				if (char2==')') {
				    x--;
                    charVector.push_back(charStack.top());charStack.pop();
				}else {
					if (char2=='+' || char2=='-' || char2=='*' || char2=='/' || char2=='^' /*|| char2=='%' || char2=='_' || char2=='|' || char2==';' || char2=='?'|| char2=='~'*/) {
						charStack.push(char2);
					}else {
						charCount++;
						charVector.push_back(char2);
					}
				}
			}
		}
		for (int i=0; i<charVector.size(); i++) {
            cout<<charVector.at(i);
		}
	cout<<endl;
	}
	return 0;
}
