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
//auto setFillingAndInput(T* matrix, int lengthX, int lengthY) -> void;
//
//template <typename T>
//auto setReverseUnion(T* matrix, int lengthX, int lengthY) -> void;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	srand(static_cast<unsigned int>(time(nullptr)));
//	/* 8. ���� ��������� A �� N ����� � �������������� ������������ x, y. 
//	������� �� ������������ ��������� ��������� ��������� �������: 
//	(x1, y1) < (x2, y2), ���� ���� x1 + y1 < x2 + y2, 
//	���� x1 + y1 = x2 + y2 � x1 < x2. ����������� ����� ������� ��������� 
//	�� �������� � ������������ � ��������� ��������. */
//
//	int lengthX = 4, lengthY = 4;
//
//	elementType** setOfPoints;
//	try
//	{
//		setOfPoints = new elementType * [lengthX];
//
//		for (int ii = 0; ii < lengthX; ii++)
//			setOfPoints[ii] = new elementType[lengthY];
//	}
//	catch (const bad_alloc&exception)
//	{
//		cerr << "Allocation failed: " << exception.what() << '\n';
//		return 1;
//	}
//
//	// ��������� � ������� ��������� � ����� �������:
//	cout << "��������� � ������� ����� ��������� � ����� �������: " << endl;
//	setFillingAndInput(setOfPoints, lengthX, lengthY);
//	cout << endl;
//
//	cout << "����������� ����� ������� ��������� �� ��������: " << endl;
//	setReverseUnion(setOfPoints, lengthX, lengthY);
//	cout << endl;
//
//	for (int ii = 0; ii < lengthX; ii++)
//		delete [] setOfPoints[ii];
//
//	delete[] setOfPoints;
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
//auto setFillingAndInput(T* matrix, int lengthX, int lengthY) -> void
//{
//	for (int ii = 0; ii < lengthX; ii++)
//		for (int jj = 0; jj < lengthY; jj++)
//			matrix[ii][jj] = rand() % 90 + 10;
//
//	for (int kk = 0; kk < lengthX * lengthY; kk++)
//	{
//		for (int ii = 0; ii < lengthX; ii++)
//		{
//			for (int jj = 0; jj < lengthY; jj++)
//			{
//				if (jj != (lengthY - 1))
//				{
//					if (matrix[ii][jj + 1] > matrix[ii][jj])
//						Swap(matrix[ii][jj + 1], matrix[ii][jj]);
//				}
//				else if ((jj == (lengthY - 1)) && (ii != (lengthX - 1)))
//				{
//					if (matrix[ii + 1][0] > matrix[ii][jj])
//						Swap(matrix[ii + 1][0], matrix[ii][jj]);
//				}
//			}
//		}
//	}
//
//	for (int ii = 0; ii < lengthX; ii++)
//	{
//		for (int jj = 0; jj < lengthY; jj++)
//			cout << ' ' << left << setw(2) << matrix[ii][jj];
//
//		cout << endl;
//	}
//}
//
//template <typename T>
//auto setReverseUnion(T* matrix, int lengthX, int lengthY) -> void
//{
//	for (int kk = 0; kk < lengthX * lengthY; kk++)
//	{
//		for (int ii = 0; ii < lengthX; ii++)
//		{
//			for (int jj = 0; jj < lengthY; jj++)
//			{
//				if (jj != (lengthY - 1))
//				{
//					if (matrix[ii][jj + 1] < matrix[ii][jj])
//						Swap(matrix[ii][jj + 1], matrix[ii][jj]);
//				}
//				else if ((jj == (lengthY - 1)) && (ii != (lengthX - 1)))
//				{
//					if (matrix[ii + 1][0] < matrix[ii][jj])
//						Swap(matrix[ii + 1][0], matrix[ii][jj]);
//				}
//			}
//		}
//	}
//
//
//	for (int ii = 0; ii < lengthX; ii++)
//	{
//		for (int jj = 0; jj < lengthY; jj++)
//			cout << ' ' << left << setw(2) << matrix[ii][jj];
//
//		cout << endl;
//	}
//}
