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
//auto arraySpecialSortedAndInput(T* array, int length) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    /* 1. ���� ����� ����� N � ����� �� N ����� �����. 
//    ����� ����������� ���������� ������ ������ ������������ ��������� �� 
//    ������� ������. */
//
//    int length;
//    cout << "������� ������ �������: ";
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
//    // ��������� � ������� ������:
//    cout << "����������� ������: " << endl;
//    arrayFillingAndInput(array, length);
//    cout << endl;
//
//    cout << endl << "M���������� ���������� ������ ������ ������������ ���������: " << endl;
//    arraySpecialSortedAndInput(array, length);
//    cout << endl;
//
//    delete[] array;
//    return 0;
//}
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void
//{
//    for (int ii = 0; ii < length; ii++)
//        cout << ' ' << left << setw(2) << (array[ii] = rand() % 2 + 1);
//}
//
//template <typename T>
//auto arraySpecialSortedAndInput(T* array, int length) -> void
//{
//   int tmpMaxNumber = 0, counter = 0;
//   int maxNumber = numeric_limits<int>::max();
//   bool count = true;
//
//   for (int ii = 0; ii < length; ii++)
//       if (tmpMaxNumber < array[ii])
//           tmpMaxNumber = array[ii];
//
//  
//   
//   
//   for (int ii = 0; ii < length; ii++)
//       if (tmpMaxNumber == array[ii])
//       {
//           while (array[ii++] == tmpMaxNumber)
//               counter++;
//
//           if (counter < maxNumber)
//               maxNumber = counter;
//
//           counter = 0;
//       }
//
//   if (maxNumber > length)
//       maxNumber = length;
//	 
//   cout << maxNumber << endl;
//}