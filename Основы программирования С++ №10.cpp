//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//auto matrixFillingAndInput(T* array, int lengthM, int lengthN) -> void;
//
//template <typename T>
//auto matrixSpecialSortedAndInput(T* array, int lengthM, int lengthN) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 10.	Дана целочисленная матрица размера M × N. Найти элемент, 
//	являющийся максимальным в своей строке и минимальным в своем столбце. 
//	Если такой элемент отсутствует, то вывести 0. */
//
//	const int lengthM = 3, lengthN = 4; // в такой матрице обычно чаще всего 
//	// выводит больше чисел
//
//	elementType **matrix;
//
//	try
//	{
//		matrix = new elementType*[lengthM];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//	
//	for (int ii = 0; ii < lengthM; ii++)
//		matrix[ii] = new int[lengthN];
//
//	// заполняем и выводим массив:
//	cout << "Изначальная матрица: " << endl;
//	matrixFillingAndInput(matrix, lengthM, lengthN);
//	cout << endl;
//
//
//	cout << "Нужные числа: " << endl;
//	matrixSpecialSortedAndInput(matrix, lengthM, lengthN);
//	cout << endl;
//
//	for (int ii = 0; ii < lengthM; ii++)
//	delete[] matrix [ii];
//
//	delete[] matrix;
//	return 0;
//}
//
//template <typename T>
//auto matrixFillingAndInput(T* matrix, int lengthM, int lengthN) -> void
//{
//	for (int ii = 0; ii < lengthM; ii++)
//	{
//		for (int jj = 0; jj < lengthN; jj++)
//			cout << ' ' << left << setw(2) << (matrix[ii][jj] = rand() % 90+10);
//		cout << endl;
//	}
//}
//
//template <typename T>
//auto matrixSpecialSortedAndInput(T* matrix, int lengthM, int lengthN) -> void
//{
//	bool found = false;
//	for (int ii = 0; ii < lengthM; ii++)
//	{
//		for (int jj = 0; jj < lengthN; jj++)
//		{
//			int curr = matrix[ii][jj]; // берем по отдельности каждое число и 
//			// проверяем его, потому что нельзя в циклах проходится и присваивать
//			// эти значения а потом сверять, потому что элементы матрцие 
//			// могут повторяться а находится при это в разных местах пересекаюшихся
//			// стлобика и строки.
//			bool maxNumRow = true; // максимальный элемент в строке
//			bool minNumCol = true; // минимальный элемент в столбце
//
//
//			// ищем максимальный эделент в строке
//			for (int kk = 0; kk < lengthN; kk++) 
//				if (matrix[ii][kk] > curr) // проверяем правда ли наш элеменет 
//				{// максимальный в строке если нет то возвращаем ложь
//					maxNumRow = false;
//					break;
//				}// пекращаем цикл так как это уже не максимальный элемент в строке
//
//			// ищем минимальный элемент в столбце
//			for (int kk = 0; kk < lengthM; kk++) // проверяем правда ли наш элеменет 
//				if (matrix[kk][jj] < curr)
//				{// мнимальный в столбце если нет то возвращаем ложь
//					minNumCol = false;
//					break;
//				}// пекращаем цикл так как это уже не минимальный элемент в столбце
//
//			// сравниваем эти два элемента если оба элемента вернут правду значит 
//			if (maxNumRow == true && minNumCol == true) // это подходящий
//			{//для нас элемент 
//				cout << curr << endl;
//				found = true;
//				break;// завершаем цил по поиску во внутреннем цикле
//			}// и переходим к следующей строке
//		}
//	}
//
//	if (found == false)
//		cout << 0 << endl;
//}
