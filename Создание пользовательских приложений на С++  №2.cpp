//#include <iostream>
//#include <cstring>
//
//using namespace std;
//using elementType = char;
//const int BUFFER_SIZE = 1024;
//
//// Функция для проверки, является ли символ цифрой
//auto isDigit(char symbol) -> bool;
//
////Функция для проверки, является ли цифра частью числа
//auto StringToNumber(char* str) -> int;
//
//// Функция для проверки, является ли символ оператором
//auto isOperator(char symbol) -> bool;
//
//// Функция для проверки, является ли символ открывающей скобкой
//auto isOpeningBracket(char symbol) -> bool;
//
//// Функция для проверки, является ли символ закрывающей скобкой
//auto isClosingBracket(char symbol) -> bool;
//
//// Функция для определения приоритета оператора
//auto getOperatorPriority(char operation) -> int;
//
//
//// Функция для выполнения арифметической операции над двумя операндами
//auto performOperation(double operand1, double operand2, char operation) -> double;
//
//
//// Функция для вычисления значения арифметического выражения
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
//    cout << "Введите арифметическое выражение(используя знаки: (, ), +, -, *, /, ): ";
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
//    cout << "Результат: " << result << endl;
//
//    delete[] arithmeticExpression, resultExpression;
//
//    return 0;
//}
//
//
//// Функция для проверки, является ли символ цифрой
//auto isDigit(char symbol) -> bool
//{
//    int numbers = static_cast<int>(symbol - '0');
//    if (numbers >= 0)// если меньше нуля значит это не цифра а знак какой то
//        return true;
//    return false;
//}
//
//
//auto StringToNumber(char* str) -> int
//{
//	int number = 0;
//	int LENGTH = strlen(str);// длинна строки
//	int count = 1;
//
//
//	while (--LENGTH > 0)
//		count *= 10;// умножаем на 10 потому что в цикле пойдем с начала строки
//	// а в начале строки идут сначала сотни затем десятки и потом единицы
//
//	for (; *str != '\0'; str++, count = count / 10)
//		number += static_cast<int>(*str - '0') * count;// складываем значения
//
//	return number;
//}
//
//// Функция для проверки, является ли символ оператором
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
//// Функция для проверки, является ли символ открывающей скобкой
//auto isOpeningBracket(char symbol) -> bool
//{
//    if (symbol == '(')
//        return true;
//    return false;
//}
//
//
//// Функция для проверки, является ли символ закрывающей скобкой
//auto isClosingBracket(char symbol) -> bool
//{
//    if (symbol == ')');
//        return true;
//    return false;
//}
//
//
//// Функция для определения приоритета оператора
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
//// Функция для выполнения арифметической операции над двумя операндами
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
//// Функция для вычисления значения арифметического выражения
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
//    int operand = -1;// в дальнейшем увеличиваем 
//    // пишем с большой буквы Operator потому что это ключевое слово с маленькой буквы
//    int Operator = -1;// делаем отрицательным чтобы получить сразу два числа
//    // а потом уже оператор между ними
//
//
//    for (; *arithmeticExpression != '\0'; arithmeticExpression++)
//    {
//        char symbol = *arithmeticExpression;// символ над которым будем работать
//
//        if (symbol == ' ')// если в выражении есть пробел то пропускаем
//            continue;
//
//        if (isDigit(symbol) == true)// получаем число
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
//            symbol = *arithmeticExpression;// так как будет выход на следующий элемент, 
//            // поэтому возвращаемся обратно
//            operandArray[++operand] = num;
//        }
//        else if (isOperator(symbol) == true)// получаем какой оператор
//        {
//            while (Operator >= 0 &&// сначала увеличиваем для получения второго числа
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
//            operatorArray[++Operator] = symbol;// первый раз пропускаем и записываем знак
//        }
//        else if (isOpeningBracket(symbol) == true)// проверка на открывающую скобку
//        {
//            operatorArray[++Operator] = symbol;
//        }
//        else if (isClosingBracket(symbol) == true)// проверка на закрывающую скобку
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
//            Operator--; // Удалить открывающую скобку
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