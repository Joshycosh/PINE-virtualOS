//PINE VIRTUAL
//note all of it is still not complete
// and yes i am a begginer so pls dont judge me lel
#include <iostream>
#include "LIST.c"
#include "version.c"
#include "ECHOMODE.cpp"
#include "cal.cpp"
#include "crossword.cpp"
using namespace std;
string input;

int main()
{
	cout <<"pineOS 0.1.5 TYPE '?' to open help menu" << endl;
	while (true)
	{
		cin >> input;
		if (input=="?")
		{
			list(); 
		}
		
		else if (input =="osver")
		{
			version();
		}
		
		else if (input=="exit")
		{
			break;
		}
		
		else if (input =="aecho")
		{
			echo();
		}
		
		else if (input =="echo")
		{
			inl_echo();
		}
		
		else if (input =="cal")
		{
			calculator();
		}
		else if (input =="crosswords")
		{
			crosswords();
		}
		
		else if (input =="OS.update")
		{
			cout <<"[UPDATE IS CURRENTLY NOT AVAILABLE [UPDATE SERVICES MAY BE DOWN] [ERR:401]]" << endl;
		}
		
		
		else
		cout <<"[SYSTEM] "+  input + " is not a command [ERR:COMMAND_NOT_FOUND] " << endl;
		
	}
	return 0;
}