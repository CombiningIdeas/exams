////������ ������ ����� ����������
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
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto countingTheNumberOfInversions(T* array, int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 3. �����������: ������������� ������ ������� N �������� �������������, 
//    ���� �� �������� ��� ����� �� 1 �� N. ��� ������������� ������ A ������� N, 
//    ���������� �������������. ����� ���������� �������� � ������ ������������, 
//    �� ���� ����� ��� ��������� AI � AJ, � ������� ������� ����� ��������� ����� 
//    �� ��������: AI > AJ ��� I < J.  */
//
//    int length;
//    cout << "������� ������ ������������: ";
//    cin >> length;
//    cout << endl;
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
//    // ��������� � ������� ������������:
//    cout << "����������� ������������: " << endl;
//    arrayFillingAndInput(array, length);
//    cout << endl;
//
//    cout << endl << "���������� �������� � ������ ������������: " << endl;
//    countingTheNumberOfInversions(array, length);
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
//auto arrayFillingAndInput(T* array, int length) -> void
//{
//    // ��� ��� ������ �������� ��� ����� �� 1 �� N(�� �������), ��:
//    int count = 0, val, counter = 0;
//    for (int ff = 0; ff < length; ff++)
//    {
//        do
//        {
//            count = 0;
//            val = rand() % length + 1;
//
//            // �������� �� ���������� ����� � ������ ������ ������ �����:
//            for (int ii = 0; ii < counter; ii++)
//                if (val == array[ii])
//                    count += 1;
//
//        } while (count != 0);
//
//        if (count == 0)
//            array[counter++] = val;
//    }
//
//     for (int jj = 0; jj < length; jj++)
//         cout << ' ' << left << setw(2) << array[jj];
//}
//
//template <typename T>
//auto countingTheNumberOfInversions(T* array, int length) -> void
//{
//    // ��� �������� ����� �������� � ������������ ���������� ���������� 
//    // ��� ������� �������� ������������ ������� ��������� ������� ���� ����� 
//    // ����� ���(��� ������� ��������� ������� ���� ����� �� ���) 
//    // � ��� ��� ����� �������.
//    int counter = 0;
//
//    for (int ii = 0; ii < length; ii++)
//        for (int jj = 0; jj < length - 1; jj++)
//            if (array[jj] > array[jj + 1])
//                Swap(array[jj], array[jj + 1]), counter++;
//    // ������ ������� ����� ������������ � ������� ����������� ����������
//    
//    cout << ' ' << left << setw(2) << counter;
//}



////������ ������ ����� ������������
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//using elementType = int;
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto countingTheNumberOfInversions(T* array, int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 3. �����������: ������������� ������ ������� N �������� �������������,
//    ���� �� �������� ��� ����� �� 1 �� N. ��� ������������� ������ A ������� N,
//    ���������� �������������. ����� ���������� �������� � ������ ������������,
//    �� ���� ����� ��� ��������� AI � AJ, � ������� ������� ����� ��������� �����
//    �� ��������: AI > AJ ��� I < J.  */
//
//    int length;
//    cout << "������� ������ ������������: ";
//    cin >> length;
//    cout << endl;
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
//    // ��������� � ������� ������������:
//    cout << "����������� ������������: " << endl;
//    arrayFillingAndInput(array, length);
//    cout << endl;
//
//    cout << endl << "���������� �������� � ������ ������������: " << endl;
//    countingTheNumberOfInversions(array, length);
//    cout << endl;
//
//    delete[] array;
//    return 0;
//}
//
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void
//{
//    // ��� ��� ������ �������� ��� ����� �� 1 �� N(�� �������), ��:
//    int count = 0, val, counter = 0;
//    for (int ff = 0; ff < length; ff++)
//    {
//        do
//        {
//            count = 0;
//            val = rand() % length + 1;
//
//            // �������� �� ���������� ����� � ������ ������ ������ �����:
//            for (int ii = 0; ii < counter; ii++)
//                if (val == array[ii])
//                    count += 1;
//
//        } while (count != 0);
//
//        if (count == 0)
//            array[counter++] = val;
//    }
//
//    for (int jj = 0; jj < length; jj++)
//        cout << ' ' << left << setw(2) << array[jj];
//}
//
//template <typename T>
//auto countingTheNumberOfInversions(T* array, int length) -> void
//{
//    // ��� �������� ����� �������� � ������������ ���������� ���������� 
//    // ��� ������� �������� ������������ ������� ��������� ������� ���� ����� 
//    // ����� ���(��� ������� ��������� ������� ���� ����� �� ���) 
//    // � ��� ��� ����� �������.
//    int counter = 0;
//
//    for (int ii = length - 1; ii >= 0; ii--)
//        for (int jj = 0; jj < ii; jj++)
//            if (array[jj] > array[ii])
//                counter++;
//
//    cout << ' ' << left << setw(2) << counter;
//}