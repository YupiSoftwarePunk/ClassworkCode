#include <iostream>
#include <cstdlib>
//a = rand() % 7 + 11;  �� 11 �� 17
using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	float veight, distance1, distance2;
	int fuel_tank = 500;
	float fuelB = 0.0, fuelC = 0.0;

	cout << "����������� �� ������� ������� ��� ��������� �����" << "\n";

	cout << "������� ��� �����: ";
	cin >> veight;
	if (veight < 0)
	{
		do
		{
			cout << "������� ��� �����" << endl;
			cin >> veight;
		} while (veight < 0);
	}

	if (veight > 1900)
	{
		do
		{
			cout << "��� ����� ������� �������, ��� �������� �� �������" << endl;
			cout << "������� ��� �����: ";
			cin >> veight;
		} while (veight > 1900);
	}

	cout << "�� ����� �� ������ � � ����� � ����� ����� �, ������� ���������� �� � �� � � �� � �� � ����� enter: ";
	cin >> distance1;
	if (distance1 < 0)
	{
		do
		{
			cout << "������� ���������� 1 �����" << endl;
			cin >> distance1;
		} while (distance1 < 0);
	}

	cout << "������� ���������� 2: ";
	cin >> distance2;
	if (distance2 < 0)
	{
		do
		{
			cout << "������� ���������� 2 �����" << endl;
			cin >> distance2;
		} while (distance2 < 0);
	}



	if (0 < veight && veight < 400)
	{
		fuelB = distance1 / 10 * 2;
		fuelC = distance2 / 10 * 2;
	}
	else if (400 <= veight && veight < 900)
	{
		fuelB = distance1 / 10 * 5;
		fuelC = distance2 / 10 * 5;
	}
	else if (900 <= veight && veight < 1400)
	{
		fuelB = distance1 / 10 * 8;
		fuelC = distance2 / 10 * 8;
	}
	else if (1400 <= veight && veight <= 1900)
	{
		fuelB = distance1 / 10 * 11;
		fuelC = distance2 / 10 * 11;
	}


	if (fuel_tank >= fuelB + fuelC)
	{
		cout << "���������� � ������ � �� ���������" << endl;
	}

	if (fuelB + fuelC - fuel_tank > 500)
	{
		cout << "� ��������� �� �� ������ �������" << endl;
	}

	else if (fuel_tank < fuelB + fuelC)
	{
		cout << "����������� ����������� " << (fuelB + fuelC) - fuel_tank << " ������" << endl;
	}

}