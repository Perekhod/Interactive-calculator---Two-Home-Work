//02.11.23 Two Home Work - Perekhod I.S
//Interactive-calculator

#include <iostream>

int main()
{
	std::cout << "Hello, Me - Interactive Calculator by Perekhod v0.1!\n\n";
	repeat: // Return if the user wants to continue using the calculator (lines 12 and 115)
	std::cout << "Please enter two integers on which the mathematical operations will be performed:\n";

	int numberOne, numberTwo;
	std::cin >> numberOne >> numberTwo;

	char menu;

	std::cout << "What mathematical operation do you want to apply to the entered numbers?\n";
	std::cout << "List of implemented operations in this version: '+' '-' '*' '/' '!' '^' \n";

	std::cin >> menu;

	switch (menu)
	{
	case '+':
		std::cout << numberOne << " + " << numberTwo << " = " << numberOne + numberTwo << "\n";
		break;

	case '-':
		std::cout << numberOne << " - " << numberTwo << " = " << numberOne - numberTwo << "\n";
		break;

	case '*':
		std::cout << numberOne << " * " << numberTwo << " = " << numberOne * numberTwo << "\n";
		break;

	case '/':
		if (numberTwo == 0)
		{
			std::cout << "Oh, you can't divide by zero! Enter another divisor:\n";
			std::cin >> numberTwo;
			goto zero;
		}
	zero:// Return if user divides by 0(44 and 46 row)
		std::cout << numberOne << " / " << numberTwo << " = " << numberOne / numberTwo << "\n";
		break;

	case '!':
		std::cout << "You requested the 'Factorial' operation, but it only works on one number, and you entered two.\n";
		std::cout << "From what number will we calculate the 'Factorial'? " << numberOne << " or " << numberTwo << " ? \n";

		int value, factorial;
		std::cin >> value;
		factorial = 1;

	repeatfact:  // Return if the user entered neither a nor b (lines 58 and 82)
		if (value == numberOne)
		{
			for (int i = 1; i <= value; i++)
			{
				factorial *= i;
			}
			std::cout << "Factorial of a number " << value << " = " << factorial << "\n";
			break;
		}
		else if (value == numberTwo)
		{
			for (int j = 1; j <= value; j++)
			{
				factorial *= j;
			}
			std::cout << "Factorial of a number " << value << " = " << factorial << "\n";
			break;
		}
		else
		{
			std::cout << "Oops, you entered a different number!\n";
			std::cout << "Enter " << numberOne << " or " << numberTwo << "\n";
			std::cin >> value;
			goto repeatfact;
			break;
		}

	case '^':
	{
		int i = 1, extent = 1;
		while (i <= numberTwo)
		{
			extent *= numberOne;
			i++;
		}
		std::cout << numberOne << " to the extent " << numberTwo << " = " << extent << "\n";
		break;
	}
	default:
		std::cout << "\nOops... This symbol does not apply to implemented operations in the version 1.0!\n\n";
	}

	std::cout << "To exit the interactive calculator press 'q', for the next operation 'r'\n";

	inccorect:// Return if the user entered the wrong character (lines 103 and 121)

	char end;
	std::cin >> end;

	switch (end)
	{
	case 'q':
		break;

	case 'r':
		std::cout << "\n";
		goto repeat;
		break;

	default:
		std::cout << "Oops, you entered the wrong character.!\n";
		std::cout << "Reminder - to exit the interactive calculator, press 'q', to reuse 'r'\n";
		goto inccorect;
		break;
	}
}