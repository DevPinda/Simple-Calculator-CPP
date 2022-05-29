#include <iostream>
using namespace std;

/*
* Declaration and Initialisation of Global Variables.
*/
double inp1;
double inp2;
char inp3 = ' ';
const string nwLn = "\n";
const string space = " ";
const string x = "x";
const string y = "y";
string inp4 = "";
int cases;
double res1;

/*
* Main method compiles and runs the code in the Body { }.
*/
int main()
{
	/*
	* DO WHILE Loop which restarts the program indefinetely until user inputs 'x' in the last WHILE loop.
	*/
	do {
		cout << nwLn << "Welcome to the Simple Calculator!" + nwLn;

		/*
		* WHILE Loop which allows user to input first numerical value and performs input validation.
		*/
		while (1) {
			cout << "\n";
			cout << nwLn + "Please input the First Numerical value:" + nwLn;
			cin >> inp1;
			cout << nwLn;
			if (!cin)
			{
				cout << "* Error: Invalid Input, input a Numerical value! *" + nwLn;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				break;
			}
		}

		/*
		* WHILE Loop which allows user to input second numerical value and performs input validation.
		*/
		while (1) {
			cout << nwLn + "Please input the Second Numerical value:" + nwLn;
			cin >> inp2;
			cout << nwLn;
			if (!cin)
			{
				cout << "* Error: Invalid Input, input a Numerical value! *" + nwLn + nwLn;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else {
				break;
			}
		}

		/*
		* DO WHILE Loop which allows user to select mathematical operator and performs input validation.
		*/
		do {
			cin.clear();
			cout << nwLn + "Please input the mathetical operator ('+' | '-' | '*' | '/'):" + nwLn;
			cin >> inp3;
			if (inp3 != '/' && inp3 != '*' && inp3 != '+' && inp3 != '-') {
				cout << nwLn + nwLn + "Error: Invalid Input, input the shown character" + nwLn + nwLn;
			}
			else {
				break;
			}
		} while (inp3 != '/' && inp3 != '*' && inp3 != '+' && inp3 != '-');

		/*
		* IF and ELSE IF statements which set the value of the Switch Expression Integer variable 'cases'.
		*/
		if (inp3 == '+') {
			cases = 1;
		}
		else if (inp3 == '-') {
			cases = 2;
		}
		else if (inp3 == '*') {
			cases = 3;
		}
		else if (inp3 == '/') {
			cases = 4;
		}

		/*
		* Switch statement consisting of four cases which are each a mathetical operator decided by the user
		* and perform the calculation then print it out.
		*/
		switch (cases) {
		case 1:
			res1 = inp1 + inp2;
			cout << nwLn << "The result for " << inp1 << space << inp3 << space << inp2 << " is: " << res1 << nwLn;
			break;
		case 2:
			res1 = inp1 - inp2;
			cout << nwLn << "The result for " << inp1 << space << inp3 << space << inp2 << " is: " << res1 << nwLn;
			break;
		case 3:
			res1 = inp1 * inp2;
			cout << nwLn << "The result for " << inp1 << space << inp3 << space << inp2 << " is: " << res1 << nwLn;
			break;
		case 4:
			res1 = inp1 / inp2;
			cout << nwLn << "The result for " << inp1 << space << inp3 << space << inp2 << " is: " << res1 << nwLn;
			break;
		}

		/*
		* WHILE Loop which asks for the user to confirm to exit the program or restart the program.
		*/
		while (true) {
			cin.clear();
			cout << nwLn + "Input 'x' to exit program or 'y' to restart: " + nwLn;
			cin >> inp4;
			if (inp4 != x && inp4 != y) {
				cout << nwLn + "* Error: Invalid Input, input correct character! *" + nwLn;
			}
			else if (inp4 == x) {
				exit(1);
			}
			else if (inp4 == y) {
				break;
			}
		}
	} while (true);
}