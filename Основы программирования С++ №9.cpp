//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto matrixFillingAndInput(T* matrix, int length) -> void;
//
//template <typename T>
//auto matrixSpecialInput(T* matrix, int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 9. Дана квадратная матрица A порядка M (M — нечетное число). 
//    Начиная с элемента A1,1 и перемещаясь против часовой стрелки, 
//    вывести все ее элементы по спирали: первый столбец, последняя строка, 
//    последний столбец в обратном порядке, первая строка в обратном порядке, 
//    оставшиеся элементы второго столбца и т. д.; 
//    последним выводится центральный элемент матрицы. */
//    const int length = 5; 
//    
//    elementType** matrix; // создаем матрицу более сложным способом
//    try
//    {
//    	matrix = new elementType*[length];
//    }
//    catch (const bad_alloc&exception)
//    {
//    	cerr << "Allocation failed: " << exception.what() << '\n';
//    	return 1;
//    }
//    
//    // заполняем отдельно каждую строку опредленным количеством элементов(стоблцов)
//    for (int ii = 0; ii < length; ii++)
//    	matrix[ii] = new int[length];
//
//    // заполняем и выводим матрицу:
//	cout << "Изначальная матрица: " << endl;
//    matrixFillingAndInput(matrix, length);
//
//    cout << endl << "Элементы матрицы по спирали, против часовой стрелки: " << endl;
//    matrixSpecialInput(matrix, length);
//    cout << endl;
//
//    for (int ii = 0; ii < length; ii++)
//    	delete[] matrix [ii];
//    
//    delete[] matrix;
//    return 0;
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
//    int rowBegin = 0;// начало строки спирали
//    int rowEnd = length - 1; // конец строки спирали
//    int colomnBegin = -1; // начало колонки спирали
//    int colomnEnd = length - 1; // конец колонки спирали
//
//    while (length-- > 0)
//    {
//        for (int ii = ++colomnBegin; ii <= colomnEnd; ii++)// идем по колонке вниз
//            cout << matrix[ii][rowBegin] << ' ';
//
//        for (int ii = ++rowBegin; ii <= rowEnd; ii++)
//            cout << matrix[colomnEnd][ii] << ' ';
//
//        for (int ii = colomnEnd-- - 1; ii >= colomnBegin; ii--)
//            cout << matrix[ii][rowEnd] << ' ';
//
//        for (int ii = --rowEnd; ii >= rowBegin; ii--)
//            cout << matrix[colomnBegin][ii] << ' ';
//    }
//}
//
//
//
//
//// Тоже самое решение отличается лишь способ вывода данных тут по строкам и прям
//// по стобам и строкам полностью
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto matrixFillingAndInput(T* matrix, int length) -> void;
//
//template <typename T>
//auto matrixSpecialInput(T* matrix, int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 9. Дана квадратная матрица A порядка M (M — нечетное число). 
//    Начиная с элемента A1,1 и перемещаясь против часовой стрелки, 
//    вывести все ее элементы по спирали: первый столбец, последняя строка, 
//    последний столбец в обратном порядке, первая строка в обратном порядке, 
//    оставшиеся элементы второго столбца и т. д.; 
//    последним выводится центральный элемент матрицы. */
//    const int length = 5; 
//    
//    elementType** matrix; // создаем матрицу более сложным способом
//    try
//    {
//    	matrix = new elementType*[length];
//    }
//    catch (const bad_alloc&exception)
//    {
//    	cerr << "Allocation failed: " << exception.what() << '\n';
//    	return 1;
//    }
//    
//    // заполняем отдельно каждую строку опредленным количеством элементов(стоблцов)
//    for (int ii = 0; ii < length; ii++)
//    	matrix[ii] = new int[length];
//
//    // заполняем и выводим матрицу:
//	cout << "Изначальная матрица: " << endl;
//    matrixFillingAndInput(matrix, length);
//
//    cout << endl << "Элементы матрицы по спирали, против часовой стрелки: " << endl;
//    matrixSpecialInput(matrix, length);
//    cout << endl;
//
//    for (int ii = 0; ii < length; ii++)
//    	delete[] matrix [ii];
//    
//    delete[] matrix;
//    return 0;
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
//    int rowBegin = 0;// начало строки спирали
//    int rowEnd = length - 1; // конец строки спирали
//    int colomnBegin = -1; // начало колонки спирали
//    int colomnEnd = length - 1; // конец колонки спирали
//
//    int count = 0;
//    while (length-- > 0)
//    {
//        for (int ii = ++colomnBegin; ii <= colomnEnd; ii++)// идем по колонке вниз
//            cout << matrix[ii][rowBegin] << ' ', count++;
//        cout << endl;
//
//        if (count > 1)
//            cout << matrix[colomnEnd][rowBegin] << ' ';
//        count = 0;
//        for (int ii = ++rowBegin; ii <= rowEnd; ii++)
//            cout << matrix[colomnEnd][ii] << ' ', count++;
//        cout << endl;
//
//        if (count > 1)
//            cout << matrix[colomnEnd][rowEnd] << ' ';
//        count = 0;
//        for (int ii = colomnEnd-- - 1; ii >= colomnBegin; ii--)
//            cout << matrix[ii][rowEnd] << ' ', count++;
//        cout << endl;
//
//        if (count > 1)
//            cout << matrix[colomnBegin][rowEnd] << ' ';
//        count = 0;
//        for (int ii = --rowEnd; ii >= rowBegin; ii--)
//            cout << matrix[colomnBegin][ii] << ' ' , count++;
//        if (count >= 1)
//            cout << matrix[colomnBegin][rowEnd - rowBegin + 1] << ' ';
//        count = 0;
//        cout << endl;
//    }
//}