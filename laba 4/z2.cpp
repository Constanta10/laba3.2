#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int x, y;
	cout << "������� 2 �����:";
	cin >> x >> y;
	if (min(x, y) == x) {
		cout << "���������� ����� ������";
	}
	else {
		cout << "���������� ����� ������";
	}
	return 0;
}