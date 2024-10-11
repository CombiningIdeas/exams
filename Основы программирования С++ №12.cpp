//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//using elementType = int;
//
//template <typename T>
//auto matrixFillingAndInput(T* array, int length) -> void;
//
//template <typename T>
//auto matrixSpecialInput(T* array, int length) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 12.	���� ���������� ������� A ������� M. ��������� �� �� ���� 90� 
//	� ������������� �����������, �� ���� �� ������� ������� 
//	(��� ���� ������� A1,1 �������� � A1,M, ������� A1,M � � AM,M � �. �.). 
//	��������������� ������� �� ������������. */
//
//	// ��� ��� ������� ���������� �� ����� ������� ���� ����� ������
//	const int length = 4; 
//
//	elementType** matrix; // ������� ������� ����� ������� ��������
//	try
//	{
//		matrix = new elementType*[length];
//
//		// ��������� �������� ������ ������ ����������� ����������� ���������(��������)
//		for (int ii = 0; ii < length; ii++)
//			matrix[ii] = new int[length];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	
//	
//	// ��������� � ������� ������:
//	cout << "����������� �������: " << endl;
//	matrixFillingAndInput(matrix, length);
//	cout << endl;
//
//	// ������� ������ � ������ �������:
//	cout << "������� �����: " << endl;
//	matrixSpecialInput(matrix, length);
//	cout << endl;
//
//	// ��� ��� �� ������� ���� ������������ ������ ������ �������� 
//	// ���� ������ ������������ ������� �� �� ���� ����� �������
//
//	for (int ii = 0; ii < length; ii++)
//		delete[] matrix [ii];
//
//	delete[] matrix;
//	return 0;
//}
//
//template <typename T>
//auto matrixFillingAndInput(T* matrix, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//	{
//		for (int jj = 0; jj < length; jj++)
//			cout << ' ' << left << setw(2) << (matrix[ii][jj] = rand() % 90+10);
//
//		cout << endl;
//	}
//}
//
//template <typename T>
//auto matrixSpecialInput(T* matrix, int length) -> void
//{
//	for (int ii = 0; ii < length; ii++)
//	{
//		for (int jj = 0; jj < length; jj++)
//			cout << ' ' << left << setw(2) << matrix[length - jj - 1][ii];
//
//		cout << endl;
//	}
//}
