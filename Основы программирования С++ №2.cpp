//#include <iostream>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto arraySpecialInput(T* array, int length) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 2. ƒан массив A размера N. ¬ывести его элементы в следующем 
//	пор€дке: A1, A2, AN, ANЦ1, A3, A4, ANЦ2, ANЦ3, Е  */
//
//	int length;
//
//	cout << "¬ведите длинну массива: ";
//	cin >> length;
//
//	elementType* arrayA; // - массив ј
//	try
//	{
//		arrayA = new elementType[length + 1];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//	
//	// заполн€ем и выводим массив:
//	cout << "»значальный массив: " << endl;
//	arrayFillingAndInput(arrayA, length);
//	cout << endl;
//
//	// ¬ыводим массив в нужном пор€дке:
//	cout << "ћассив в нужном пор€дке(A1, A2, AN, ANЦ1, A3, A4, ANЦ2, ANЦ3, ...): " << endl;
//	arraySpecialInput(arrayA, length);
//	cout << endl;
//
//	delete[] arrayA;
//	return 0;
//}
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//		cout << (array[ii] = rand() % 1001 - 500) << ' ';
//}
//
//template <typename T>
//auto arraySpecialInput(T* array, int length) -> void
//{
//	int startFlag = 0;
//	int endFlag = length - 1;
//
//	while (startFlag <= endFlag)
//	{
//		cout << array[startFlag] << " ";
//		if (startFlag == endFlag)
//			break;
//		startFlag++;
//
//		cout << array[startFlag] << " ";
//		if (startFlag == endFlag)
//			break;
//		startFlag++;
//
//		cout << array[endFlag] << " ";
//		if (startFlag == endFlag)
//			break;
//		endFlag--;
//
//		cout << array[endFlag] << " ";
//		if (startFlag == endFlag)
//			break;
//		endFlag--;
//	}
//}