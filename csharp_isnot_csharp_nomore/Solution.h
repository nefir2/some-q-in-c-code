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