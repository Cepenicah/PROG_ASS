/*
AUTHOR : Nicah S. Cepe
DATE : July 27, 2018
NAME : AREA CALCULATOR
DESCRIPTION : This program is used to compute the area of triangles, circles, squares, or rectangles using the mathematical formulas.
ARGUMENTS : if statement and while statement
RETURNS : none
NOTES : The area to be computed is limited only to the said figures
CHANGE HISTORY : None
*/

#include <iostream>
#include <cmath> // For the use of M_PI and sqrt
using namespace std;

int main()
{
	//Set of declarations for the triangle
	float a,b,c; //sides of the triangle
	float s, s1, a_triangle; // used for the computation and output for the triangle
	float base_triangle, height_triangle;
	char choice_triangle; // to store the chosen option in solving the triangle
	
	//Set of declarations for the square
	float length_square, a_square;
	
	//Set of declarations for the circle
	float circ_radius, a_circle;
	
	//Set of declarations for rectangle
	float a_rectangle, width_rectang, length_rectang;
	
	char continue_ans = 'y'; // stores the answer to continue or exit the program, initialized into 'y'
	char choice_area; //stores answer which figure to compute the area
	
	
while (continue_ans == 'y') // loop that works until the user answers 'n' to continue
{
			
			// Display for title of the program and the choices for which to compute
	cout << "\n\n" << "\t\t\t\t\t\tAREA CALCULATOR" << endl;
	cout << "\t\t\t\t\tCompute area of: \n\n" << "\t\t\t\t\t1 - triangle\n\t\t\t\t\t2 - square\n\t\t\t\t\t3 - circle\n\t\t\t\t\t4 - rectangle\n\t\t\t\t\tchoice: ";
	cin >> choice_area;
	
	//if-else statement that depends on the chosen answer
	if (choice_area == '1')
	{
		//SOLVING FOR TRIANGLES
	cout << "\n\n\t\t\t\t\t\tSOLVING AREA OF A TRIANGLE" << endl;
	cout << "\t\t\t\t\tWhat do you have? \n" << "\t\t\t\t\ts - sides of the triangle\n" << "\t\t\t\t\tb - base and height of a triangle.\n" << "\t\t\t\t\tchoice: ";
	cin >> choice_triangle;
	
	//IF STATEMENTS
	//IF THE USER CHOSE THE SIDES OF THE TRIANGLE
		if (choice_triangle == 's' or choice_triangle == 'S') // may be in all caps or not
	{
		//Prompt the user to input the lengths of the sides
	cout << "\n\t\t\t\t\tEnter the lengths of the sides of the triangle. " << endl;
	cout << "\t\t\t\t\ta: ";
	cin >> a;
	cout << "\t\t\t\t\tb: ";
	cin >> b;
	cout << "\t\t\t\t\tc: ";
	cin >> c;
	cout << "\n\n";
	
	//Computation using the HERON'S FORMULA
	s = (a+b+c) / 2;
	s1 = s * (s-a) * (s-b) * (s-c);
	a_triangle = sqrt(s1);
	
	//Display the answer
	cout << "\t\t\t\t\tArea: " << a_triangle << endl;
	
	cout << "\n\t\t\t\t\tContinue? y/n ";
	cin >> continue_ans;
	}
	//IF THE USER CHOSE THE LENGTH AND WIDTH OF A TRIANGLE
	else if (choice_triangle == 'b' or choice_triangle == 'B') // May be in all caps or not
	{
		//Prompt the user to enter the height and base
		cout << "\n\t\t\t\t\tHeight of the triangle: ";
		cin >> height_triangle;
		cout << "\t\t\t\t\tBase of the triangle: ";
		cin >> base_triangle;
		
		//Computations using the formula a = 1/2bh
		a_triangle = (base_triangle*height_triangle) / 2;
		
		//Display the answer
		cout << "\n\t\t\t\t\tArea: " << a_triangle << endl;
	
		cout << "\n\t\t\t\t\tContinue? y/n ";
		cin >> continue_ans;
	}
	
	else //if the chosen input is invalid
	{
		//Display error statement
		cout << "\n\t\t\t\t\t" << "You have entered an invalid input. \n\n";
	}
	}
	
	else if (choice_area == '2')
	//SOLVING FOR SQUARES
	{
	cout << "\n\n\t\t\t\t\t\tSOLVING AREA OF A SQUARE" << endl;
	
	//Prompt the user to input length of a square
	cout << "\t\t\t\t\tEnter length of the sides: ";
	cin >> length_square;
	
	//Computation using the formula a = length*length
	a_square = (length_square*length_square);
	
	//Display the answer
	cout << "\n\t\t\t\t\tArea: " << a_square;
	
	cout << "\n\t\t\t\t\tContinue? y/n ";
	cin >> continue_ans;
	}
	
	else if (choice_area == '3')
	{
		//SOLVING FOR CIRCLES
		
	cout << "\n\n\t\t\t\t\t\tSOLVING AREA OF A CIRCLE" << endl;
	
	//Prompt the user to enter the radius
	cout << "\t\t\t\t\tEnter radius: ";
	cin >> circ_radius;
	
	//Computation using the formula a = pi*r*r
	a_circle = M_PI*(circ_radius*circ_radius);
	
	//Display the answer
	cout << "\n\t\t\t\t\tArea: " << a_circle;
	
	cout << "\n\t\t\t\t\tContinue? y/n ";
	cin >> continue_ans;
	}
	
	else if (choice_area == '4')
	{
		//SOLVING FOR RECTANGLES
	cout << "\n\n\t\t\t\t\t\tSOLVING AREA OF A RECTANGLE" << endl;
	
	//Prompt the user to enter the length and width
	cout << "\t\t\t\t\tEnter length: ";
	cin >> length_rectang;
	cout << "\t\t\t\t\tEnter width: ";
	cin >> width_rectang;
	
	//Computation using the formula a = l*w
	a_rectangle = (length_rectang*width_rectang);
	
	//Display the answer
	cout << "\n\t\t\t\t\tArea: " << a_rectangle;
	
	cout << "\n\t\t\t\t\tContinue? y/n ";
	cin >> continue_ans;
	}
	else //This happens if the chosen input is invalid
	{
	cout << "\n\t\t\t\t\tYou have entered a wrong option.\n";
	
	cout << "\n\t\t\t\t\tContinue? y/n ";
	cin >> continue_ans;
	}
	
}	
	//Display to exit the program
	cout << "\t\t\t\t\tPress Enter to exit.";
	
	return 0;
		}
	
