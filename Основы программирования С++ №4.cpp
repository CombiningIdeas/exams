//#include <iostream>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto  arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD,
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 4. ���� ��� ������������� ������� A, B � C ������� NA, NB, NC 
//	��������������, �������� ������� ����������� �� ��������. 
//	���������� ��� ������� ���, ����� �������������� ������������� ������ D 
//	(������� NA + NB + NC) ������� ������������� �� ��������. */
//
//	int lengthA, lengthB, lengthC;
//
//	cout << "������� ������ ������� A: ";
//	cin >> lengthA;
//	cout << "������� ������ ������� B: ";
//	cin >> lengthB;
//	cout << "������� ������ ������� C: ";
//	cin >> lengthC;
//
//	int lengthD = lengthA + lengthB + lengthC;
//
//	elementType* arrayA, *arrayB, *arrayC, *arrayD;
//	try
//	{
//		arrayA = new elementType[lengthA + 1];
//		arrayB = new elementType[lengthB + 1];
//		arrayC = new elementType[lengthC + 1];
//		arrayD = new elementType[lengthD + 1];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//	
//	// ��������� � ������� ������:
//	cout << "����������� ������ A: " << endl;
//	arrayFillingAndInput(arrayA, lengthA);
//	cout << endl;
//
//	cout << "����������� ������ B: " << endl;
//	arrayFillingAndInput(arrayB, lengthB);
//	cout << endl;
//
//	cout << "����������� ������ C: " << endl;
//	arrayFillingAndInput(arrayC, lengthC);
//	cout << endl;
//
//	// ������������� ������ D (������� NA + NB + NC) - (������ ��� ������ ��� �����
//	// ����� ������ D ���� � �������������� ���������� 
//	// ���� ����� ��� ��� ������ � �����),
//	// ������� ������������� �� ��������
//
//	// ��� ������ �� ������ ������� � ��� ����� �������� �� ����������� 
//	// �� ����� ����� ������ ����� �������.
//
//	// ������� ������ � ������ �������:
//	cout << "������ D ������������� �� ��������: " << endl;
//	arrayReverseUnion(arrayA,arrayB, arrayC, arrayD, 
//		lengthA, lengthB, lengthC, lengthD);
//	cout << endl;
//
//  delete[] arrayA, arrayB, arrayC, arrayD;
//	return 0;
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
//	for (int ii = 0; ii < length; ii++)
//		array[ii] = rand() % 1001 - 500;
//
//	for (int ii = 0; ii < length - 1; ii++)
//		for (int jj = 0; jj < length - 1; jj++)
//			if (array[jj+ 1] > array[jj])
//				Swap(array[jj +1], array[jj]);
//
//	for (int ii = 0; ii < length; ii++)
//		cout << array[ii] << ' ';
//}
//
//template <typename T>
//auto arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD, 
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void
//{
//	int indexArrayD = 0;
//	for (int ii = 0; ii < lengthA; ii++)
//		arrayD[indexArrayD++] = arrayA[ii];
//
//	for (int jj = 0; jj < lengthB; jj++)
//		arrayD[indexArrayD++] = arrayB[jj];
//
//	for (int qq = 0; qq < lengthC; qq++)
//		arrayD[indexArrayD++] = arrayC[qq];
//	
//	for (int ii = 0; ii < lengthD - 1; ii++)
//		for (int jj = 0; jj < lengthD - 1; jj++)
//			if (arrayD[jj + 1] > arrayD[jj])
//				Swap(arrayD[jj + 1], arrayD[jj]);
//
//	for (int ii = 0; ii < lengthD; ii++)
//		cout << arrayD[ii] << ' ';
//		
//}





// ������ ������� ���� �������� �� ������ �����������:


