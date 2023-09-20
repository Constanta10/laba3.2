#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int x, y;
	cout << "введите 2 числа:";
	cin >> x >> y;
	if (min(x, y) == x) {
		cout << "Наименьшее число первое";
	}
	else {
		cout << "Наименьшее число второе";
	}
	return 0;
}