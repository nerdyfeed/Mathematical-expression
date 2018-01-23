#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, x;
	start:
	cout << "*********************************\n";
	cout << "Математическое выражение в C++\n";
	cout << "\t-----\n";
	cout << "Для выхода из программы введите 0\n";
	cout << "*********************************\n";
	cout << "\n";
	cout << "Введите число a\n";
	cin >> a;
	if (a == 0)
	{
	  cout << "Выход... \n";
	  return 0;
	}
	cout << "Введите число b\n";
	cin >> b;
		if (b == 0)
	{
	  cout << "Выход... \n";
	  return 0;
	}
	cout << "Введите число c\n";
	cin >> c;
		if (c == 0)
	{
	  cout << "Выход... \n";
	  return 0;
	}
	cout << "Вычисляется по формуле: x=(a + b - c / a) + c * a * a - (a + b)\n";
	x = (a + b - c / a) + c * a * a - (a + b);
	cout << "х = " << x << endl;
	cout << "\n";
	cout << "\n";
	// Очистка консоли cout << string( 100, '\n' );
	goto start;
	return 0;
}