//#include <iostream>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto  arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD,
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 4. ���� ��� ������������� ������� A, B � C ������� NA, NB, NC
//	��������������, �������� ������� ����������� �� ��������.
//	���������� ��� ������� ���, ����� �������������� ������������� ������ D
//	(������� NA + NB + NC) ������� ������������� �� ��������. */
//
//	int lengthA, lengthB, lengthC;
//
//	cout << "������� ������ ������� A: ";
//	cin >> lengthA;
//	cout << "������� ������ ������� B: ";
//	cin >> lengthB;
//	cout << "������� ������ ������� C: ";
//	cin >> lengthC;
//
//	int lengthD = lengthA + lengthB + lengthC;
//
//	elementType* arrayA, * arrayB, * arrayC, * arrayD;
//	try
//	{
//		arrayA = new elementType[lengthA + 1];
//		arrayB = new elementType[lengthB + 1];
//		arrayC = new elementType[lengthC + 1];
//		arrayD = new elementType[lengthD + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	// ��������� � ������� ������:
//	cout << "����������� ������ A: " << endl;
//	arrayFillingAndInput(arrayA, lengthA);
//	cout << endl;
//
//	cout << "����������� ������ B: " << endl;
//	arrayFillingAndInput(arrayB, lengthB);
//	cout << endl;
//
//	cout << "����������� ������ C: " << endl;
//	arrayFillingAndInput(arrayC, lengthC);
//	cout << endl;
//
//	// ������� ������ � ������ �������:
//	cout << "������ D ������������� �� ��������: " << endl;
//	arrayReverseUnion(arrayA, arrayB, arrayC, arrayD,
//		lengthA, lengthB, lengthC, lengthD);
//	cout << endl;
//
//	delete[] arrayA, arrayB, arrayC, arrayD;
//	return 0;
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
//	for (int ii = 0; ii < length; ii++)
//		array[ii] = rand() % 21 - 10;
//
//	for (int ii = 0; ii < length - 1; ii++)
//		for (int jj = 0; jj < length - 1; jj++)
//			if (array[jj + 1] > array[jj])
//				Swap(array[jj + 1], array[jj]);
//
//	for (int ii = 0; ii < length; ii++)
//		cout << array[ii] << ' ';
//}
//
//template <typename T>
//auto arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD,
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void
//{
//	// ������� ������ � �������:
//	elementType* �opyArrayD;
//	try
//	{
//		�opyArrayD = new elementType[lengthD + 1];
//	}
//	catch (const bad_alloc& exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		exit(1);
//	}
//
//	int indexArrayD = 0;
//	// ��� �� ������ ��������� ��� ������
//	for (int ii = 0; ii < lengthA; ii++)
//		�opyArrayD[indexArrayD++] = arrayA[ii];
//
//	for (int jj = 0; jj < lengthB; jj++)
//		�opyArrayD[indexArrayD++] = arrayB[jj];
//
//	for (int qq = 0; qq < lengthC; qq++)
//		�opyArrayD[indexArrayD++] = arrayC[qq];
//
//	indexArrayD = 0; // ��� ����������� ��� ���������� ������������� ���������
//	// ����������� �� ������������� ��������� � ����� ������� 
//	// � ���������� � ����� ������:
//	bool countCopy = true;
//
//	for (int ii = 0; ii < lengthD; ii++)
//	{
//		for (int jj = 0; jj <= ii; jj++)
//			if (�opyArrayD[ii] == �opyArrayD[jj] && ii != jj)
//			{
//				countCopy = false;
//				break;
//			}
//
//		if (countCopy == true)
//			arrayD[indexArrayD++] = �opyArrayD[ii];
//
//		countCopy = true;
//	}
//	delete[] �opyArrayD; // ������� ��� �� ������ ������
//
//	// ��������� ��� ������:
//	for (int ii = 0; ii < indexArrayD - 1; ii++)
//		for (int jj = 0; jj < indexArrayD - 1; jj++)
//			if (arrayD[jj + 1] > arrayD[jj])
//				Swap(arrayD[jj + 1], arrayD[jj]);
//
//
//	for (int ii = 0; ii < indexArrayD; ii++)
//		cout << arrayD[ii] << ' ';
//	
//}



