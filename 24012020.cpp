#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a;
	char b; long long rez = 1;
	cout << "Введите число: ";
	cin >> a;
	cout << "Введите единицу измерения количества информации: ";
	cin >> b;
	switch (b) {
	default: cout << "Ошибка" << endl; break;
	case 'g': rez *= 1024;
	case 'm': rez *= 1024;
	case 'k': rez *= 1024;
	case 'b': rez *= a;
		cout << rez << endl;
	}
	return 0;
}
/*SetConsoleOutputCP(1251);
	int a;
	char b; long long rez = 1;
	cout << "Введите число: ";
	cin >> a;
	cout << "Введите единицу измерения количества информации: ";
	cin >> b;
	switch (b) {
	default: cout << "Ошибка" << endl; break;
	case 'g': rez *= 1024;
	case 'm': rez *= 1024;
	case 'k': rez *= 1024;
	case 'b': rez *= a;
		cout << rez << endl;
	}
	return 0;*/

	/*SetConsoleOutputCP(1251);
		int a;
		char b;
		cout << "Введите число: ";
		cin >> a;
		cout << "Введите единицу измерения количества информации: ";
		cin >> b;
		switch (b) {
		case 'b': cout << a; break;
		case 'k': cout << a * 1024; break;
		case 'm': cout << a * 1024 * 1024; break;
		case 'g': cout << (long long)a * 1024 * 1024 * 1024; break; // або так case 'g': cout << ll a * 1024 * 1024 * 1024; break;
		default: cout << "Ошибка";
		}
		return 0;*/

		/*SetConsoleOutputCP(1251);
			int a;
			char b;
			cout << "Введите число: ";
			cin >> a;
			cout << "Введите единицу измерения количества информации: ";
			cin >> b;
			switch (b) {
			case 'b': cout << a; break;
			case 'k': cout << a * 1024; break;
			case 'm': cout << a * 1024 * 1024; break;
			case 'g': cout << (long long) a * 1024 * 1024 * 1024; break;
			default: cout << "Ошибка";
			}
			return 0;*/

			/*SetConsoleOutputCP(1251);
				int a, b;
				char zn;
				cout << "Введите знак: ";
				cin >> zn;
				cout << "Введите число: ";
				cin >> a;
				cout << "Введите число: ";
				cin >> b;
				switch (zn) {
				case '+': cout << a + b; break;
				case '-': cout << a - b; break;
				case '*': cout << a * b; break;
				case '/': cout << (double) a / b; break;
				case '%': cout << a % b;
				}
				return 0;*/

				/*SetConsoleOutputCP(1251);
					int a;
					cin >> a;
					switch (a) {
					case 1:cout <<
					case 2:cout <<
					case 3:cout <<
					case 4:cout <<
					case 5:cout << "Работа"; break;
					case 6:cout <<
					case 7:cout << "Отдых"; break;
					default: cout << "Ошибка";*/

					/*SetConsoleOutputCP(1251);
						int a;
						cin >> a;
						switch (a) {
						case 1:cout << "Понедельник"; break;
						case 2:cout << "Вторник"; break;
						case 3:cout << "Среда"; break;
						case 4:cout << "Четвер"; break;
						case 5:cout << "Пятница"; break;
						case 6:cout << "Суббота"; break;
						case 7:cout << "Воскресенье"; break;
						default: cout << "Ошибка";
						}

						return 0;*/
						/*SetConsoleOutputCP(1251);
							int a;
							cout << "Введите число: ";
							cin >> a;
							if (a == 1) cout << "Понедельник";
							else if (a == 2) { cout << "Вторник"; }
							else if (a == 3) { cout << "Среда"; }
							else if (a == 4) { cout << "Четвер"; }
							else if (a == 5) { cout << "Пятница"; }
							else if (a == 6) { cout << "Суббота"; }
							else if (a == 7) { cout << "Воскресенье"; }
							else  cout << "Ошибка";
							return 0;*/