//#include <iostream>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto  arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD,
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 4. Даны три целочисленных массива A, B и C размера NA, NB, NC 
//	соответственно, элементы которых упорядочены по убыванию. 
//	Объединить эти массивы так, чтобы результирующий целочисленный массив D 
//	(размера NA + NB + NC) остался упорядоченным по убыванию. */
//
//	int lengthA, lengthB, lengthC;
//
//	cout << "Введите длинну массива A: ";
//	cin >> lengthA;
//	cout << "Введите длинну массива B: ";
//	cin >> lengthB;
//	cout << "Введите длинну массива C: ";
//	cin >> lengthC;
//
//	int lengthD = lengthA + lengthB + lengthC;
//
//	elementType* arrayA, *arrayB, *arrayC, *arrayD;
//	try
//	{
//		arrayA = new elementType[lengthA + 1];
//		arrayB = new elementType[lengthB + 1];
//		arrayC = new elementType[lengthC + 1];
//		arrayD = new elementType[lengthD + 1];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//	
//	// заполняем и выводим массив:
//	cout << "Изначальный массив A: " << endl;
//	arrayFillingAndInput(arrayA, lengthA);
//	cout << endl;
//
//	cout << "Изначальный массив B: " << endl;
//	arrayFillingAndInput(arrayB, lengthB);
//	cout << endl;
//
//	cout << "Изначальный массив C: " << endl;
//	arrayFillingAndInput(arrayC, lengthC);
//	cout << endl;
//
//	// целочисленный массив D (размера NA + NB + NC) - (тоесть это значит что нужно
//	// чтобы массив D даже с повторяющимися элементами 
//	// имел длину как три других в сумме),
//	// остался упорядоченным по убыванию
//
//	// мне совсем не сложно сделать и так чтобы элементы не повторялись 
//	// но тогда будет меньше длина массива.
//
//	// Выводим массив в нужном порядке:
//	cout << "Массив D упорядочанный по убыванию: " << endl;
//	arrayReverseUnion(arrayA,arrayB, arrayC, arrayD, 
//		lengthA, lengthB, lengthC, lengthD);
//	cout << endl;
//
//  delete[] arrayA, arrayB, arrayC, arrayD;
//	return 0;
//}
//
//template <typename T>
//inline void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		array[ii] = rand() % 1001 - 500;
//
//	for (int ii = 0; ii < length - 1; ii++)
//		for (int jj = 0; jj < length - 1; jj++)
//			if (array[jj+ 1] > array[jj])
//				Swap(array[jj +1], array[jj]);
//
//	for (int ii = 0; ii < length; ii++)
//		cout << array[ii] << ' ';
//}
//
//template <typename T>
//auto arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD, 
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void
//{
//	int indexArrayD = 0;
//	for (int ii = 0; ii < lengthA; ii++)
//		arrayD[indexArrayD++] = arrayA[ii];
//
//	for (int jj = 0; jj < lengthB; jj++)
//		arrayD[indexArrayD++] = arrayB[jj];
//
//	for (int qq = 0; qq < lengthC; qq++)
//		arrayD[indexArrayD++] = arrayC[qq];
//	
//	for (int ii = 0; ii < lengthD - 1; ii++)
//		for (int jj = 0; jj < lengthD - 1; jj++)
//			if (arrayD[jj + 1] > arrayD[jj])
//				Swap(arrayD[jj + 1], arrayD[jj]);
//
//	for (int ii = 0; ii < lengthD; ii++)
//		cout << arrayD[ii] << ' ';
//		
//}





// второй вариант если элементы не должны повторяться:


