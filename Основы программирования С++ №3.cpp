////Первый способ через сортировку
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
//    /* 3. Определение: целочисленный массив размера N является перестановкой, 
//    если он содержит все числа от 1 до N. Дан целочисленный массив A размера N, 
//    являющийся перестановкой. Найти количество инверсий в данной перестановке, 
//    то есть таких пар элементов AI и AJ, в которых большее число находится слева 
//    от меньшего: AI > AJ при I < J.  */
//
//    int length;
//    cout << "Введите длинну перестановки: ";
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
//    // заполняем и выводим перестановку:
//    cout << "Изначальная перестановка: " << endl;
//    arrayFillingAndInput(array, length);
//    cout << endl;
//
//    cout << endl << "количество инверсий в данной перестановке: " << endl;
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
//    // так как массив содержит все числа от 1 до N(по условию), то:
//    int count = 0, val, counter = 0;
//    for (int ff = 0; ff < length; ff++)
//    {
//        do
//        {
//            count = 0;
//            val = rand() % length + 1;
//
//            // проверка на повторения чисел и запись только разных чисел:
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
//    // Для подсчета числа инверсий в перестановке необходимо подсчитать 
//    // для каждого элемента перестановки сколько элементов больших него стоит 
//    // перед ним(или сколько элементов меньших него стоит за ним) 
//    // и все эти числа сложить.
//    int counter = 0;
//
//    for (int ii = 0; ii < length; ii++)
//        for (int jj = 0; jj < length - 1; jj++)
//            if (array[jj] > array[jj + 1])
//                Swap(array[jj], array[jj + 1]), counter++;
//    // просто считаем число перестановок с помощью пузырьковой сортировки
//    
//    cout << ' ' << left << setw(2) << counter;
//}



////Второй способ через перестановку
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
//    /* 3. Определение: целочисленный массив размера N является перестановкой,
//    если он содержит все числа от 1 до N. Дан целочисленный массив A размера N,
//    являющийся перестановкой. Найти количество инверсий в данной перестановке,
//    то есть таких пар элементов AI и AJ, в которых большее число находится слева
//    от меньшего: AI > AJ при I < J.  */
//
//    int length;
//    cout << "Введите длинну перестановки: ";
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
//    // заполняем и выводим перестановку:
//    cout << "Изначальная перестановка: " << endl;
//    arrayFillingAndInput(array, length);
//    cout << endl;
//
//    cout << endl << "количество инверсий в данной перестановке: " << endl;
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
//    // так как массив содержит все числа от 1 до N(по условию), то:
//    int count = 0, val, counter = 0;
//    for (int ff = 0; ff < length; ff++)
//    {
//        do
//        {
//            count = 0;
//            val = rand() % length + 1;
//
//            // проверка на повторения чисел и запись только разных чисел:
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
//    // Для подсчета числа инверсий в перестановке необходимо подсчитать 
//    // для каждого элемента перестановки сколько элементов больших него стоит 
//    // перед ним(или сколько элементов меньших него стоит за ним) 
//    // и все эти числа сложить.
//    int counter = 0;
//
//    for (int ii = length - 1; ii >= 0; ii--)
//        for (int jj = 0; jj < ii; jj++)
//            if (array[jj] > array[ii])
//                counter++;
//
//    cout << ' ' << left << setw(2) << counter;
//}