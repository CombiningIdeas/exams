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
//    /* 6. дан массив a размера n. не изменяя данный массив, вывести номера 
//    его элементов в том порядке, в котором соответствующие им элементы 
//    образуют возрастающую последовательность. использовать метод 
//    «пузырьковой» сортировки, модифицировав его следующим образом: 
//    создать вспомогательный целочисленный массив номеров i, заполнив его 
//    числами от 1 до n; просматривать массив a, сравнивая пары элементов 
//    массива a с номерами i1 и i2, i2 и i3, … и меняя местами 
//    соответствующие элементы массива i, если левый элемент пары больше правого. 
//    повторив описанную процедуру просмотра n – 1 раз, получим в массиве i 
//    требуемую последовательность номеров.  */
//
//    int length;
//    cout << "введите длинну массива: ";
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
//    // заполняем и выводим массив:
//    cout << "изначальный массив: " << endl;
//    matrixfillingandinput( length, resultarray);
//    cout << endl;
//
//    cout << endl << "Индексы этих элементов(в возрастающей последовательности: " << endl;
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
//    //            Swap(resultarray[array[jj]], resultarray[array[jj] + 1]);// меняем местами соответствующие элементы i
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
//            // делаем это число самым большим ведь оно нам больше не нужно и его
//            // индекс мы уже нашли и теперь чтобы это число больше не попадалось
//            // поэтому мы записывапем в него самое большое значение 
//            // ведь нам нужны самые маленькие значения
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