//#include <iostream>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto  arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD,
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 4. Даны три целочисленных массива A, B и C размера NA, NB, NC
//	соответственно, элементы которых упорядочены по убыванию.
//	Объединить эти массивы так, чтобы результирующий целочисленный массив D
//	(размера NA + NB + NC) остался упорядоченным по убыванию. */
//
//	int lengthA, lengthB, lengthC;
//
//	cout << "Введите длинну массива A: ";
//	cin >> lengthA;
//	cout << "Введите длинну массива B: ";
//	cin >> lengthB;
//	cout << "Введите длинну массива C: ";
//	cin >> lengthC;
//
//	int lengthD = lengthA + lengthB + lengthC;
//
//	elementType* arrayA, * arrayB, * arrayC, * arrayD;
//	try
//	{
//		arrayA = new elementType[lengthA + 1];
//		arrayB = new elementType[lengthB + 1];
//		arrayC = new elementType[lengthC + 1];
//		arrayD = new elementType[lengthD + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	// заполняем и выводим массив:
//	cout << "Изначальный массив A: " << endl;
//	arrayFillingAndInput(arrayA, lengthA);
//	cout << endl;
//
//	cout << "Изначальный массив B: " << endl;
//	arrayFillingAndInput(arrayB, lengthB);
//	cout << endl;
//
//	cout << "Изначальный массив C: " << endl;
//	arrayFillingAndInput(arrayC, lengthC);
//	cout << endl;
//
//	// Выводим массив в нужном порядке:
//	cout << "Массив D упорядочанный по убыванию: " << endl;
//	arrayReverseUnion(arrayA, arrayB, arrayC, arrayD,
//		lengthA, lengthB, lengthC, lengthD);
//	cout << endl;
//
//	delete[] arrayA, arrayB, arrayC, arrayD;
//	return 0;
//}
//
//template <typename T>
//inline void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		array[ii] = rand() % 21 - 10;
//
//	for (int ii = 0; ii < length - 1; ii++)
//		for (int jj = 0; jj < length - 1; jj++)
//			if (array[jj + 1] > array[jj])
//				Swap(array[jj + 1], array[jj]);
//
//	for (int ii = 0; ii < length; ii++)
//		cout << array[ii] << ' ';
//}
//
//template <typename T>
//auto arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD,
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void
//{
//	// создаем массив с копиями:
//	elementType* СopyArrayD;
//	try
//	{
//		СopyArrayD = new elementType[lengthD + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	int indexArrayD = 0;
//	// так же просто заполняем наш массив
//	for (int ii = 0; ii < lengthA; ii++)
//		СopyArrayD[indexArrayD++] = arrayA[ii];
//
//	for (int jj = 0; jj < lengthB; jj++)
//		СopyArrayD[indexArrayD++] = arrayB[jj];
//
//	for (int qq = 0; qq < lengthC; qq++)
//		СopyArrayD[indexArrayD++] = arrayC[qq];
//
//	indexArrayD = 0; // еще понадобится для отсеивания повторяющихся эелментов
//	// избавляемся от повторяющихся элементов в нашем массиве 
//	// и записываем в новый массив:
//	bool countCopy = true;
//
//	for (int ii = 0; ii < lengthD; ii++)
//	{
//		for (int jj = 0; jj <= ii; jj++)
//			if (СopyArrayD[ii] == СopyArrayD[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true)
//			arrayD[indexArrayD++] = СopyArrayD[ii];
//
//		countCopy = true;
//	}
//	delete[] СopyArrayD; // удаляем уже не нужный массив
//
//	// сортируем наш массив:
//	for (int ii = 0; ii < indexArrayD - 1; ii++)
//		for (int jj = 0; jj < indexArrayD - 1; jj++)
//			if (arrayD[jj + 1] > arrayD[jj])
//				Swap(arrayD[jj + 1], arrayD[jj]);
//
//
//	for (int ii = 0; ii < indexArrayD; ii++)
//		cout << arrayD[ii] << ' ';
//	
//}



