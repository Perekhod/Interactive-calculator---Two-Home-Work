//2.11 Home Work - ������� �.� 
//������������� �����������

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "������������, � - ������������� ����������� �������� v0.1!\n\n";
	repeat: // �������, ���� ������������ ����� ���������� ������������ �����������(12 � 115 ������)
	cout << "����������, ������� ��� ����� ����� ��� �������� ����� ��������� �������������� ��������:\n";

	int a, b;
	cin >> a >> b;

	char menu;

	cout << "����� �������������� �������� �� ������ ��������� � ��������� ������?\n";
	cout << "������ ������������� �������� � ������ ������: '+' '-' '*' '/' '!' '^' \n";

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
			cout << "��, �� ���� ������ ������! ������� ������ ��������:\n";
			cin >> b;
			goto zero;
		}
	zero:// �������, ���� ������������ ����� �� 0(44 � 46 ������)
		cout << a << " / " << b << " = " << a / b << endl;
		break;

	case '!':
		cout << "�� ��������� �������� '���������', ������ ��� ����������� ������ ��� ����� ������, � �� ����� ���.\n";
		cout << "� ������ ����� ����� ����������� '���������'? " << a << " ��� " << b << " ? \n";

		int value, factorial;
		cin >> value;
		factorial = 1;

	repeatfact:  // �������, ���� ������������ ���� �� a � �� b (58 � 82 ������)
		if (value == a)
		{
			for (int i = 1; i <= value; i++)
			{
				factorial *= i;
			}
			cout << "��������� ����� " << value << " = " << factorial << endl;
			break;
		}
		else if (value == b)
		{
			for (int j = 1; j <= value; j++)
			{
				factorial *= j;
			}
			cout << "��������� ����� " << value << " = " << factorial << endl;
			break;
		}
		else
		{
			cout << "��, �� ����� ������ �����!\n";
			cout << "������� " << a << " ��� " << b << endl;
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
		cout << a << " � ������� " << b << " = " << stepen << endl;
		break;
	}
	default:
		cout << "\n��...���� ������ �� ��������� � ������������� ��������� � ������ 1.0!\n\n";
	}

	cout << "��� ������ �� �������������� ������������ ������� 'q', ��� ��������� �������� 'r'\n";

	inccorect:// �������, ���� ������������ ���� �� ��� ������ (103 � 121 ������)

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
		cout << "��,�� ����� �� ��� ������!\n";
		cout << "��������� - ��� ������ �� �������������� ������������ ������� 'q', ��� ���������� ������������ 'r'\n";
		goto inccorect;
		break;
	}
	return 0;
}