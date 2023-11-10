

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	double vklad;
	int years;
	double stavka = 0.03;
	cout << "Введите сумму:";
	cin >> years;

	cout << "Введите количество лет:";
	cin >> vklad;

	double amount = vklad * pow(1 + stavka, years);

	cout << "Сумма через" << years << "будет: " << amount <<  "рублей" << endl;


	return 0;



}

