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
//	/* 11. Дана матрица размера M × N. Упорядочить ее столбцы так, 
//	чтобы их максимальные элементы образовывали возрастающую последовательность. */
//
//	const int lengthM = 4, lengthN = 5;
//
//	elementType (*matrix)[lengthN];
//
//	try
//	{
//		matrix = new elementType[lengthM][lengthN];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//	
//	// заполняем и выводим массив:
//	cout << "Изначальная матрица: " << endl;
//	matrixFillingAndInput(matrix, lengthM, lengthN);
//	cout << endl;
//
//	// Выводим массив в нужном порядке:
//	cout << "Матрица после: " << endl;
//	matrixSpecialSortedAndInput(matrix, lengthM, lengthN);
//	cout << endl;
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
//	int tmp;
//	for (int hh = 0; hh < lengthN; hh++)
//	{
//		for (int ii = 0; ii < lengthM - 1; ii++)
//		{
//			for (int jj = -1; jj < lengthN - 1; jj++)
//				if (matrix[ii + 1][jj + 1] > matrix[ii][jj + 1])
//				{
//					tmp = matrix[ii + 1][jj + 1];
//					matrix[ii + 1][jj + 1] = matrix[ii][jj + 1];
//					matrix[ii][jj + 1] = tmp;
//				}
//		}
//	}
//
//	for (int hh = 0; hh < lengthN; hh++)
//	{
//		for (int jj = 0; jj < lengthN - 1; jj++)
//		{
//			if (matrix[0][jj] > matrix[00][jj+1])
//			{
//				int x = 0, y = jj;
//				for (int ll = 0; ll < lengthM; ll++)
//				{
//					tmp = matrix[x][y];
//					matrix[x][y] = matrix[x][y + 1];
//					matrix[x][y + 1] = tmp;
//					x++;
//				}
//			}
//		}
//	}
//
//
//
//	for (int ii = 0; ii < lengthM; ii++)
//	{
//		for (int jj = 0; jj < lengthN; jj++)
//		{
//			cout << ' ' << left << setw(2) << matrix[ii][jj];
//		}
//
//		cout << endl;
//	}
//}
