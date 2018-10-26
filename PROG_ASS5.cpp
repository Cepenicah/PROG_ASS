#include <iostream>
using namespace std;

int main()

{
int ans;

cout << "Wake up.";
cout << "\n\n";
cin.get();
system("cls");

cout << "Turn off the alarm.";
cout << "\n\n";
cin.get();
system("cls");

cout << "Fix your bed.";
cout << "\n\n";
cin.get();
system("cls");

cout << "Go to the bathroom and brush teeth.";
cout << "\n\n";
cin.get();
system("cls");

cout << "Take a bath.";
cout << "\n\n";
cin.get();
system("cls");

cout << "How many splash of water to rinse? ";
cout << "\n\n";
cin >> ans;
cin.get();
system("cls");

while (ans > 0)
{
	cout << "*splash*\n";
	ans = ans - 1;
	}	

cin.get();
system("cls");

cout << "After bath, get dressed.";
cout << "\n\n";
cin.get();
system("cls");

cout << "Make coffee.";
cout << "\n\n";
cin.get();
system("cls");


cout << "How many scoops of coffee?";
cout << "\n\n";
cin >> ans;
system("cls");
cin.get();

while (ans > 0)
{
	cout << "*scoops a teaspoon of coffee*\n";
	ans = ans -1;
}
cin.get();
system("cls");

cout << "How many scoops of sugar?";
cout << "\n\n";
cin >> ans;
system("cls");
cin.get();

while (ans > 0)
{
	cout << "*scoops a teaspoon of sugar*\n";
	ans = ans-1;
}

cin.get();
system("cls");

cout << "How many scoops of creamer?\n";
cout << "\n\n";
cin >> ans;
system("cls");
cin.get();

while (ans > 0)
{
	cout << "*scoops a teaspoon of creamer*\n";
	ans = ans -1;
}

cin.get();
system("cls");

cout << "Drink coffee.\n";
cin.get();
system("cls");

cout << "How many bread will you eat?\n\n";
cin >> ans;
system("cls");
cin.get();

while (ans > 0)
{
	cout << "*eats one bread*\n";
	ans = ans - 1;
}

cin.get();
system("cls");

cout << "Check bag before going to school.\n\n";
cout << "Lock the doors of your house.\nHow many doors are there? ";
cin >> ans;
system("cls");
cin.get();

while (ans > 0)
{
	cout << "*locks a door*\n\n";
	ans = ans -1;
}

cin.get();
cout << "How many steps will it take to go to the bus station?\n";
cin >> ans;
system("cls");
cin.get();

while (ans > 0)
{
	cout << "*step*\n\n";
	ans = ans -1;
	
}

cin.get();
system("cls");
cout << "NOW YOU'RE READY FOR SCHOOL!!";

}
