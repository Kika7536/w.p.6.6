#include<iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "rus");

	int width, exclamation;

	while (true) {
		cout << "Введите общуюдлинну колонтитула: ";
		cin >> width;
		if (width < 1) {
			cout << "Ошибка. Общая длинна не может быть меньше 1 символа. Повторите попытку" << endl;
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "Введите количество восклицательных знаков: ";
		cin >> exclamation;
		if (exclamation < 0) {
			cout << "Ошибка! Минимальное количество восклицательных знаков - 0. Повторите попытку" << endl;
		}
		else if (exclamation > width) {
			cout << "Ошибка! Количество восклицательных знаков не может превышать длинну строки. Повторите попытку" << endl;
		}
		else {
			break;
		}
	}

	for (int i = 0; i < width; i++) {
		if (exclamation % 2 == 0) {
			if (i >= width / 2 - exclamation / 2 && i < width / 2 + exclamation / 2) {
				cout << "!";
			}
			else {
				cout << "~";
			}
		}
		else {
			if (i >= width / 2 - exclamation / 2 && i <= width / 2 + exclamation / 2) {
				cout << "!";
			}
			else {
				cout << "~";
			}
		}
	}
	cout << endl;

	system("pause");
	return 0;
	
}