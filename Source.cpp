#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

template< typename T>
void foo(T &a, T &b ) {
	T buf;
	buf = a;
	a = b;
	b = buf;
}

int foo1(int a) {
	a = 2;
	return a;
}

int Kroneker(int a, int b) {
	int number;
	if (a == b) {
		number = 1.;
	}
	else {
		number = 0.;
	}
	return number;
}

int main() {

	/*int a = 5;
	int* pa = &a;
	int& aRef = a;
	int* paRef = &aRef;

	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "&paRef = " << &paRef << endl;
	cout << "aRef = " << &aRef << endl;*/

	setlocale(LC_ALL, "Rus");
	//cout << "\t ����� ������ �������� ����� \n \t ��� ���������� ��������� \n \t ���������� � ����� ����� ��������� \n \t ������� ��������� ������ ��������� \n\n\n";

	/*int var1, var2, var3;

	cout << "������� ��� �����: " << endl;
	cin >> var1 >> var2 >> var3;

	cout << " �������� ����� = " << var1 + var2 + var3 << endl;
	cout << "�������� ������������ = " << var1 * var2 * var3 << endl;
	double middle = (double)(var1 + var2 + var3) / 3;
	cout << "�������� �������� ��������������� = " << middle << endl;

	
	int number;
	cout << "������� �����: " << endl;
	cin >> number;
	cout << endl;

	if (number % 2 == 0) {
		cout << "����� ������." << endl;
	} else cout << "����� ��������." << endl;*/

	/*int num1, num2;

	cout << "������� ������ �����: " << endl;
	cin >> num1;
	cout << endl;

	cout << "������� ������ �����: " << endl;
	cin >> num2;
	cout << endl;

	int var;
	cout << " �������� 1, ���� ������ ������� �����. " << endl;
	cout << " �������� 2, ���� ������ ������� �����. " << endl;
	cout << " �������� 3, ���� ������ �������� �����. " << endl;
	cout << " �������� 4, ���� ������ ��������� �����. " << endl;
	cin >> var;
	cout << endl;

	switch (var) {

	case 1: {
		cout << num1 + num2;
	}
	break;

	case 2: {
		cout << num1 - num2;
	}
	break;

	case 3: {
		cout << num1 * num2;
	}
	break;

	case 4: {
		cout << (double)num1 /num2;
	}
	break;
	}*/

	/*int numSimb, orientation, i = 0;
	char simb;

	cout << "������� ����� ��������: " << endl;

	cin >> numSimb;

	cout << "������� 1, ���� ����� ������ ���� ������������, � 2, ���� ��������������. " << endl;

	cin >> orientation;

	cout << "������� ������: ";

	cin >> simb;

	cout << endl;

	if (orientation == 1) {
		while (i < numSimb) {
			cout << simb << endl;
			i++;
		}
	}
	else {
		while (i < numSimb) {
			cout << simb;
			i++;
		}
	}*/

	/*int begin, end, sum = 0;

	cout << "������� ������ � ����� ���������: " << endl;
	cin >> begin;
	cout << endl;
	cin >> end;

	while (begin < end) {
		if (begin % 2 != 0)
			sum += begin;
		begin++;
		
	}

	cout << "����� �������� ����� �� ����� ��������� ����� " << sum << endl;*/

	// ���������� ������� ���������� �������, ������� �� �����������
	/*srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	
	bool alreadyThere;
	for (int i = 0; i < SIZE; ) {
		alreadyThere = false;
		int random = rand() % 20;
		for (int j = 0; j < i; j++) {
			if (arr[j] == random) {
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere) {
			arr[i] = random;
			i++;
		}
	}

	int min = 21;
	for (int i = 0; i < SIZE; i++) {
		std::cout << arr[i] << std::endl;
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	std::cout << " minimum = " << min;*/

	/* //��� ��� �������, ���� - ������� � ������
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}

	int count = 0;

	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (arr[i] == arr[j] && i != j) {
				count++;
			}
		}
	}

	while (count != 0) {
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				if (arr[i] == arr[j] && i != j) {
					do {
						arr[j] = rand() % 10;
						for (int k = 0; k < j; k++) {
							if (arr[k] == arr[j]) {
								arr[j] = rand() % 10;
							}
						}
					} while (arr[i] == arr[j] && i != j);
				}
			}
		}
		count = 0;
		for (int i = 0; i < SIZE; i++) {
			for (int j = i + 1; j < SIZE; j++) {
				if (arr[i] == arr[j]) {
					count++;
				}
			}
		}
	}*/

	/*double M[2][2]{ {1, 2}, {3, 4} };
	double d[2] = { 1, 1 };
	double rez[2][2];
	double Diag[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			Diag[i][j] = 0.0;
			rez[i][j] = 0.;
		}
	}

	for (int i = 0; i < 2; i++) {
		Diag[i][i] = d[i];
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int l = 0; l < 2; l++) {
				rez[i][j] += M[l][j] * Diag[i][l];
			}
		}
	}
	rez[0][0] = 0.;
	rez[1][0] = 0.;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			rez[i][0] += M[i][j] * d[j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << rez[i][j] << "\t";
		}
		cout << endl;
	}*/

	
	
	return 0;
}