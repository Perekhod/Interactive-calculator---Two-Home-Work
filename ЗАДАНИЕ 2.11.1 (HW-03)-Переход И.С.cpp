//2.11 Home Work - Переход И.С 
//Интерактивный калькулятор

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Здравствуйте, Я - Интерактивный калькулятор Перехода v0.1!\n\n";
	repeat: // Возврат, если пользователь хочет продолжить использовать калькулятор(12 и 115 строка)
	cout << "Пожалуйста, введите два целых числа над которыми будут выполнены математические операции:\n";

	int a, b;
	cin >> a >> b;

	char menu;

	cout << "Какую математическую операцию Вы хотите применить к введенным числам?\n";
	cout << "Список реализованных операций в данной версии: '+' '-' '*' '/' '!' '^' \n";

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
			cout << "Ой, на ноль делить нельзя! Введите другой делитель:\n";
			cin >> b;
			goto zero;
		}
	zero:// Возврат, если пользователь делит на 0(44 и 46 строка)
		cout << a << " / " << b << " = " << a / b << endl;
		break;

	case '!':
		cout << "Вы запросили операцию 'Факториал', однако она выполняется только над одним числом, а вы ввели два.\n";
		cout << "У какого числа будем высчитывать 'Факториал'? " << a << " или " << b << " ? \n";

		int value, factorial;
		cin >> value;
		factorial = 1;

	repeatfact:  // Возврат, если пользователь ввел не a и не b (58 и 82 строка)
		if (value == a)
		{
			for (int i = 1; i <= value; i++)
			{
				factorial *= i;
			}
			cout << "Факториал числа " << value << " = " << factorial << endl;
			break;
		}
		else if (value == b)
		{
			for (int j = 1; j <= value; j++)
			{
				factorial *= j;
			}
			cout << "Факториал числа " << value << " = " << factorial << endl;
			break;
		}
		else
		{
			cout << "Ой, Вы ввели другое число!\n";
			cout << "Введите " << a << " или " << b << endl;
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
		cout << a << " в степени " << b << " = " << stepen << endl;
		break;
	}
	default:
		cout << "\nОй...Этот символ не относится к реализованным операциям в версии 1.0!\n\n";
	}

	cout << "Для выхода из интерактивного калькулятора нажмите 'q', для следующей операции 'r'\n";

	inccorect:// Возврат, если пользователь ввел не тот символ (103 и 121 строка)

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
		cout << "Ой,вы ввели не тот символ!\n";
		cout << "Напоминаю - для выхода из интерактивного калькулятора нажмите 'q', для повторного исользования 'r'\n";
		goto inccorect;
		break;
	}
	return 0;
}