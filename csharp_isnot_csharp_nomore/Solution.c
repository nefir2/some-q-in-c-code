#include <stdio.h>

#include "Solution.h"

#pragma region first q
const double y = 2.16;
double avg(double a, double b) {
	return (a + b) / 2;
}
double sum(double a, double b, double c) {
	return a + b + c;
}
double prod(double a, double b, double c) {
	return a * b * c;
}
double cnvrt(double rouble) {
	return rouble * y;
}

void qOne() {
	double a, b, c;
	printf("������� ������ �����: ");
	scanf_s("%lf", &a);
	printf("������� ������ �����: ");
	scanf_s("%lf", &b);
	printf("������� ������ �����: ");
	scanf_s("%lf", &c);
	printf("avg(%.2f, %.2f) = %.2f\n", a, b, avg(a, b));
	printf("sum(%.2f, %.2f, %.2f) = %.2f\n", a, b, c, sum(a, b, c));
	printf("prod(%.2f, %.2f, %.2f) = %.2f\n", a, b, c, prod(a, b, c));
	printf("cnvrt(%.2f) = %.2f\ncnvrt(%.2f) = %.2f\ncnvrt(%.2f) = %.2f\n", a, cnvrt(a), b, cnvrt(b), c, cnvrt(c));
}
#pragma endregion
#pragma region second q
int isEven(int number) {
	return number % 2 == 0;
}
char getSign() {
	while (1) {
		printf("1. �������� ��������\n");
		printf("2. �������� ���������\n");
		printf("3. �������� ���������\n");
		printf("4. �������� �������\n");
		printf("5. �������� ���������� ������� �� �������\n\n");
		int choice;
		printf("�������� ��������: ");
		scanf_s("%i", &choice);
		switch (choice)
		{
		case 1: return '+';
		case 2: return '-';
		case 3: return '*';
		case 4: return '/';
		case 5: return '%';
		default: 
			printf("������������ �� �������.\n\n");
			break;
		}
	}
}
double calc(double left, char sign, double right) {
	switch (sign)
	{
	case '+': return left + right;
	case '-': return left - right;
	case '*': return left * right;
	case '/': return left / right;
	case '%': return (int)left % (int)right;
	default: return 0.0;
	}
}
int getSingleDouble(char* message) {
	double ans;
	do { printf(message); scanf_s("%lf", &ans); } while (ans > 9 || ans < 1);
	return ans;
}

void qTwo() {
	double a, b, mbans;
	int c, d;
	char s;
	printf("������� ������ �����: ");
	scanf_s("%lf", &a);
	printf("������� ������ �����: ");
	scanf_s("%lf", &b); //� �����, � ��� ������ ������ "*b"?
	c = getSingleDouble("--- ������� ������ ����� (�� 1 �� 9): ");
	d = getSingleDouble("- ������� ������ ����� (�� 1 �� 9): ");
	s = getSign();
	printf("isEven(%d) = %s\nisEven(%d) = %s", (int)a, isEven((int)a) ? "true" : "false", (int)b, isEven((int)b) ? "true" : "false");
	printf("\n\ncalc(%.2f, %c, %.2f) = %.2f\n", a, s, b, calc(a, s, b));

	printf("\n������� ����������������� ����� (%d * %d): ", c, d);
	scanf_s("%lf", &mbans);
	if (mbans == c * d) printf("�� �������� �����.");
	else printf("�� �������� �������. ������ �����: %d", c * d);
}
#pragma endregion