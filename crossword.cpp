#include <iostream>

using namespace std;

void crosswords()
{
	string cwIN;
	cout <<"****************" << endl;
	cout <<"Crosswords! find a word below the chart!" << endl;
	cout <<"Level 1" << endl;
	cout <<"ABDCDKDYEGXHS" << endl;
	cout <<"GDFWCNDDFSFSF" << endl;
	cout <<"WFSGEUSFWFDOP" << endl;
	cout <<"WSFWFJWSTWFPL" << endl;
	cout <<"****************" << endl;
	while (true)
	{
		cin >> cwIN;
		if (cwIN=="junk")
		{
			cout <<"Correct!" << endl;
			cout<<"Level 2 will be added on the next update!"<< endl;
			
		}
		else
		cout <<"Wrong answer! Try again!" << endl;
	}

}