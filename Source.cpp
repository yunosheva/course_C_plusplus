#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

void strlen(int &lenght, const char* str ) {
	lenght = 0;
	while (str[lenght] != '\0') {
		lenght++;
	}
	cout << " Lenght of string = " << lenght << endl;
}

int main() {
	setlocale(LC_ALL, "Rus");
	
	const char* string = "fkjrhuihfreebhew";
	int lenght;
	strlen(lenght, string);
	
	return 0;
}