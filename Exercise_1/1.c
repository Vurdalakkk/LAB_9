// Подключение необходимых библиотек
#include <stdio.h>
#include <locale.h>
#include <math.h>
// Создание констант
#define ROW 9 
#define COL 9
// Создание основной функции
int main() {
	// Добавление русской локали
	setlocale(LC_CTYPE, "RUS");
	// Инициализация переменных
	int row, col;
	printf("\n");
	// Создание цикла и вывод значений
	for (int row = 1; row <= ROW; row++) {
		for (int col = 1; col <= COL + 1 - row; col++) {
			printf("%5d", row * col);
		}
		printf("\n");
	}
	return(0);

}

//// Подключение необходимых библиотек
//#include <stdio.h>
//#include <locale.h>
//#include <math.h>
//// Создание констант
//#define ROW 9 
//#define COL 9
//// Создание основной функции
//int main() {
//	// Добавление русской локали
//	setlocale(LC_CTYPE, "RUS");
//	// Инициализация переменных
//	int row, col;
//	int i = 1;
//	printf("\n");
//	// Создание цикла и вывод значений
//	// К изначальному циклу мы добавляем счетчик "i", по которому будем определять столбец таблицы
//	for (row = 1; row <= ROW; row++, i++) {
//		if (i == 1)
//			for (int col = 1; col <= COL; col++) {
//				printf("%5d", col * row);
//
//			}
//		if (i == 2)
//			for (int col = 1; col <= 8; col++) {
//				printf("%5d", col * row);
//
//			}
//		if (i == 3)
//			for (int col = 1; col <= 7; col++) {
//				printf("%5d", col * row);
//
//			}
//		if (i == 4)
//			for (int col = 1; col <= 6; col++) {
//				printf("%5d", col * row);
//
//			}
//		if (i == 5)
//			for (int col = 1; col <= 5; col++) {
//				printf("%5d", col * row);
//
//			}
//		if (i == 6)
//			for (int col = 1; col <= 4; col++) {
//				printf("%5d", col * row);
//
//			}
//		if (i == 7)
//			for (int col = 1; col <= 3; col++) {
//				printf("%5d", col * row);
//
//			}
//		if (i == 8)
//			for (int col = 1; col <= 2; col++) {
//				printf("%5d", col * row);
//
//			}
//		if (i == 9)
//			for (int col = 1; col <= 1; col++) {
//				printf("%5d", col * row);
//
//			}
//
//		printf("\n");
//	}
//	return(0);

}