//// Недоделанный вариант
//#include <iostream>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto  arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD,
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 4. Даны три целочисленных массива A, B и C размера NA, NB, NC 
//	соответственно, элементы которых упорядочены по убыванию. 
//	Объединить эти массивы так, чтобы результирующий целочисленный массив D 
//	(размера NA + NB + NC) остался упорядоченным по убыванию. */
//
//	int lengthA, lengthB, lengthC;
//
//	cout << "Введите длинну массива A: ";
//	cin >> lengthA;
//	cout << "Введите длинну массива B: ";
//	cin >> lengthB;
//	cout << "Введите длинну массива C: ";
//	cin >> lengthC;
//
//	int lengthD = lengthA + lengthB + lengthC;
//
//	elementType* arrayA, *arrayB, *arrayC, *arrayD;
//	try
//	{
//		arrayA = new elementType[lengthA + 1];
//		arrayB = new elementType[lengthB + 1];
//		arrayC = new elementType[lengthC + 1];
//		arrayD = new elementType[lengthD + 1];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//	
//	// заполняем и выводим массив:
//	cout << "Изначальный массив A: " << endl;
//	arrayFillingAndInput(arrayA, lengthA);
//	cout << endl;
//
//	cout << "Изначальный массив B: " << endl;
//	arrayFillingAndInput(arrayB, lengthB);
//	cout << endl;
//
//	cout << "Изначальный массив C: " << endl;
//	arrayFillingAndInput(arrayC, lengthC);
//	cout << endl;
//
//	// целочисленный массив D (размера NA + NB + NC) - (тоесть это значит что нужно
//	// чтобы массив D даже с повторяющимися элементами 
//	// имел длину как три других в сумме),
//	// остался упорядоченным по убыванию
//
//	// Выводим массив в нужном порядке:
//	cout << "Массив D упорядочанный по убыванию: " << endl;
//	arrayReverseUnion(arrayA,arrayB, arrayC, arrayD, 
//		lengthA, lengthB, lengthC, lengthD);
//	cout << endl;
//
//  delete[] arrayA, arrayB, arrayC, arrayD;
//	return 0;
//}
//
//template <typename T>
//inline void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		array[ii] = rand() % 1001 - 500;
//
//	for (int ii = 0; ii < length - 1; ii++)
//		for (int jj = 0; jj < length - 1; jj++)
//			if (array[jj+ 1] > array[jj])
//				Swap(array[jj +1], array[jj]);
//
//	for (int ii = 0; ii < length; ii++)
//		cout << array[ii] << ' ';
//}
//
//template <typename T>
//auto arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD, 
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void
//{
//	int indexArrayD = 0, tmp = 0, count = 0;
//	for (int ii = 0; ii < lengthA; ii++)
//		for (int jj = 0; jj < lengthA - 1; jj++)
//		{
//			if (arrayD[jj] > arrayA[ii] && arrayD[jj] < arrayA[ii+1])
//			{
//				tmp = ii;
//				for (int gg = jj; gg < lengthA; gg++)
//				{
//					arrayA[lengthA - count] = arrayA[lengthA - count - 1];
//					count++;
//					if (count == 2)
//						break;
//				}
//				arrayD[tmp++] = arrayA[ii];
//				if (tmp > ii)
//					indexArrayD++;
//				count = 0;
//				break;
//			}
//			else
//			{
//				arrayD[indexArrayD++] = arrayA[ii];
//				break;
//			}
//		}
//
//	for (int ii = 0; ii < lengthB; ii++)
//		for (int jj = 0; jj < lengthA + lengthB - 1; jj++)
//		{
//			if (arrayD[jj] > arrayB[ii] && arrayD[jj] < arrayB[ii + 1] ||
//				arrayD[jj] < arrayB[ii + 1] || arrayD[jj] > arrayB[ii])
//			{
//				tmp = ii;
//				for (int gg = jj; gg < lengthA + lengthB; gg++)
//				{
//					arrayB[lengthA + lengthB - count]
//						= arrayB[lengthA + lengthB - count - 1];
//					count++;
//					if (count == (lengthA + lengthB - 1))
//						break;
//				}
//				arrayD[tmp++] = arrayB[ii];
//				if (tmp > ii)
//					indexArrayD++;
//				count = 0;
//				break;
//			}
//			else
//			{
//				arrayD[indexArrayD++] = arrayB[ii];
//				break;
//			}
//		}
//	//for (int jj = 0; jj < lengthB; jj++)
//		//arrayD[indexArrayD++] = arrayB[jj];
//
//	for (int qq = 0; qq < lengthC; qq++)
//		arrayD[indexArrayD++] = arrayC[qq];
//	
//	/*for (int ii = 0; ii < lengthD - 1; ii++)
//		for (int jj = 0; jj < lengthD - 1; jj++)
//			if (arrayD[jj + 1] > arrayD[jj])
//				Swap(arrayD[jj + 1], arrayD[jj]);*/
//
//	for (int ii = 0; ii < lengthD; ii++)
//		cout << arrayD[ii] << ' ';
//		
//}