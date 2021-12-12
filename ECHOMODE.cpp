#include <iostream>
#include <string>
using namespace std;


void echo()
{
	string echo;
	cout <<"Echo mode activated type 'exit' to close " << endl;
	while (true)
	{
		cin >> echo;
		cout << echo << endl;
	     if (echo=="exit")
		{
			cout <<"[EXITED ECHO MODE]" << endl;
			break;
		}
	}
}
void inl_echo()
{
	string echo_In;
	cin >> echo_In;
	cout << echo_In << endl;
}