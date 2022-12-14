#pragma once

#pragma region first q
/// <summary>
/// ���������� � � ����� �����.
/// </summary>
const double y;

/// <summary>
/// ������-�������������� �������� ���� ��������� �����.
/// </summary>
/// <param name="a">������ �����.</param>
/// <param name="b">������ �����.</param>
/// <returns>������-�������������� �������� ���� <see cref="double"/></returns>
double avg(double, double);
/// <summary>
/// ����� ��� ��������� �����.
/// </summary>
/// <param name="a">������ �����.</param>
/// <param name="b">������ �����.</param>
/// <param name="c">������ �����.</param>
/// <returns>����� ��� ����� ���� <see cref="double"/>.</returns>
double sum(double, double, double);
/// <summary>
/// ������������ ��� ��������� �����.
/// </summary>
/// <param name="a">������ �����.</param>
/// <param name="b">������ �����.</param>
/// <param name="c">������ �����.</param>
/// <returns>������������ ��� ����� ���� <see cref="double"/>.</returns>
double prod(double, double, double);
/// <summary>
/// ��������� ����� (r -> y).
/// </summary>
/// <param name="rouble">���������� ������.</param>
/// <returns>���������� �. ������ ���������� ���������� ������.</returns>
double cnvrt(double);

/// <summary>
/// ������� ������� ������� �������.
/// </summary>
void qOne();
#pragma endregion
#pragma region second q
/// <summary>
/// �������� �������� �����.
/// </summary>
/// <param name="number">�����, ������� ���� ��������� �� ��������.</param>
/// <returns>
/// 1, ���� ����� ������, <br/>
/// 0, ���� ����� ��������. 
/// </returns>
int isEven(int);
/// <summary>
/// ��������� ����� ��� ������������ �� �������.
/// </summary>
/// <returns>��������� ����, �� ����������� ������.</returns>
char getSign();
/// <summary>
/// ����������� ���� ����� (����� 5 ������).
/// </summary>
/// <param name="left">����� ��������.</param>
/// <param name="sign">����.</param>
/// <param name="right">������ ��������.</param>
/// <returns>����� ���������� ��������, ����� ���������� �������.</returns>
double calc(double, char, double);
/// <summary>
/// ��������� ����� � ������� (1-9)
/// </summary>
/// <param name="message">��������� � �����.</param>
/// <returns>����� �������� � �������.</returns>
int getSingleDouble(char*);

/// <summary>
/// ������� ������� ������� �������.
/// </summary>
void qTwo();
#pragma endregion
#pragma region third q
/// <summary>
/// ����� ���������, � ���� ����� � �������.
/// </summary>
/// <param name="message">��������� � �����.</param>
/// <returns>����� �������� � ������� ���� <see cref="int"/>.</returns>
int getInt(char*);
/// <summary>
/// �������� ������������� �������, � ���� ��� ������� � ��������� � �������.
/// </summary>
/// <remarks>
/// use free() or deleteArray() !!!
/// </remarks>
/// <param name="size">������� ���������� ��������� � �������, � ��������� ����������.</param>
/// <returns>������������ ������ ���� <see cref="int*"/></returns>
int* makeArray(int*);
/// <summary>
/// ������� �������� �������.
/// </summary>
/// <remarks>
/// ����������� �������� ����� ���������� ������ � ��������.
/// </remarks>
/// <param name="array">������, ������� ���� �������.</param>
void deleteArray(int*);

/// <summary>
/// ������� ������� �������� �������.
/// </summary>
void qThree();
#pragma endregion
#pragma region fourth q
/// <summary>
/// ������������� ����� ��������� ������.
/// </summary>
/// <param name="message">������, ������� ���� �������.</param>
/// <param name="times">���������� ��� ������ ������.</param>
void repeater(char*, int);
/// <summary>
/// ����� ���������, � ���� ������ � �������.
/// </summary>
/// <param name="message">��������� � �����.</param>
/// <param name="length">���������� ��������� � ������.</param>
/// <returns>������ �������� � ������� ���� <see cref="char*"/>.</returns>
char* makeString(char*, int);
/// <summary>
/// ���������� ������� ���������� �������� � ��������� �������. 
/// </summary>
/// <param name="array">������, � ������� ����� ����� �������.</param>
/// <param name="size">������ ������� � ������� ������ �����.</param>
/// <param name="elem">�������, ������ �������� ����� �����.</param>
/// <returns>������ ���������� ��������, ��� -1 ���� ������� �� ������.</returns>
int elemFinder(int*, int, int);

/// <summary>
/// ������� ������� ��������� �������.
/// </summary>
void qFour();
#pragma endregion
#pragma region fifth q
/// <summary>
/// ������� �������� ���������� ���� ����� �� ������������ ���������.
/// </summary>
/// <param name="x1">������� ������ ����� �� X.</param>
/// <param name="y1">������� ������ ����� �� Y.</param>
/// <param name="x2">������� ������ ����� �� X.</param>
/// <param name="y2">������� ������ ����� �� Y.</param>
/// <returns></returns>
double distance(double, double, double, double);
/// <summary>
/// ��������� �������������� ���������.
/// </summary>
typedef struct { int maxHealth; int health; int damage; int speed; } Character;
/// <summary>
/// �������-����������� ��������� <see cref="Character"/>.
/// </summary>
/// <param name="maxHealth">������������ �������� ���������.</param>
/// <param name="health">������� �������� ���������.</param>
/// <param name="damage">���� ���������.</param>
/// <param name="speed">�������� ���������.</param>
/// <returns>���������� ��������� � �������������� ���������� ����������.</returns>
Character* ctor(int, int, int, int);
/// <summary>
/// ���������� �������� ���������.
/// </summary>
/// <param name="ch">����������, � ������� ���� �������� �������� ���������.</param>
/// <param name="health">��������, ������� ����� �������� � �������� ���������.</param>
void addHealth(Character*, int);
/// <summary>
/// ��������� �������� ����� � ������� �� �������.
/// </summary>
/// <param name="ch">����������, � ������� ��������� �������� ��� �������.</param>
/// <returns>�������� ���������� �� ������� ���� <see cref="int"/>.</returns>
int currentDamagePerSecond(Character*);
/// <summary>
/// ��������� �������� �������� ����� ���������.
/// </summary>
/// <param name="ch">��������, �������� ������� ���� ���� ��������.</param>
/// <returns>������� ���� ���� <see cref="int"/>.</returns>
int doubleDamage(Character*);
/// <summary>
/// ������� ������ ����� � �� �������� ��������� <see cref="Character"/> � �������.
/// </summary>
/// <param name="ch">���������� ���������, �������� ������� ���� �������.</param>
void printCharacter(Character*);

/// <summary>
/// ������� ��������� �������� � ������� ���� <see cref="double"/>.
/// </summary>
/// <param name="message">��������� ����� ������ ��������.</param>
/// <returns>�������� ���������� � �������.</returns>
double getDouble(char* message);

/// <summary>
/// ������� ������� ������ �������.
/// </summary>
void qFive();
#pragma endregion