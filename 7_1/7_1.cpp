#include <iostream>
#define MODE 3

#ifndef MODE
#error Необходимо определить MODE
#endif // !MODE

#if MODE == 1
int add(int x, int y)
{
	return x + y;
}
#endif // !1

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int num1 = -999, num2 = -999;

#if MODE == 0
	cout << "Работаю в режиме тренировки" << endl;

#elif MODE == 1
	cout << "Работаю в боевом режиме" << endl;
	cout << "Введите число 1: ";
	cin >> num1;
	cout << "Введите число 2: ";
	cin >> num2;
	cout << "Результат сложения: " << add(num1, num2);

#else
	cout << "Неизвестный режим. Завершение работы" << endl;
#endif
}
