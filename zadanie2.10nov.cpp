

#include <iostream>
using namespace std;

double convertSaztoMetr(double saz)
{
	return saz * 2.1366;
}

double converDyumtoSan(double dyum)
{
	return dyum * 2.5;
}

double convertFuttoMetr(double fut)
{
	return fut * 0.3048;
}

double convertDrahmtoGram(double drahm)
{
	return drahm * 3.17325;
}

double convertUnctoGram(double unc)
{
	return unc * 29.86;
}

double convertFunttoKilo(double funt)
{
	return funt * 0.40961;
}
double convertArshintoMetr(double arshin)
{
	return arshin * 0.7112;
}

double convertZolottoGram(double zolot)
{
	return zolot * 4.2657;
}

double convertDyuumtoMillo(double dyuum)
{
	return dyuum * 25.3995;
}

int main()
{
	setlocale(LC_ALL, "russian");
	int choice;
	double value;

	cout << "Сажени в метры:" << endl;
	cout << "1. Сажени в метры" << endl;
	cout << "2. Дюймов в сантиметры" << endl;
	cout << "3. Футов в метры" << endl;
	cout << "4. Драхм в граммы" << endl;
	cout << "5. Унций в граммы" << endl;
	cout << "6. Фунтов в килограммы" << endl;
	cout << "7. Аршинов в метры" << endl;
	cout << "8. Золотников в граммы" << endl;
	cout << "9. Дюймов в миллиметры" << endl;
	cout << "Ваш выбор: ";
	cin >> choice;

	cout << "Выберите перевод:";
	cin >> value;
	double convertedValue;

	switch (choice)
	{
	case 1:
		convertedValue = convertSaztoMetr(value);
		cout << value << " саженей = " << convertedValue << " метров" << endl;
		break;
	case 2:
		convertedValue = converDyumtoSan(value);
		cout << value << " дюймов = " << convertedValue << " сантиметров" << endl;
		break;
	case 3:
		convertedValue = convertFuttoMetr(value);
		cout << value << " футов = " << convertedValue << " метров" << endl;
		break;
	case 4:
		convertedValue = convertDrahmtoGram(value);
		cout << value << " драхм = " << convertedValue << " грамм" << endl;
		break;
	case 5:
		convertedValue = convertUnctoGram(value);
		cout << value << " унций = " << convertedValue << " грамм" << endl;
		break;
	case 6:
		convertedValue = convertFunttoKilo(value);
		cout << value << " фунтов = " << convertedValue << " килограмм" << endl;
		break;
	case 7:
		convertedValue = convertArshintoMetr(value);
		cout << value << " аршинов = " << convertedValue << " метров" << endl;
		break;
	case 8:
		convertedValue = convertZolottoGram(value);
		cout << value << " золотников = " << convertedValue << " грамм" << endl;
		break;
	case 9:
		convertedValue = convertDyuumtoMillo(value);
		cout << value << " дюймов = " << convertedValue << " миллиметров" << endl;
		break;
	}
	
	

	return 0;



}