//// ������������ �������
//#include <iostream>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//inline void Swap(T& a, T& b);
//
//template <typename T>
//auto arrayFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto  arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD,
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 4. ���� ��� ������������� ������� A, B � C ������� NA, NB, NC 
//	��������������, �������� ������� ����������� �� ��������. 
//	���������� ��� ������� ���, ����� �������������� ������������� ������ D 
//	(������� NA + NB + NC) ������� ������������� �� ��������. */
//
//	int lengthA, lengthB, lengthC;
//
//	cout << "������� ������ ������� A: ";
//	cin >> lengthA;
//	cout << "������� ������ ������� B: ";
//	cin >> lengthB;
//	cout << "������� ������ ������� C: ";
//	cin >> lengthC;
//
//	int lengthD = lengthA + lengthB + lengthC;
//
//	elementType* arrayA, *arrayB, *arrayC, *arrayD;
//	try
//	{
//		arrayA = new elementType[lengthA + 1];
//		arrayB = new elementType[lengthB + 1];
//		arrayC = new elementType[lengthC + 1];
//		arrayD = new elementType[lengthD + 1];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//	
//	// ��������� � ������� ������:
//	cout << "����������� ������ A: " << endl;
//	arrayFillingAndInput(arrayA, lengthA);
//	cout << endl;
//
//	cout << "����������� ������ B: " << endl;
//	arrayFillingAndInput(arrayB, lengthB);
//	cout << endl;
//
//	cout << "����������� ������ C: " << endl;
//	arrayFillingAndInput(arrayC, lengthC);
//	cout << endl;
//
//	// ������������� ������ D (������� NA + NB + NC) - (������ ��� ������ ��� �����
//	// ����� ������ D ���� � �������������� ���������� 
//	// ���� ����� ��� ��� ������ � �����),
//	// ������� ������������� �� ��������
//
//	// ������� ������ � ������ �������:
//	cout << "������ D ������������� �� ��������: " << endl;
//	arrayReverseUnion(arrayA,arrayB, arrayC, arrayD, 
//		lengthA, lengthB, lengthC, lengthD);
//	cout << endl;
//
//  delete[] arrayA, arrayB, arrayC, arrayD;
//	return 0;
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
//	for (int ii = 0; ii < length; ii++)
//		array[ii] = rand() % 1001 - 500;
//
//	for (int ii = 0; ii < length - 1; ii++)
//		for (int jj = 0; jj < length - 1; jj++)
//			if (array[jj+ 1] > array[jj])
//				Swap(array[jj +1], array[jj]);
//
//	for (int ii = 0; ii < length; ii++)
//		cout << array[ii] << ' ';
//}
//
//template <typename T>
//auto arrayReverseUnion(T* arrayA, T* arrayB, T* arrayC, T* arrayD, 
//	int lengthA, int lengthB, int lengthC, int lengthD) -> void
//{
//	int indexArrayD = 0, tmp = 0, count = 0;
//	for (int ii = 0; ii < lengthA; ii++)
//		for (int jj = 0; jj < lengthA - 1; jj++)
//		{
//			if (arrayD[jj] > arrayA[ii] && arrayD[jj] < arrayA[ii+1])
//			{
//				tmp = ii;
//				for (int gg = jj; gg < lengthA; gg++)
//				{
//					arrayA[lengthA - count] = arrayA[lengthA - count - 1];
//					count++;
//					if (count == 2)
//						break;
//				}
//				arrayD[tmp++] = arrayA[ii];
//				if (tmp > ii)
//					indexArrayD++;
//				count = 0;
//				break;
//			}
//			else
//			{
//				arrayD[indexArrayD++] = arrayA[ii];
//				break;
//			}
//		}
//
//	for (int ii = 0; ii < lengthB; ii++)
//		for (int jj = 0; jj < lengthA + lengthB - 1; jj++)
//		{
//			if (arrayD[jj] > arrayB[ii] && arrayD[jj] < arrayB[ii + 1] ||
//				arrayD[jj] < arrayB[ii + 1] || arrayD[jj] > arrayB[ii])
//			{
//				tmp = ii;
//				for (int gg = jj; gg < lengthA + lengthB; gg++)
//				{
//					arrayB[lengthA + lengthB - count]
//						= arrayB[lengthA + lengthB - count - 1];
//					count++;
//					if (count == (lengthA + lengthB - 1))
//						break;
//				}
//				arrayD[tmp++] = arrayB[ii];
//				if (tmp > ii)
//					indexArrayD++;
//				count = 0;
//				break;
//			}
//			else
//			{
//				arrayD[indexArrayD++] = arrayB[ii];
//				break;
//			}
//		}
//	//for (int jj = 0; jj < lengthB; jj++)
//		//arrayD[indexArrayD++] = arrayB[jj];
//
//	for (int qq = 0; qq < lengthC; qq++)
//		arrayD[indexArrayD++] = arrayC[qq];
//	
//	/*for (int ii = 0; ii < lengthD - 1; ii++)
//		for (int jj = 0; jj < lengthD - 1; jj++)
//			if (arrayD[jj + 1] > arrayD[jj])
//				Swap(arrayD[jj + 1], arrayD[jj]);*/
//
//	for (int ii = 0; ii < lengthD; ii++)
//		cout << arrayD[ii] << ' ';
//		
//}