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