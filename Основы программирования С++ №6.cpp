//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementtype = int;
//
//template <typename T>
//void Swap(T& a, T& b);
//
//template <typename T>
//auto matrixfillingandinput(int length, T* resultarray) -> void;
//
//template <typename T>
//auto matrixspecialsortedandinput(T* array, T* resultarray, int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 6. ��� ������ a ������� n. �� ������� ������ ������, ������� ������ 
//    ��� ��������� � ��� �������, � ������� ��������������� �� �������� 
//    �������� ������������ ������������������. ������������ ����� 
//    ������������ ����������, ������������� ��� ��������� �������: 
//    ������� ��������������� ������������� ������ ������� i, �������� ��� 
//    ������� �� 1 �� n; ������������� ������ a, ��������� ���� ��������� 
//    ������� a � �������� i1 � i2, i2 � i3, � � ����� ������� 
//    ��������������� �������� ������� i, ���� ����� ������� ���� ������ �������. 
//    �������� ��������� ��������� ��������� n � 1 ���, ������� � ������� i 
//    ��������� ������������������ �������.  */
//
//    int length;
//    cout << "������� ������ �������: ";
//    cin >> length;
//    cout << endl;
//
//    elementtype* array, *resultarray;
//    try
//    {
//        array = new elementtype[length];
//        resultarray = new elementtype[length];
//    }
//    catch (const bad_alloc& exception)
//    {
//        cerr << "allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//    // ��������� � ������� ������:
//    cout << "����������� ������: " << endl;
//    matrixfillingandinput( length, resultarray);
//    cout << endl;
//
//    cout << endl << "������� ���� ���������(� ������������ ������������������: " << endl;
//    matrixspecialsortedandinput(array, resultarray, length);
//    cout << endl;
//
//    delete[] array, resultarray;
//    return 0;
//}
//
//template <typename T>
//void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template <typename T>
//auto matrixfillingandinput( int length, T* resultarray) -> void
//{
//    for (int ii = 0; ii < length; ii++)
//    {
//        cout << ' ' << left << setw(2) << (resultarray[ii] = rand() % 90 + 10);
//    }
//}
//
//template <typename T>
//auto matrixspecialsortedandinput(T* array, T* resultarray, int length) -> void
//{
//    //for (int ii = 0; ii < length; ii++)
//    //    for (int jj = 0; jj < length - ii - 1; jj++)
//    //        if (resultarray[array[jj]] > resultarray[array[jj] + 1])
//    //            Swap(resultarray[array[jj]], resultarray[array[jj] + 1]);// ������ ������� ��������������� �������� i
//    int count = 0, counter = 0, tmp = resultarray[0], countIndex = 0;
//    for (int ii = 0; ii < length; ii++)
//    {
//        for (int jj = 0; jj < length; jj++)
//            if (tmp > resultarray[jj])
//                tmp = resultarray[jj];
//
//        for (int jj = 0; jj < length; jj++)
//        {
//            if (tmp == resultarray[jj])
//            {
//                resultarray[jj] = numeric_limits<int>::max();
//                break;
//            }
//            counter++;
//
//            // ������ ��� ����� ����� ������� ���� ��� ��� ������ �� ����� � ���
//            // ������ �� ��� ����� � ������ ����� ��� ����� ������ �� ����������
//            // ������� �� ����������� � ���� ����� ������� �������� 
//            // ���� ��� ����� ����� ��������� ��������
//        }
//
//        array[countIndex++] = counter;
//        counter = 0;
//
//        for (int hh = 0; hh < length; hh++)
//        {
//            if (resultarray[hh] != numeric_limits<int>::max())
//            {
//                tmp = resultarray[hh];
//                break;
//            }
//        }
//    }
//                
//
//    /*for (int ii = 0; ii < length; ii++)
//        cout << ' ' << left << setw(2) << resultarray[ii];
//    cout << endl;*/
//
//    
//    for (int ii = 0; ii < length; ii++)
//        cout << ' ' << left << setw(2) << array[ii];
//}