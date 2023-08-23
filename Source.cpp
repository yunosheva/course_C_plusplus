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
	//cout << "\t Среди других играющих детей \n \t Она напоминает лягушонка \n \t Заправлена в трусы худая рубашонка \n \t Колечки рыжеватые кудрей рассыпаны \n\n\n";

	/*int var1, var2, var3;

	cout << "Введите три числа: " << endl;
	cin >> var1 >> var2 >> var3;

	cout << " Значение суммы = " << var1 + var2 + var3 << endl;
	cout << "Значение произведения = " << var1 * var2 * var3 << endl;
	double middle = (double)(var1 + var2 + var3) / 3;
	cout << "Значение среднего арифметического = " << middle << endl;

	
	int number;
	cout << "Введите число: " << endl;
	cin >> number;
	cout << endl;

	if (number % 2 == 0) {
		cout << "Число четное." << endl;
	} else cout << "Число нечетное." << endl;*/

	/*int num1, num2;

	cout << "Введите первое число: " << endl;
	cin >> num1;
	cout << endl;

	cout << "Введите второе число: " << endl;
	cin >> num2;
	cout << endl;

	int var;
	cout << " Напишите 1, если хотите сложить числа. " << endl;
	cout << " Напишите 2, если хотите вычесть числа. " << endl;
	cout << " Напишите 3, если хотите умножить числа. " << endl;
	cout << " Напишите 4, если хотите разделить числа. " << endl;
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

	cout << "Введите число символов: " << endl;

	cin >> numSimb;

	cout << "Введите 1, если линия должна быть вертикальной, и 2, если горизонтальной. " << endl;

	cin >> orientation;

	cout << "Введите символ: ";

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

	cout << "Введите начало и конец диапазона: " << endl;
	cin >> begin;
	cout << endl;
	cin >> end;

	while (begin < end) {
		if (begin % 2 != 0)
			sum += begin;
		begin++;
		
	}

	cout << "Сумма нечетных чисел из этого диапазона равна " << sum << endl;*/

	// заполнение массива рандомными числами, которые не повторяются
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

	/* //это моя попытка, выше - решение с канала
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