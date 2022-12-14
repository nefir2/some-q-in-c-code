#pragma once

#pragma region first q
/// <summary>
/// количество й в одном рубле.
/// </summary>
const double y;

/// <summary>
/// средне-арифметическое значение двух указанных чисел.
/// </summary>
/// <param name="a">первое число.</param>
/// <param name="b">второе число.</param>
/// <returns>средне-арифметическое значение типа <see cref="double"/></returns>
double avg(double, double);
/// <summary>
/// сумма трёх указанных чисел.
/// </summary>
/// <param name="a">первое число.</param>
/// <param name="b">второе число.</param>
/// <param name="c">третье число.</param>
/// <returns>сумма трёх чисел типа <see cref="double"/>.</returns>
double sum(double, double, double);
/// <summary>
/// произведение трёх указанных чисел.
/// </summary>
/// <param name="a">первое число.</param>
/// <param name="b">второе число.</param>
/// <param name="c">третье число.</param>
/// <returns>произведение трёх чисел типа <see cref="double"/>.</returns>
double prod(double, double, double);
/// <summary>
/// конвертер валют (r -> y).
/// </summary>
/// <param name="rouble">количество рублей.</param>
/// <returns>количество й. равная указанному количеству рублей.</returns>
double cnvrt(double);

/// <summary>
/// функция запуска первого задания.
/// </summary>
void qOne();
#pragma endregion
#pragma region second q
/// <summary>
/// проверка чётности числа.
/// </summary>
/// <param name="number">число, которое надо проверить на чётность.</param>
/// <returns>
/// 1, если число чётное, <br/>
/// 0, если число нечётное. 
/// </returns>
int isEven(int);
/// <summary>
/// получение знака для калькулятора из консоли.
/// </summary>
/// <returns>выбранный знак, из внутреннего списка.</returns>
char getSign();
/// <summary>
/// калькулятор двух чисел (всего 5 знаков).
/// </summary>
/// <param name="left">левое значение.</param>
/// <param name="sign">знак.</param>
/// <param name="right">правое значение.</param>
/// <returns>ответ указанного действия, между указанными числами.</returns>
double calc(double, char, double);
/// <summary>
/// получение цифры с консоли (1-9)
/// </summary>
/// <param name="message">сообщение о вводе.</param>
/// <returns>цифра введённая в консоли.</returns>
int getSingleDouble(char*);

/// <summary>
/// функция запуска второго задания.
/// </summary>
void qTwo();
#pragma endregion
#pragma region third q
/// <summary>
/// вывод сообщения, и ввод числа с консоли.
/// </summary>
/// <param name="message">сообщение о вводе.</param>
/// <returns>число введённое в консоли типа <see cref="int"/>.</returns>
int getInt(char*);
/// <summary>
/// создание динамического массива, и ввод его размера и элементов с консоли.
/// </summary>
/// <remarks>
/// use free() or deleteArray() !!!
/// </remarks>
/// <param name="size">возврат количества элементов в массиве, в указанную переменную.</param>
/// <returns>динамический массив типа <see cref="int*"/></returns>
int* makeArray(int*);
/// <summary>
/// функция удаления массива.
/// </summary>
/// <remarks>
/// обязательно вызывать после завершения работы с массивом.
/// </remarks>
/// <param name="array">массив, который надо удалить.</param>
void deleteArray(int*);

/// <summary>
/// функция запуска третьего задания.
/// </summary>
void qThree();
#pragma endregion
#pragma region fourth q
/// <summary>
/// множественный вывод указанной строки.
/// </summary>
/// <param name="message">строка, которую надо вывести.</param>
/// <param name="times">количество раз вывода строки.</param>
void repeater(char*, int);
/// <summary>
/// вывод сообщения, и ввод строки с консоли.
/// </summary>
/// <param name="message">сообщение о вводе.</param>
/// <param name="length">количество элементов в строке.</param>
/// <returns>строка введённая в консоли типа <see cref="char*"/>.</returns>
char* makeString(char*, int);
/// <summary>
/// нахождение индекса указанного элемента в указанном массиве. 
/// </summary>
/// <param name="array">массив, в котором нужно найти элемент.</param>
/// <param name="size">размер массива в котором ведётся поиск.</param>
/// <param name="elem">элемент, индекс которого нужно найти.</param>
/// <returns>индекс указанного элемента, или -1 если элемент не найден.</returns>
int elemFinder(int*, int, int);

/// <summary>
/// функция запуска четвёртого задания.
/// </summary>
void qFour();
#pragma endregion
#pragma region fifth q
/// <summary>
/// функция рассчёта расстояния двух точек на координатной плоскости.
/// </summary>
/// <param name="x1">позиция первой точки по X.</param>
/// <param name="y1">позиция первой точки по Y.</param>
/// <param name="x2">позиция второй точки по X.</param>
/// <param name="y2">позиция второй точки по Y.</param>
/// <returns></returns>
double distance(double, double, double, double);
/// <summary>
/// структура представляющая персонажа.
/// </summary>
typedef struct { int maxHealth; int health; int damage; int speed; } Character;
/// <summary>
/// функция-конструктор структуры <see cref="Character"/>.
/// </summary>
/// <param name="maxHealth">максимальное здоровье персонажа.</param>
/// <param name="health">текущее здоровье персонажа.</param>
/// <param name="damage">урон персонажа.</param>
/// <param name="speed">скорость персонажа.</param>
/// <returns>переменная структуры с установленными указанными значениями.</returns>
Character* ctor(int, int, int, int);
/// <summary>
/// добавление здоровья персонажа.
/// </summary>
/// <param name="ch">переменная, в которой надо изменить здоровье персонажа.</param>
/// <param name="health">значение, которое нужно добавить в здоровье персонажа.</param>
void addHealth(Character*, int);
/// <summary>
/// получение текущего урона в секунду по формуле.
/// </summary>
/// <param name="ch">переменная, у которой находятся значения для расчёта.</param>
/// <returns>значение полученное из формулы типа <see cref="int"/>.</returns>
int currentDamagePerSecond(Character*);
/// <summary>
/// получение значения двойного урона персонажа.
/// </summary>
/// <param name="ch">персонаж, которого двойной урон надо получить.</param>
/// <returns>двойной урон типа <see cref="int"/>.</returns>
int doubleDamage(Character*);
/// <summary>
/// функция вывода полей и их значений структуры <see cref="Character"/> в консоль.
/// </summary>
/// <param name="ch">переменная структуры, значения которой надо вывести.</param>
void printCharacter(Character*);

/// <summary>
/// функция получения значения с консоли типа <see cref="double"/>.
/// </summary>
/// <param name="message">сообщение перед вводом значения.</param>
/// <returns>значение полученное в консоли.</returns>
double getDouble(char* message);

/// <summary>
/// функция запуска пятого задания.
/// </summary>
void qFive();
#pragma endregion