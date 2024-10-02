#include <iostream>
#include <cstdlib>
//a = rand() % 7 + 11;  от 11 до 17
using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	float veight, distance1, distance2;
	int fuel_tank = 500;
	float fuelB = 0.0, fuelC = 0.0;

	cout << "Калькулятор по расчету топлива для перевозки груза" << "\n";

	cout << "Введите вес груза: ";
	cin >> veight;
	if (veight < 0)
	{
		do
		{
			cout << "Введите вес снова" << endl;
			cin >> veight;
		} while (veight < 0);
	}

	if (veight > 1900)
	{
		do
		{
			cout << "Вес груза слишком большой, наш грузовик не потянет" << endl;
			cout << "Введите вес снова: ";
			cin >> veight;
		} while (veight > 1900);
	}

	cout << "Вы едете из пункта А в пункт С через пункт В, введите расстояние от А до В и от В до С через enter: ";
	cin >> distance1;
	if (distance1 < 0)
	{
		do
		{
			cout << "Введите расстояние 1 снова" << endl;
			cin >> distance1;
		} while (distance1 < 0);
	}

	cout << "Введите расстояние 2: ";
	cin >> distance2;
	if (distance2 < 0)
	{
		do
		{
			cout << "Введите расстояние 2 снова" << endl;
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
		cout << "Дозаправка в пункте В не требуется" << endl;
	}

	if (fuelB + fuelC - fuel_tank > 500)
	{
		cout << "К сожалению мы не сможем доехать" << endl;
	}

	else if (fuel_tank < fuelB + fuelC)
	{
		cout << "Потребуется дозаправить " << (fuelB + fuelC) - fuel_tank << " литров" << endl;
	}

}
