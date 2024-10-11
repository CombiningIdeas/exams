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
//    /* 1. ƒано целое число N и набор из N целых чисел. 
//    Ќайти минимальное количество подр€д идущих максимальных элементов из 
//    данного набора. */
//
//    int length;
//    cout << "¬ведите длинну массива: ";
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
//    // заполн€ем и выводим массив:
//    cout << "»значальный массив: " << endl;
//    arrayFillingAndInput(array, length);
//    cout << endl;
//
//    cout << endl << "Mинимальное количество подр€д идущих максимальных элементов: " << endl;
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