//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto matrixFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto matrixSpecialSortedAndInput(T* array, int length, int L, T* resultArray) -> void;
//
//int main()
//{	 
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 7. Дано целое число L (> 0) и целочисленный массив размера N. 
//    Заменить каждую серию массива, длина которой больше L, 
//    на один элемент с нулевым значением. */
//
//    int L, length;
//    cout << "Введите целое число L (L > 0): ";
//    cin >> L;
//    cout << "Введите длинну массива: ";
//    cin >> length;
//    
//    elementType* array, *resultArray;
//    try
//    {
//    	array = new elementType[length];
//        resultArray = new elementType[length];
//    }
//    catch (const bad_alloc&exception)
//    {
//    	cerr << "Allocation failed: " << exception.what() << '\n';
//    	return 1;
//    }
//
//    // заполняем и выводим массив:
//	cout << "Изначальный массив: " << endl;
//    matrixFillingAndInput(array, length);
//
//    cout << endl << "Итоговый массив: " << endl;
//    matrixSpecialSortedAndInput(array, length, L, resultArray);
//    cout << endl;
//    
//    delete[] array;
//    return 0;
//}
//
//template <typename T>
//auto matrixFillingAndInput(T* array, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		cout << ' ' << left << setw(2) << (array[ii] = rand() % 4+1);
//}
//
//template <typename T>
//auto matrixSpecialSortedAndInput(T* array, int length, 
//    int L, T* resultArray) -> void
//{
//    for (int ii = 0; ii < length; ii++)
//    {
//        if (array[ii] == array[ii + 1])
//        {
//            int tmp = array[ii];
//            bool tmpLogic = true;
//            for (int jj = ii; jj < ii+L; jj++)
//                if (tmp != array[jj])
//                    tmpLogic = false;
//
//            if (tmpLogic == true)
//            {
//                cout << ' ' << left << setw(2) << '0';
//                ii += L - 1;
//            }
//            else
//                cout << ' ' << left << setw(2) << array[ii];
//        }
//        else
//        {
//            cout << ' ' << left << setw(2) << array[ii];
//        }
//    }
//
//}
