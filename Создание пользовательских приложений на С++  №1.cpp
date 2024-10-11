//#include <iostream>
//#include <iomanip>
//#include <conio.h>
//#include <ctime>
//#include <thread>
//#include <thread>
//
//
///*
//Второе задание
//Создайте игру «Пятнашки».
//Правила игры на английском языке можно прочесть по этой ссылке.
//Главные особенности реализации игры:
//1) Выбор режима игры:
//• 8 (3×3);
//• 15 (4×4).
//2) Режимы игры:
//• Человек собирает;
//• Компьютер собирает.
//3) Начальное размешивание пятнашек:
//• Ручное размешивание;
//• Компьютерное размешивание.
//4) Статистика:
//• Количество времени, потраченное на сбор пятнашек;
//• Количество перестановок пятнашек для сбора.
//*/
//
//using namespace std;
//using elementType = int;
//
//struct coordinate // хранилище координат нулевого элемента вертикально и горизонтально
//{
//    int x;
//    int y;
//};
//coordinate zeroIndex; // создание объекта
//
//
//template <typename T> // создаем карту заполенную по порядку числами
//auto createCompletedInOrderMap(T** CompletedInOrderMap, int length) -> void;
//template <typename T> 
//auto createGameMap(T** GameMap, int length) -> void; // вручную заполняем игровую карту
//template <typename T> 
//auto autoCreateGameMap(T** GameMap, int length) -> void; // случайно заполняем игровую карту
//template <typename T>// сравнение игровой и правильной карты для определения конца игры
//auto checkMap(T** CompletedInOrderMap, T** GameMap, int length) -> bool;
//
//
//template <typename T>
//auto upMove(T** GameMap, int length) -> void; // ход вверх (нулевой элемент вверх)
//template <typename T>
//auto downMove(T** GameMap, int length) -> void; // ход вниз (нулевой элемент вниз)
//template <typename T>
//auto rightMove(T** GameMap, int length) -> void; // ход вправо (нулевой элемент вправо)
//template <typename T>
//auto leftMove(T** GameMap, int length) -> void; // ход влево (нулевой элемент вниз)
//
//
//template <typename T>
//auto getDirection(T** GameMap, int length, int& countMove) -> void; // определяем нажатую игроком стрелку
//template <typename T>
//auto autoGetDirection(T** GameMap, int length, int& countMove, int& move, int& lastMove) -> void;
//template <typename T>
//auto screen(T** GameMap, int length) -> void; // выводим массив на экран
//
//template <typename T>
//auto coprArray(T *array1, T* array2, int whichElement, int lenght) -> void;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    srand(static_cast<unsigned int>(time(nullptr)));
//    
//    int choiceOfMapLength, collectionOfTags, initialLocation;
//
//    cout << "Выберете режим игры:\n(размер карты):\n1) - 8 (3*3)\n2) - 15 (4*4)\n";
//    cin >> choiceOfMapLength;
//
//    int length; // размер игрового поля
//    if (choiceOfMapLength < 1 || choiceOfMapLength > 2)
//    {
//        cerr << "Ошибка! Выбран не существующий режим игры! Попробуйте снова!";
//        return 1;
//    }
//    else if (choiceOfMapLength == 1)
//        length = 3;
//    else
//        length = 4;
//
//
//    cout << "Выберете кто собирает пятнашки:\n1) - Человек собирает\n2) - Компьютер собирает\n";
//    cin >> collectionOfTags;
//    if (collectionOfTags < 1 || collectionOfTags > 2)
//    {
//        cerr << "Ошибка! Выбран не существующий режим игры! Попробуйте снова!";
//        return 1;
//    }
//
//    cout << "Выберете как будут заполняться пятнашки:\n1) - Ручное размешивание\n"
//        << "2) - Компьютерное размешивание\n";
//    cin >> initialLocation;
//    if (initialLocation < 1 || initialLocation > 2)
//    {
//        cerr << "Ошибка! Выбран не существующий режим игры! Попробуйте снова!";
//        return 1;
//    }
//
//    elementType** CompletedInOrderMap, ** GameMap;
//    try
//    {
//        CompletedInOrderMap = new elementType * [length];
// 
//        for (int ii = 0; ii < length; ii++)
//             CompletedInOrderMap[ii] = new elementType[length];
// 
// 
//        GameMap = new elementType * [length];
// 
//        for (int ii = 0; ii < length; ii++)
//             GameMap[ii] = new elementType[length];
//    }
//    catch (const std::bad_alloc&exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        return 1;
//    }
//    
//    time_t start, end;// перменные для подсчета веремени
//    
//    
//    // создание игровых карт:
//    createCompletedInOrderMap(CompletedInOrderMap, length);
//    do
//    {
//        if (initialLocation == 1)
//            createGameMap(GameMap, length);
//        else
//            autoCreateGameMap(GameMap, length);
//
//    } while (checkMap(CompletedInOrderMap, GameMap, length) == true);
//    // делаем цикл чтобы создалась карта не равная начальной карте
//
//    int countMove = 0;// счетчик перстановок пятнашек во время игры
//    if (collectionOfTags == 1)
//    {
//        time(&start);
//        // цикл игры:
//        do
//        {
//            screen(GameMap, length);
//            getDirection(GameMap, length, countMove);
//        } while (checkMap(CompletedInOrderMap, GameMap, length) == false);
//
//        // в случае выигрыша еще раз выводи уже конечную матрицу пятнашек
//        system("cls");
//        cout << "Игра пятнашки: " << endl;
//        for (int ii = 0; ii < length; ii++)
//        {
//            for (int jj = 0; jj < length; jj++)
//            {
//                if (GameMap[ii][jj] != 0)
//                    cout << std::setw(3) << std::setfill('0') << GameMap[ii][jj] << ' ';
//                else
//                    cout << "+-+ "; // нулевой элемент
//            }
//
//            cout << endl;
//        }
//        time(&end);
//        cout << "\nВы выиграли!\nИгра оконченна!" << endl;
//        cout << "Общее число перестановок: " << countMove << endl;
//        cout << "Для прохождения игры вам понадобилось: " << difftime(end, start) << " - секунд" << endl;
//    }
//    else
//    {
//        int lastMove = 0;
//        int move = 0;
//        time(&start);
//        // цикл игры:
//        do
//        {
//            screen(GameMap, length);
//            autoGetDirection(GameMap, length, countMove, move,lastMove);
//        } while (checkMap(CompletedInOrderMap, GameMap, length) == false);
//
//        // в случае выигрыша еще раз выводи уже конечную матрицу пятнашек
//        system("cls");
//        cout << "Игра пятнашки: " << endl;
//        for (int ii = 0; ii < length; ii++)
//        {
//            for (int jj = 0; jj < length; jj++)
//            {
//                if (GameMap[ii][jj] != 0)
//                    cout << std::setw(3) << std::setfill('0') << GameMap[ii][jj] << ' ';
//                else
//                    cout << "+-+ ";
//            }
//
//            cout << endl;
//        }
//        time(&end);
//        cout << "\nКомпьютер выиграли!\nИгра оконченна!" << endl;
//        cout << "Общее число перестановок: " << countMove << endl;
//        cout << "Для прохождения игры компьютеру понадобилось: " << difftime(end, start)
//            << " - секунд" << endl;
//    }
//
//    for (int ii = 0; ii < length; ii++)
//        delete[] CompletedInOrderMap[ii];
//
//    for (int ii = 0; ii < length; ii++)
//        delete[] GameMap[ii] ;
//
//    delete[] CompletedInOrderMap;
//    delete[] GameMap;
//    return 0;
//}
//
//
//template <typename T>// создаем карту заполенную по порядку числами
//auto createCompletedInOrderMap(T** CompletedInOrderMap, int length) -> void
//{
//    int rightVal = 1;
//    for (int ii = 0; ii < length; ii++)
//    {
//        for (int jj = 0; jj < length; jj++)
//            CompletedInOrderMap[ii][jj] = rightVal++;
//    }
//    CompletedInOrderMap[length - 1][length - 1] = 0; // нулевой элемент в нижний правый угол
//}
//
//template <typename T>
//auto createGameMap(T** GameMap, int length) -> void // вручную заполняем игровую карту
//{
//    int SIZEARRAY = length * length;
//
//    elementType* withoutRepetition, * tmp;
//    try
//    {
//        tmp = new elementType[SIZEARRAY];
//        withoutRepetition = new elementType[SIZEARRAY];
//    }
//    catch (const std::bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        exit(1);
//    }
//
//    for (int ii = 0; ii < SIZEARRAY; ii++)
//        tmp[ii] = ii;// заполняем динамичесский массив чисами подряд
//
//    int counter = 0, countii = 0, countjj = 0;
//    int manualLocation;
//
//    for (int ii = 0; ii < length; ii++)
//    {
//        for (int jj = 0; jj < length; jj++)
//        {
//
//
//            int count = 0;
//            do
//            {
//                while (true)
//                {
//                    count = 0;
//                    cout << "Введите значения для " << countii << " - строки и "
//                        << countjj++ << " - столбца: ";
//                    cin >> manualLocation;
//                    if (manualLocation < 0 || manualLocation >(length * length - 1))
//                    {
//                        countjj -= 1;
//                        continue;
//                    }
//                    // проверка на повторения чисел и запись только разных чисел:
//                    for (int ll = 0; ll < counter; ll++)
//                        if (manualLocation == withoutRepetition[ll])
//                            count += 1;
//                    if (count == 0)
//                        break;
//                    else
//                    {
//                        countjj -= 1;
//                        continue;
//                    }
//                }
//            } while (count != 0);
//
//            if (count == 0)
//            {
//                GameMap[ii][jj] = tmp[manualLocation]; // записываем в карту 
//                // одно из значений из массива
//                withoutRepetition[counter++] = tmp[manualLocation];
//            }
//
//
//            // сохраняем координаты нулевого элемента:
//            if (tmp[manualLocation] == 0)
//            {
//                zeroIndex.x = jj;
//                zeroIndex.y = ii;
//            }
//        }
//        countii++;
//        countjj = 0;
//    }
//
//        
//
//    delete[] tmp, withoutRepetition;
//}
//
//
//template <typename T> 
//auto autoCreateGameMap(T** GameMap, int length) -> void // случайно заполняем игровую карту
//{
//    int SIZEARRAY = length * length;
//
//    elementType* withoutRepetition, * tmp;
//    try
//    {
//        tmp = new elementType[SIZEARRAY];
//        withoutRepetition = new elementType[SIZEARRAY];
//    }
//    catch (const std::bad_alloc& exception)
//    {
//        cerr << "Allocation failed: " << exception.what() << '\n';
//        exit(1);
//    }
//
//    for (int ii = 0; ii < SIZEARRAY; ii++)
//        tmp[ii] = ii;// заполняем динамичесский массив чисами подряд
//
//    int counter = 0;
//    int val;
//    for (int ii = 0; ii < length; ii++)
//    {
//        for (int jj = 0; jj < length; jj++)
//        {
//            int count = 0;
//            do
//            {
//                count = 0;
//                val = rand() % SIZEARRAY; // создаем цифры в порядке от 8 до 0
//
//                // проверка на повторения чисел и запись только разных чисел:
//                for (int ll = 0; ll < counter; ll++)
//                    if (val == withoutRepetition[ll])
//                        count += 1;
//            } while (count != 0);
//
//            if (count == 0)
//            {
//                GameMap[ii][jj] = tmp[val]; // записываем в карту 
//                // одно из значений из массива
//                withoutRepetition[counter++] = tmp[val];
//            }
//            
//
//            // сохраняем координаты нулевого элемента:
//            if (tmp[val] == 0) 
//            {
//                zeroIndex.x = jj;
//                zeroIndex.y = ii;
//            }
//        }
//    }
//    delete[] tmp, withoutRepetition;
//}
//
//template <typename T>// сравнение игровой и правильной карты для определения конца игры
//auto checkMap(T** CompletedInOrderMap, T** GameMap, int length) -> bool
//{
//    int counter = 0;
//    for (int ii = 0; ii < length; ii++)
//        for (int jj = 0; jj < length; jj++)
//            if (CompletedInOrderMap[ii][jj] != GameMap[ii][jj])
//                counter += 1;
//
//    if (counter == 0)
//        return true;
//    else
//        return false;
//}
//
//template <typename T>
//auto upMove(T** GameMap, int length) -> void // ход вверх (нулевой элемент вниз)
//{
//    if (zeroIndex.y < length - 1)
//    {
//        GameMap[zeroIndex.y][zeroIndex.x] = GameMap[zeroIndex.y + 1][zeroIndex.x];
//        zeroIndex.y++;
//        GameMap[zeroIndex.y][zeroIndex.x] = 0;
//    }
//}
//
//template <typename T>
//auto downMove(T** GameMap, int length) -> void // ход вниз (нулевой элемент вниз)
//{
//    if (zeroIndex.y > 0)
//    {
//        GameMap[zeroIndex.y][zeroIndex.x] = GameMap[zeroIndex.y - 1][zeroIndex.x];
//        zeroIndex.y--;
//        GameMap[zeroIndex.y][zeroIndex.x] = 0;
//        // мы двигаем нулеой элемент поэтому в нижний записываем значение верхнего
//        // а в то что выше записываем ноль. 
//        // Изменяя коодинаты обоих элементов
//    }
//}
//
//template <typename T>
//auto rightMove(T** GameMap, int length) -> void// ход вправо (нулевой элемент вправо)
//{
//    if (zeroIndex.x > 0)
//    {
//        GameMap[zeroIndex.y][zeroIndex.x] = GameMap[zeroIndex.y][zeroIndex.x - 1];
//        zeroIndex.x--;
//        GameMap[zeroIndex.y][zeroIndex.x] = 0;
//    }
//}
//
//template <typename T>
//auto leftMove(T** GameMap, int length) -> void// ход влево (нулевой элемент влево)
//{
//    if (zeroIndex.x < length - 1)
//    {
//        GameMap[zeroIndex.y][zeroIndex.x] = GameMap[zeroIndex.y][zeroIndex.x + 1];
//        zeroIndex.x++;
//        GameMap[zeroIndex.y][zeroIndex.x] = 0;
//    }
//}
//
//template <typename T>
//auto getDirection(T** GameMap, int length, int& countMove) -> void// определяем нажатую игроком стрелку
//{
//    int move = static_cast<int>(_getch()); // метод _getch() - 
//    // считывает нажатую кнопку с клаиватуры:
//    // вниз = 72, вверх = 80, влево = 77, вправо = 75
//    switch (move)
//    {
//        case 72:
//            {
//                countMove += 1;
//                downMove(GameMap, length);
//                break;
//            }
//        case 80:
//            {
//                countMove += 1;
//                upMove(GameMap, length);
//                break;
//            }
//        case 77:
//            {
//                countMove += 1;
//                leftMove(GameMap, length);
//                break;
//            }
//        case 75:
//            {
//                countMove += 1;
//                rightMove(GameMap, length);
//                break;
//            }
//        default:
//            {
//                getDirection(GameMap, length, countMove);
//                break;
//            }
//    }
//}
//
//template <typename T>
//auto autoGetDirection(T** GameMap, int length, int& countMove, int& move ,int& lastMove) -> void
//{
//    int tmpMove = move;
//    lastMove = move;
//    // теперь мы не считываем с коавиатуры а случайно создаем то самое пердвижение
//    // нулевого элемента причем без возможности вернуттся туда откуда 
//    // этот элемент пришел на ход назад
//    // вниз = 72 = 1, вверх = 80 = 2, влево = 77 = 3, вправо = 75 = 4
//    move = rand() % 4 + 1;
//    while((move == 1 && lastMove == 2) || (move == 2 && lastMove == 1) ||
//        (move == 3 && lastMove == 4) || (move == 4 && lastMove == 3))
//        move = rand() % 4 + 1;
//    
//    switch (move)
//    {
//        case 1:
//        {
//            if (zeroIndex.y > 0)
//            {
//                countMove += 1;
//                downMove(GameMap, length);
//            }
//            else
//            {
//                move = tmpMove;
//                autoGetDirection(GameMap, length, countMove, move, lastMove);
//            }
//            break;
//        }
//        case 2:
//        {
//            if (zeroIndex.y < length - 1)
//            {
//                countMove += 1;
//                upMove(GameMap, length);
//                break;
//            }
//            else
//            {
//                move = tmpMove;
//                autoGetDirection(GameMap, length, countMove, move, lastMove);
//            }
//            break;
//        }
//        case 3:
//        {
//            if (zeroIndex.x < length - 1)
//            {
//                countMove += 1;
//                leftMove(GameMap, length);
//            }
//            else
//            {
//                move = tmpMove;
//                autoGetDirection(GameMap, length, countMove, move, lastMove);
//            }
//            break;
//        }
//        case 4:
//        {
//            if (zeroIndex.x > 0)
//            {
//                countMove += 1;
//                rightMove(GameMap, length);
//            }
//            else
//            {
//                move = tmpMove;
//                autoGetDirection(GameMap, length, countMove, move, lastMove);
//            }
//            break;
//        }
//        default:
//        {
//            autoGetDirection(GameMap, length, countMove, move, lastMove);
//            break;
//        }
//    }
//    this_thread::sleep_for(chrono::milliseconds(5));//не используется привязка к тому
//    //на какой операционной системе написан код.
//
//}
//
//template <typename T>
//auto screen(T** GameMap, int length) -> void // выводим массив на экран
//{
//    system("cls");
//    cout << "Игра пятнашки: " << endl;
//    for (int i = 0; i < length; i++)
//    {
//        for (int j = 0; j < length; j++)
//        {
//            if (GameMap[i][j] != 0)
//                cout << std::setw(3) << std::setfill('0') << GameMap[i][j] << ' ';
//            else
//                cout << "+-+ "; // нулевой элемент
//        }
//
//        cout << endl;
//    }
//}
