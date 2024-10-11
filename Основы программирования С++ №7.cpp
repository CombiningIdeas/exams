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
//    /* 7. ���� ����� ����� L (> 0) � ������������� ������ ������� N. 
//    �������� ������ ����� �������, ����� ������� ������ L, 
//    �� ���� ������� � ������� ���������. */
//
//    int L, length;
//    cout << "������� ����� ����� L (L > 0): ";
//    cin >> L;
//    cout << "������� ������ �������: ";
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
//    // ��������� � ������� ������:
//	cout << "����������� ������: " << endl;
//    matrixFillingAndInput(array, length);
//
//    cout << endl << "�������� ������: " << endl;
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
