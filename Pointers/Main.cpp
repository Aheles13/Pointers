#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

//Заполнение массива случайнми числами 
template < typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	 srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}


template <typename T>
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;

}

template <typename T>
void p_swap(T* pnum1, T* pnum2) {
	T tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;

}



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Указатель - это перемнная созданная для хранения в себе адреса какой-либо области памяти.Например, указатель может хранить в себе адрес созданной ранее в программе переменной.
	
	// Указатели на переменные.

	n = 10; m = 20;
	std::cout << "n = " << n << std::endl;
	std::cout << "&n = " << &n << std::endl; //& - Получение адреса объекта


	int* pn = &n; // создание указателя, направленного на переменную n
	std::cout << "pn = " << pn << std::endl; // вывод адреса, хронящегося в указателе 


	// Разыменование - это операция позволяющая обратиться к области памяти, адрес которой хранится в уазатели.

	std::cout << "*pn = " << *pn << std::endl; // вывод n через разиминование  pn.
	*pn = 15 ;
	std::cout << "Новая n = " << n << std::endl;

	pn = &m; // Перенаправление указателя на адрес переменной m.
	std::cout << "m  = " << m << std::endl;
	std::cout << "&m  = " << &m << std::endl;
	std::cout << "pn = " << pn << std::endl;
	std::cout << "*pn = " << *pn << std::endl;

	int* pm = &m;
	std::cout << "pm = " << pm << std::endl;

	// Указатели и массивы.

	const int size = 5;
	int arr[size]{ 10, 9, 50, 30, 14 };
	int* pa2 = &arr[2];
	std::cout << "*pa2 = " << *pa2 << std::endl;
	pa2++;
	std::cout << "*pa2 = " << *pa2 << std::endl;
	// Арефметика указателей - процесс сдвига указателя относительно текущего адреса, который в нем записан, вперёд (при сложении) или назад (при вычетании)

	pa2 -= 2;
	std::cout << "*pa2 = " << *pa2 << std::endl;
	
	pa2 = &arr[0];
	std::cout << "Массив:\n ";
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << ' ';
	std::cout << std::endl;
	
	std::cout << "arr = " << arr << std::endl;
	std::cout << "arr + 1 = " << arr + 1 << std::endl;
	//arr++; // ОШИБКА!

	//Области применение указателей:
	//1. Работа с массивами;
	//2. Выделение динамической памяти;
	//3. Доступ к элементам из разных блоков программы (из разных функций);
	//4. Экономия памяти.

	// Размер указаетеля не зависит от типа данных, устоновленых при его объявлении. Он зависит от разрядности операционной системы устройства. У 32-битных ОС размер 4 байта, а 64- битных - 8 байта.
	
	// Указатели и функуции
	n = 7; m = 15;
	std::cout << n << " " << m << std::endl;
	//my_swap(n, m); // не работате так как параемтры это копии 
	
	p_swap(&n, &m);
	std::cout << n << " " << m << std::endl;
	

	
	
	return 0;
}