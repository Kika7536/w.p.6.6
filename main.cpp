#include<iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "rus");

	int width, exclamation;

	while (true) {
		cout << "������� ����������� �����������: ";
		cin >> width;
		if (width < 1) {
			cout << "������. ����� ������ �� ����� ���� ������ 1 �������. ��������� �������" << endl;
		}
		else {
			break;
		}
	}
	while (true) {
		cout << "������� ���������� ��������������� ������: ";
		cin >> exclamation;
		if (exclamation < 0) {
			cout << "������! ����������� ���������� ��������������� ������ - 0. ��������� �������" << endl;
		}
		else if (exclamation > width) {
			cout << "������! ���������� ��������������� ������ �� ����� ��������� ������ ������. ��������� �������" << endl;
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