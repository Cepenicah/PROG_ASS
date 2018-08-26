/*
AUTHOR : Nicah S. Cepe
DATE : 13/08/2018
NAME : 
DESCRIPTION : This program solves the three expressions from the values of a,b,c,d inputted by the user
ARGUMENTS : if statement and while statement
RETURNS : none
NOTES : none
CHANGE HISTORY : None
*/

#include <iostream>
using namespace std;

int main ()
{
	int a, b, c, d;
	char ans = 'y';
	
	while (ans == 'y')
	{
			cout << "\n\n\n" << "\t\t\t\t\t\tExpressions:\n" << "\t\t\t\t\t\t1.) (a+b) < (b - c)\n";
	cout << "\t\t\t\t\t\t2.) (!(a*c) > c++)\n" << "\t\t\t\t\t\t3.) (d + c + b) >= !(b*c) or (a*b) <= (d+c+b)\n\n";
	cout << endl << "\t\t\t\t\t\tEnter value" << endl << "\t\t\t\t\t\ta: ";
	cin >> a;
	cout << "\t\t\t\t\t\tb: ";
	cin >> b;
	cout << "\t\t\t\t\t\tc: ";
	cin >> c;
	cout << "\t\t\t\t\t\td: ";
	cin >> d;
	cout << "\n\n";
	
	
	if ((a+b) < (b - c) == true)
	{
		cout << "\t\t\t\t\t\tNo. 1 is True!" << endl;
	}
	else
	{
		cout << "\t\t\t\t\t\tNo. 1 is False!" << endl;
	}
	
	if ((!(a*c) > c++) == true)
	{
		cout << "\t\t\t\t\t\tNo. 2 is True!" << endl;
	}
	else
	{
		cout << "\t\t\t\t\t\tNo. 2 is False!" << endl;
	}
	
	if ((d + c + b) >= !(b*c) or (a*b) <= (d+c+b) == true)
	{
		cout << "\t\t\t\t\t\tNo. 3 is True!" << endl;
		
	}
	else
	{
		cout << "\t\t\t\t\t\tNo. 3 is False!" << endl;
	}
	
	cout << "\n\n" << "\t\t\t\t\t\tTry again? (y/n) ";
	cin >> ans;
	}
	

	
}
