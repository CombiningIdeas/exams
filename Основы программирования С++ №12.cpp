//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//auto matrixFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto matrixSpecialInput(T* array, int length) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 12.	Дана квадратная матрица A порядка M. Повернуть ее на угол 90° 
//	в отрицательном направлении, то есть по часовой стрелке 
//	(при этом элемент A1,1 перейдет в A1,M, элемент A1,M — в AM,M и т. д.). 
//	Вспомогательную матрицу не использовать. */
//
//	// так как матрица квадратная то можно сделать одну общую длинну
//	const int length = 4; 
//
//	elementType** matrix; // создаем матрицу более сложным способом
//	try
//	{
//		matrix = new elementType*[length];
//
//		// заполняем отдельно каждую строку опредленным количеством элементов(стоблцов)
//		for (int ii = 0; ii < length; ii++)
//			matrix[ii] = new int[length];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	
//	
//	// заполняем и выводим массив:
//	cout << "Изначальная матрица: " << endl;
//	matrixFillingAndInput(matrix, length);
//	cout << endl;
//
//	// Выводим массив в нужном порядке:
//	cout << "Матрица после: " << endl;
//	matrixSpecialInput(matrix, length);
//	cout << endl;
//
//	// так как мы создали один динамический массив внутри которого 
//	// были другие динамические массивы то их тоже нужно удалить
//
//	for (int ii = 0; ii < length; ii++)
//		delete[] matrix [ii];
//
//	delete[] matrix;
//	return 0;
//}
//
//template <typename T>
//auto matrixFillingAndInput(T* matrix, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//	{
//		for (int jj = 0; jj < length; jj++)
//			cout << ' ' << left << setw(2) << (matrix[ii][jj] = rand() % 90+10);
//
//		cout << endl;
//	}
//}
//
//template <typename T>
//auto matrixSpecialInput(T* matrix, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//	{
//		for (int jj = 0; jj < length; jj++)
//			cout << ' ' << left << setw(2) << matrix[length - jj - 1][ii];
//
//		cout << endl;
//	}
//}
