//02.11.23 Two Home Work - Perekhod I.S
//Interactive-calculator

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello, Me - Interactive Calculator by Perekhod v0.1!\n\n";
	repeat: // Return if the user wants to continue using the calculator (lines 12 and 115)
	cout << "Please enter two integers on which the mathematical operations will be performed:\n";

	int a, b;
	cin >> a >> b;

	char menu;

	cout << "What mathematical operation do you want to apply to the entered numbers?\n";
	cout << "List of implemented operations in this version: '+' '-' '*' '/' '!' '^' \n";

	cin >> menu;

	switch (menu)
	{
	case '+':
		cout << a << " + " << b << " = " << a + b << endl;
		break;

	case '-':
		cout << a << " - " << b << " = " << a - b << endl;
		break;

	case '*':
		cout << a << " * " << b << " = " << a * b << endl;
		break;

	case '/':
		if (b == 0)
		{
			cout << "Oh, you can't divide by zero! Enter another divisor:\n";
			cin >> b;
			goto zero;
		}
	zero:// Return if user divides by 0(44 and 46 row)
		cout << a << " / " << b << " = " << a / b << endl;
		break;

	case '!':
		cout << "You requested the 'Factorial' operation, but it only works on one number, and you entered two.\n";
		cout << "From what number will we calculate the 'Factorial'?" << a << " или " << b << " ? \n";

		int value, factorial;
		cin >> value;
		factorial = 1;

	repeatfact:  // Return if the user entered neither a nor b (lines 58 and 82)
		if (value == a)
		{
			for (int i = 1; i <= value; i++)
			{
				factorial *= i;
			}
			cout << "Factorial of a number " << value << " = " << factorial << endl;
			break;
		}
		else if (value == b)
		{
			for (int j = 1; j <= value; j++)
			{
				factorial *= j;
			}
			cout << "Factorial of a number " << value << " = " << factorial << endl;
			break;
		}
		else
		{
			cout << "Oops, you entered a different number!\n";
			cout << "Enter " << a << " or " << b << endl;
			cin >> value;
			goto repeatfact;
			break;
		}

	case '^':
	{
		int i = 1, stepen = 1;
		while (i <= b)
		{
			stepen *= int(a);
			i++;
		}
		cout << a << "to the extent " << b << " = " << stepen << endl;
		break;
	}
	default:
		cout << "\nOops... This symbol does not apply to implemented operations in the version 1.0!\n\n";
	}

	cout << "To exit the interactive calculator press 'q', for the next operation 'r'\n";

	inccorect:// Return if the user entered the wrong character (lines 103 and 121)

	char end;
	cin >> end;

	switch (end)
	{
	case 'q':
		break;

	case 'r':
		cout << "\n";
		goto repeat;
		break;

	default:
		cout << "Oops, you entered the wrong character.!\n";
		cout << "Reminder - to exit the interactive calculator, press 'q', to reuse 'r'\n";
		goto inccorect;
		break;
	}
	return 0;
}