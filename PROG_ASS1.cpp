// CURRENCY CONVERTER, Nicah S. Cepe 22-07-2018
#include <iostream>
using namespace std;

void chose();
bool ans = 'y' == true;

void chose()
{
	//FOR THE CURRENCY OPTIONS
			cout << "\n\t\t1 - US Dollar\t\t\t6 - Canadian Dollar\t\t11 - South Korean Won" << endl;
			cout << "\t\t2 - Euro\t\t\t7 - Singapore Dollar\t\t12 - Hong Kong Dollar" << endl;
			cout << "\t\t3 - British Pound\t\t8 - Swiss Franc\t\t\t13 - Chinese Yuan Renminbi" << endl;
			cout << "\t\t4 - Indian Rupee\t\t9 - Malaysian Ringgit\t\t14 - New Zealand Dollar" << endl;
			cout << "\t\t5 - Australian Dollar\t\t10 - Japanese Yen\t\t15 - Taiwan New Dollar" << endl << endl << endl;
}
int main()
{
	//DECLARING VARIABLES
	float US = 53.347944, CANADA = 40.605646, SOKOR = 0.047359, EURO = 62.575354, SINGA = 39.181395, HONGKONG = 6.800207;
	float BRITISH = 70.075235, SWISS = 53.785468, CHINESE = 7.889572, INDIAN = 0.776384, MALAY = 13.139407, NEWZEALAND = 36.339520;
	float AUST = 39.628553, JAPANESE = 0.479060, THAI = 1.742128;
	float AMT = 0;
	double CONVAMT = 0;
	char ans = 'y';
	int CURRENCY = '0';
	char func;


			cout << "\n\n\t\t\t\t\t\tPESO CURRENCY CONVERTER\n\n\n";
			
			while (ans == 'y')
			
			{
					cout << "\n\t\tSELECT FUNCTION:" << "\n\t\tP - Convert Peso to a currency\n\t\tC - Convert currency to Peso" << "\n\t\tP/C: ";
		cin >> func;
		
		
if (func == 'c' or func == 'C')
{
		 chose();
		// THE USER SHALL CONVERT CURRENCY TO PESO	
		cout << "\t\t\tCONVERT FROM: ";
		cin >> CURRENCY;
		cout << "\t\t\tEnter amount in the selected currency: ";
		cin >> AMT;
		
		if (CURRENCY == 1) 
	{
		
		CONVAMT = (AMT * US);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 2) 
	{
	CONVAMT = (AMT * EURO);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 3) 
	{
	CONVAMT = (AMT * BRITISH);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 4) 
	{
	CONVAMT = (AMT * INDIAN);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 5) 
	{
	CONVAMT = (AMT * AUST);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 6) 
	{
	CONVAMT = (AMT * CANADA);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 7) 
	{
	CONVAMT = (AMT * SINGA);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 8) 
	{
	CONVAMT = (AMT * SWISS);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 9) 
	{
	CONVAMT = (AMT * MALAY);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 10) 
	{
	CONVAMT = (AMT * JAPANESE);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 11) 
	{
	CONVAMT = (AMT * SOKOR);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 12) 
	{
	CONVAMT = (AMT * HONGKONG);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 13) 
	{
	CONVAMT = (AMT * CHINESE);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 14) 
	{
	CONVAMT = (AMT * NEWZEALAND);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	
	else if (CURRENCY == 15) 
	{
	CONVAMT = (AMT * THAI);
		cout << "\t\t\tThe amount is Php " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
}
else if (func == 'p' or func == 'P')
{
	chose();
	//THE USER SHALL CONVERT PESO TO CURRENCY
	cout << "\t\t\tCONVERT TO: ";
	cin >> CURRENCY;
	cout << "\t\t\tEnter amount in peso: Php ";
	cin >> AMT;
	
	if (CURRENCY == 1) 
	{
		CONVAMT = (AMT / US);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 2) 
	{
	CONVAMT = (AMT / EURO);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 3) 
	{
	CONVAMT = (AMT / BRITISH);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 4) 
	{
	CONVAMT = (AMT / INDIAN);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 5) 
	{
	CONVAMT = (AMT / AUST);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 6) 
	{
	CONVAMT = (AMT / CANADA);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 7) 
	{
	CONVAMT = (AMT / SINGA);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 8) 
	{
	CONVAMT = (AMT / SWISS);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 9) 
	{
	CONVAMT = (AMT / MALAY);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 10) 
	{
	CONVAMT = (AMT / JAPANESE);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 11) 
	{
	CONVAMT = (AMT / SOKOR);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 12) 
	{
	CONVAMT = (AMT / HONGKONG);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 13) 
	{
	CONVAMT = (AMT / CHINESE);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else if (CURRENCY == 14) 
	{
	CONVAMT = (AMT / NEWZEALAND);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	
	else if (CURRENCY == 15) 
	{
	CONVAMT = (AMT / THAI);
		cout << "\t\t\tThe amount is " << CONVAMT << "\n\n";
		cout << "\t\t\tContinue? (y/n) ";
		cin >> ans;
	}
	else
	{
		cout << "\t\t\tYou have entered an invalid option.";
	cout << "\t\t\tContinue? (y/n) ";
	cin >> ans;
	 } 
	
}
else
{
	cout << "\t\t\tYou have entered an invalid option.";
	cout << "\t\t\tContinue? (y/n) ";
	cin >> ans;
}
			}
		cout << "\n\t\t\tPress Enter to Exit. ";
		return 0;
		
	}
