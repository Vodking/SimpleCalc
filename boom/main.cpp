#include<iostream>
#include<cstdlib>

using namespace std;

/*
���_�������� ���_������� (���������(���������)_�������)
{
	����_�������
}
*/

int Summer(int num1, int num2)
{
	return num1 + num2;
}

int Minuser(int num1, int num2)
{
	return num1 - num2;
}

int Umnozh(int num1, int num2)
{
	return num1 * num2;
}

int Delitel(int num1, int num2)
{
	if (num2 == 0)
	{
		return 0;
	}
	else
	{
		return num1 / num2;
	}
}
int main()
{
	char deistv;
	int num1, num2;
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	cout << "�������� ��������: + - * /\n";
	cin >> deistv;
	cout << "������� ������ �����: \n";
	cin >> num1;
	cout << "������� ������ �����: \n";
	cin >> num2;
	if (deistv == '+')
	{
		cout << Summer(num1, num2);
	}
	else if (deistv == '-')
	{
		cout << Minuser(num1, num2);
	}
	else if (deistv == '*')
	{
		cout << Umnozh(num1, num2);
	}
	else if (deistv == '/')
	{
		if (Delitel(num1, num2) == 0)
		{
			cout << "�� ���� ������ ������";
		}
		else
		{
			Delitel(num1, num2);
		}
	}

	return 0;
}