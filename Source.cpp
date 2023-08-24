#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

void FillArray(int* const arr, const int size) 
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int*& arr, int &size, const int value) 
{
	int* newArr = new int[size + 1];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}
	newArr[size] = value;
	size++;
	delete[] arr;
	arr = newArr;
}

void pop_back(int*& arr, int &size) 
{
	size--;
	int* newArr = new int[size];
	for (int i = 0; i < size; i++) {
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
}

void insert_beg(int*& arr, int& size, const int value) {
	size++;
	int* newArr = new int[size];
	for (int i = 1; i < size; i++) {
		newArr[i] = arr[i - 1];
	}
	newArr[0] = value;
	delete[] arr;
	arr = newArr;
}

void erase_beg(int*& arr, int& size) {
	size--;
	int* newArr = new int[size];
	for (int i = 1; i < size + 1; i++) {
		newArr[i - 1] = arr[i];
	}
	delete[] arr;
	arr = newArr;
}

void insert(int*& arr, int& size, const int value, const int number) {
	if (number > size + 1) {
		std::cout << "Это число больше размера массива." << std::endl;
	}
	if (number <= 0) {
		std::cout << "Число меньше нуля." << std::endl;
	}
	else {
		size++;
		int* newArr = new int[size];
		for (int i = 0; i < size; i++) {
			if (i > number - 1) {
				newArr[i] = arr[i - 1];
				continue;
			}
			newArr[i] = arr[i];
		}
		newArr[number - 1] = value;
		delete[] arr;
		arr = newArr;
	}
}

void erase(int*& arr, int& size, const int number) {
	size--;
	int* newArr = new int[size];
	if (number > size + 1)
		std::cout << " Число больше размера массива. " << std::endl;
	if (number <= 0) {
		std::cout << " Число меньше нуля. " << std::endl;
	}
	for (int i = 0; i < size + 1; i++) {
		if (number - 1 < i)
		{
			newArr[i - 1] = arr[i];
			continue;
		}
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int SIZE = 10;
	int* arr = new int[SIZE];
	FillArray(arr, SIZE);
	ShowArray(arr, SIZE);
	push_back(arr, SIZE, 20);
	ShowArray(arr, SIZE);
	pop_back(arr, SIZE);
	ShowArray(arr, SIZE);

	insert(arr, SIZE, 14, 11);
	ShowArray(arr, SIZE);
	erase(arr, SIZE, 1);
	ShowArray(arr, SIZE);
	
	return 0;
}