#include<iostream>

using namespace std;

int main()
{
	int lamp;
	int crt;
	int tm;
	int answ;
	setlocale(LC_ALL, "Rus");
	cout << "Если в комнате светит лампа - введите 1. Если лампа выключена - введите 0" << endl;
	cin >> lamp;
	cout << "Если в комнате открыты шторы - введите 1. Если закрыты - введите 0" << endl;
	cin >> crt;
	cout << "Если сейчас день -  введите 1. Если ночь - введите 0" << endl;
	cin >> tm;
	answ = lamp + (crt * tm);
	if (answ > 0) {
		cout << "В комнате светло" << endl;
	}
	else {
		cout << "В комнате темно" << endl;
	}
}


		


	












