#include <iostream>
using namespace std;

void calculator()
{
	int num1;
	string symbol;
	int num2;
	while (true)
	{
		cout <<"Enter first num:" << endl;
		cin >> num1;
		cout <<"Symbol:" << endl;
		cin >> symbol;
		cout << "2nd num:" << endl;
		cin >> num2;
		if (symbol=="+")
		{
			cout <<"****************" << endl;
			cout <<"   RESULT:" << endl;
			cout << num1 + num2 << endl;
			cout <<"***************" << endl;
		}
		else if (symbol=="*")
		{
			cout << num1*num2 << endl;
		}
	}
	
}