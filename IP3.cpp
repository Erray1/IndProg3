#include "eq2.h"
#include "rational.h"
#include <iostream>
#include <vector>
using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");

	// А

	//eq2 a = eq2(1.0, 2.0, 3.0);
	//eq2 b = eq2(4.0, 5.0, 6.0);
	//eq2 c = a + b;

	// Б

	//cout << "Введите количество элементов массива";
	//int n;
	//cin >> n;
	//vector <rational> arr(n);

	//// Ввод

	//for (int i = 0; i < n; i++) {
	//	cout << "Введите делимое и делитель";
	//	int a, b;
	//	cin >> a >> b;
	//	rational p = rational(a, b);
	//	arr[i] = (p);
	//}

	//// Вывод

	//for (int i = 0; i < n; i++) {
	//	arr[i].show();
	//}

	// В

//	cout << "Введите количество элементов массива ";
//	int n;
//	cin >> n;
//	vector <rational> arr(n);
//
//	// Ввод
//
//	for (int i = 0; i < n; i++) {
//		cout << "Введите делимое и делитель ";
//		int a, b;
//		cin >> a >> b;
//		rational p = rational(a, b);
//		arr[i] = (p);
//	}
//
//	// Вывод
//
//	for (int i = 0; i < n; i++) {
//		rational p;
//		cout << "Cложение\n";
//		arr[i].show();
//		cout << "\tИ\n";
//		arr[n - i - 1].show();
//		p = arr[i] + arr[n - i - 1];
//		p.show();
//		cout << "Вычитание\n";
//		arr[i].show();
//		cout << "\tИ\n";
//		arr[n - i - 1].show();
//		p = arr[i] - arr[n - i - 1];
//		p.show();
//		cout << "Инкремент";
//		arr[i].show();
//		++arr[i];
//		arr[i].show();
//		cout << "Сравнение ==\n";
//		arr[i].show();
//		cout << "\tИ\n";
//		arr[n - i - 1].show();
//		bool k = arr[i] == arr[n - i - 1];
//		cout << k << "\n";
//		cout << "Сравнение >\n";
//		arr[i].show();
//		cout << "\tИ\n";
//		arr[n - i - 1].show();
//		k = arr[i] > arr[n - i - 1];
//		cout << k << "\n";
//		cout << "А присваивание уже было использовано несколько раз :)";
//	}
//
//}