//#include <iostream>
//#include <cstring>
//
//using namespace std;
//using elementType = char;
//const int BUFFER_SIZE = 1024;
//
//// ������� ��� ��������, �������� �� ������ ������
//auto isDigit(char symbol) -> bool;
//
////������� ��� ��������, �������� �� ����� ������ �����
//auto StringToNumber(char* str) -> int;
//
//// ������� ��� ��������, �������� �� ������ ����������
//auto isOperator(char symbol) -> bool;
//
//// ������� ��� ��������, �������� �� ������ ����������� �������
//auto isOpeningBracket(char symbol) -> bool;
//
//// ������� ��� ��������, �������� �� ������ ����������� �������
//auto isClosingBracket(char symbol) -> bool;
//
//// ������� ��� ����������� ���������� ���������
//auto getOperatorPriority(char operation) -> int;
//
//
//// ������� ��� ���������� �������������� �������� ��� ����� ����������
//auto performOperation(double operand1, double operand2, char operation) -> double;
//
//
//// ������� ��� ���������� �������� ��������������� ���������
//template <typename T>
//auto solveExpression(const T* arithmeticExpression) -> double;
//
//
//int main()
//{
//    elementType* arithmeticExpression;
//    try
//    {
//        arithmeticExpression = new elementType[BUFFER_SIZE+1];
//    
//    }
//    catch (const std::bad_alloc&exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//    setlocale(LC_ALL, "Russian");
//    cout << "������� �������������� ���������(��������� �����: (, ), +, -, *, /, ): ";
//    cin.getline(arithmeticExpression, BUFFER_SIZE);
//
//    int lenString = strlen(arithmeticExpression);
//    lenString += 2;
//
//    elementType* resultExpression;
//    try
//    {
//        resultExpression = new elementType[lenString];
//
//    }
//    catch (const std::bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//
//    for (int ii = 0; ii < lenString - 2; ii++)
//        resultExpression[ii] = arithmeticExpression[ii];
//
//    resultExpression[lenString - 2] = '+';
//    resultExpression[lenString - 1] = '0';
//    resultExpression[lenString] = '\0';
//
//
//    double result = solveExpression(resultExpression);
//    cout << "���������: " << result << endl;
//
//    delete[] arithmeticExpression, resultExpression;
//
//    return 0;
//}
//
//
//// ������� ��� ��������, �������� �� ������ ������
//auto isDigit(char symbol) -> bool
//{
//    int numbers = static_cast<int>(symbol - '0');
//    if (numbers >= 0)// ���� ������ ���� ������ ��� �� ����� � ���� ����� ��
//        return true;
//    return false;
//}
//
//
//auto StringToNumber(char* str) -> int
//{
//	int number = 0;
//	int LENGTH = strlen(str);// ������ ������
//	int count = 1;
//
//
//	while (--LENGTH > 0)
//		count *= 10;// �������� �� 10 ������ ��� � ����� ������ � ������ ������
//	// � � ������ ������ ���� ������� ����� ����� ������� � ����� �������
//
//	for (; *str != '\0'; str++, count = count / 10)
//		number += static_cast<int>(*str - '0') * count;// ���������� ��������
//
//	return number;
//}
//
//// ������� ��� ��������, �������� �� ������ ����������
//auto isOperator(char symbol) -> bool
//{
//    switch (symbol)
//    {
//    case '+':
//        return true;
//        break;
//    case '-':
//        return true;
//        break;
//    case '*':
//        return true;
//        break;
//    case '/':
//        return true;
//        break;
//    default:
//        break;
//    }
//    return false;
//}
//
//
//// ������� ��� ��������, �������� �� ������ ����������� �������
//auto isOpeningBracket(char symbol) -> bool
//{
//    if (symbol == '(')
//        return true;
//    return false;
//}
//
//
//// ������� ��� ��������, �������� �� ������ ����������� �������
//auto isClosingBracket(char symbol) -> bool
//{
//    if (symbol == ')');
//        return true;
//    return false;
//}
//
//
//// ������� ��� ����������� ���������� ���������
//auto getOperatorPriority(char operation) -> int
//{
//    if (operation == '+' || operation == '-')
//        return 1;
//    else if (operation == '*' || operation == '/')
//        return 2;
//    else
//        return 0;
//}
//
//
//// ������� ��� ���������� �������������� �������� ��� ����� ����������
//auto performOperation(double operand1, double operand2, char operation) -> double
//{
//    switch (operation)
//    {
//    case '+':
//        return operand1 + operand2;
//        break;
//    case '-':
//        return operand1 - operand2;
//    case '*':
//        return operand1 * operand2;
//        break;
//    case '/':
//        return operand1 / operand2;
//        break;
//    default:
//        break;
//    }
//}
//
//
//// ������� ��� ���������� �������� ��������������� ���������
//template <typename T>
//auto solveExpression(const T* arithmeticExpression) -> double
//{
//    int* operandArray;
//    elementType* operatorArray, *tmpArrayNum;
//    try
//    {
//        operandArray = new int[BUFFER_SIZE + 1];
//        operatorArray = new elementType[BUFFER_SIZE + 1];
//        tmpArrayNum = new elementType[BUFFER_SIZE + 1];
//
//    }
//    catch (const std::bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        exit(1);
//    }
//
//    int operand = -1;// � ���������� ����������� 
//    // ����� � ������� ����� Operator ������ ��� ��� �������� ����� � ��������� �����
//    int Operator = -1;// ������ ������������� ����� �������� ����� ��� �����
//    // � ����� ��� �������� ����� ����
//
//
//    for (; *arithmeticExpression != '\0'; arithmeticExpression++)
//    {
//        char symbol = *arithmeticExpression;// ������ ��� ������� ����� ��������
//
//        if (symbol == ' ')// ���� � ��������� ���� ������ �� ����������
//            continue;
//
//        if (isDigit(symbol) == true)// �������� �����
//        {
//            int num = 0;
//            int ff = 0;
//            while (isDigit(symbol) == true)
//            {
//                tmpArrayNum[ff++] = symbol;
//                arithmeticExpression++;
//                symbol = *arithmeticExpression;
//            }
//            tmpArrayNum[ff] = '\0';
//            num = StringToNumber(tmpArrayNum);
//            arithmeticExpression--;
//            symbol = *arithmeticExpression;// ��� ��� ����� ����� �� ��������� �������, 
//            // ������� ������������ �������
//            operandArray[++operand] = num;
//        }
//        else if (isOperator(symbol) == true)// �������� ����� ��������
//        {
//            while (Operator >= 0 &&// ������� ����������� ��� ��������� ������� �����
//                getOperatorPriority(operatorArray[Operator]) >=
//                getOperatorPriority(symbol))
//            {
//                double operand2 = operandArray[operand--];
//                double operand1 = operandArray[operand--];
//                char op = operatorArray[Operator--];
//
//                double result = performOperation(operand1, operand2, op);
//                operandArray[++operand] = result;
//            }
//
//            operatorArray[++Operator] = symbol;// ������ ��� ���������� � ���������� ����
//        }
//        else if (isOpeningBracket(symbol) == true)// �������� �� ����������� ������
//        {
//            operatorArray[++Operator] = symbol;
//        }
//        else if (isClosingBracket(symbol) == true)// �������� �� ����������� ������
//        {
//            while (Operator >= 0 && isOpeningBracket(operatorArray[Operator]) == false)
//            {
//                double operand2 = operandArray[operand--];
//                double operand1 = operandArray[operand--];
//                char op = operatorArray[Operator--];
//
//                double result = performOperation(operand1, operand2, op);
//                operandArray[++operand] = result;
//            }
//
//            Operator--; // ������� ����������� ������
//        }
//    }
//
//    double result = 0;
//    while (Operator >= 0)
//    {
//        double operand2 = operandArray[operand--];
//        double operand1 = operandArray[operand--];
//        char op = operatorArray[Operator--];
//
//        result = performOperation(operand1, operand2, op);
//    }
//
//    delete[] operatorArray, operandArray, tmpArrayNum;
//
//
//    return result;
//}