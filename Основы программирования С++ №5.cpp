//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto matrixFillingAndInput(T* array1, int length) -> void;
//
//template <typename T>
//auto matrixSpecialSortedAndInput(T* array1, int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 5.��� ������ ������� N, ��� �������� ��������, ����� ������, 
//    ����������� �� ��������. ������� ������ �������������, ���������� 
//    �������, ���������� ���������������, �� ����� �������. ��� ���������� 
//    ������� �� ������� ������������ ��������������� �������. */
//
//    const int length = 10;
//
//    elementType* array;
//    try
//    {
//        array = new elementType[length];
//    }
//    catch (const bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//    // ��������� � ������� ������:
//    cout << "����������� ������: " << endl;
//    matrixFillingAndInput(array, length);
//    cout << endl;
//
//    cout << endl << "�������� ������: " << endl;
//    matrixSpecialSortedAndInput(array, length);
//    cout << endl;
//
//    delete[] array;
//    return 0;
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
//auto matrixFillingAndInput(T* array, int length) -> void
//{
//    int unorderedElement = rand() % length/2 + 1;
//  
//    for (int ii = 0; ii < length; ii++)
//        array[ii] = rand() % 90 + 10;
//    
//    for (int ii = 0; ii < length; ii++)
//        for (int ff = 0; ff < length - 1; ff++)
//            if (array[ff] < array[ff + 1])
//                Swap(array[ff], array[ff + 1]);
//    
//    array[unorderedElement] = rand() % 9 + 1;
//
//    for (int ii = 0; ii < length; ii++)
//        cout << ' ' << left << setw(2) << array[ii];
//
//}
//
//template <typename T>
//auto matrixSpecialSortedAndInput(T* array, int length) -> void
//{
//    for (int ii = 0; ii < length; ii++)
//        for (int ff = 0; ff < length - ii; ff++)
//            if (array[ff] < array[ff + 1])
//                Swap(array[ff], array[ff + 1]);
//
//    for (int ii = 0; ii < length; ii++)
//        cout << ' ' << left << setw(2) << array[ii];
//}



//������ ������� ������ �������� ����6� ����������, ��� ������� ��� ���������� �������
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto matrixFillingAndInput(T* array1, int length) -> void;
//
//template <typename T>
//auto matrixSpecialSortedAndInput(T* array1, int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 5.��� ������ ������� N, ��� �������� ��������, ����� ������,
//    ����������� �� ��������. ������� ������ �������������, ����������
//    �������, ���������� ���������������, �� ����� �������. ��� ����������
//    ������� �� ������� ������������ ��������������� �������. */
//
//    const int length = 10;
//
//    elementType* array;
//    try
//    {
//        array = new elementType[length];
//    }
//    catch (const bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//    // ��������� � ������� ������:
//    cout << "����������� ������: " << endl;
//    matrixFillingAndInput(array, length);
//    cout << endl;
//
//    cout << endl << "�������� ������: " << endl;
//    matrixSpecialSortedAndInput(array, length);
//    cout << endl;
//
//    delete[] array;
//    return 0;
//}
//
//template <typename T>
//inline void Swap(T& a, T& b)
//{
//    T tmp = a;
//    a = b;
//    b = tmp;
//}
//
//template <typename T>
//auto matrixFillingAndInput(T* array, int length) -> void
//{
//    int unorderedElement = rand() % length / 2 + 1;
//
//    for (int ii = 0; ii < length; ii++)
//        array[ii] = rand() % 90 + 10;
//
//    for (int ii = 0; ii < length; ii++)
//        for (int ff = 0; ff < length - 1; ff++)
//            if (array[ff] < array[ff + 1])
//                Swap(array[ff], array[ff + 1]);
//
//    array[unorderedElement] = rand() % 9 + 1;
//
//    for (int ii = 0; ii < length; ii++)
//        cout << ' ' << left << setw(2) << array[ii];
//
//}
//
//template <typename T>
//auto matrixSpecialSortedAndInput(T* array, int length) -> void
//{
//    for (int ii = 0; ii < length; ii++)
//        for (int ff = 0; ff < length - 1; ff++)
//            if (array[ff] < array[ff + 1])
//                if ()
//            {
//                while()
//            }
//                //Swap(array[ff], array[ff + 1]);
//
//    for (int ii = 0; ii < length; ii++)
//        cout << ' ' << left << setw(2) << array[ii];
//}
