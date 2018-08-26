/*
AUTHOR : Nicah S. Cepe
DATE : 24/08/18
NAME : PROG_ASS4: MATH PROBLEM
DESCRIPTION : This program computes a math problem about gravity and acceleration.
ARGUMENTS : none
RETURNS : none
CHANGE HISTORY : None
*/
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float distance, time, time2, a;
	cout << "\t\tAn object is dropped, with no initial velocity, above the surface of planet Big Alpha and \n\t\tfalls _____ (distance in meters) in _____ (time in seconds) seconds.";
	cout << "The radius of planet Big alpha \n\t\tis 5820000 meters (constant).\n";
	cout << "\t\tFind the acceleration of the falling object." << "\n\n";
	cout << "\t\tEnter given:\n";
	cout << "\t\tDistance: ";
	cin >> distance;
	cout << "\t\tTime: ";
	cin >> time;
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	//SOLUTION TO A
	
	time2 = time*time;
	a = 2 * (distance / time2);
	
	cout << "\n\t\tPROBLEM:\n";
	cout << "\t\tAn object is dropped, with no initial velocity, above the surface of planet Big Alpha and \n\t\tfalls " << distance << " in " << time << " seconds.";
	cout << " The radius of planet Big alpha is 5820000 meters (constant). ";
	cout << "\n\t\tFind the acceleration of the falling object." << "\n\n";
	cout << "\t\tGIVEN:\n\t\tDistance = " << distance << ", Time = " << time << "\n\n";
	cout << "\t\tSOLUTION:\n\t\tacceleration = 2 * (distance/time*time)\n\t\tacceleration = 2 * (" << distance << " / " << time2 << ")" << "\n\t\tacceleration = " << a;
	cout << "\n\n\t\tANSWER: The acceleration of the falling object is " << a << ".\n\n"; 
	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	
	return 0;
}
