#include <stdio.h> // ���� � �����
#include <stdlib.h> // ��� ��������
#include <math.h> // ����������

/*int main()
{
	float a, b, S, P;
	system("chcp 1251"); //������ ����� ��������� ������� ����
	system("cls"); // ������� �������
	printf("������� ������� a: "); // ������� ������
	scanf_s("%f", &a); // ��������� ��������� ������
	printf("������� ������� b: ");
	scanf_s("%f", &b);
	S = a * b;
	P = 2 * (a + b);
	printf("������� = %f\n", S);
	printf("�������� = %f\n", P);
	return 0; // �� ���� ������� ����� �� ���������
}*/

/*int main()
{
	float pi, d, L;
	pi = 3.14;
	system("chcp 1251");
	system("cls");
	printf("������� �������: ");
	scanf_s("%f", &d);
	L = pi * d;
	printf("����� ���������� L = %f", L);
	return 0;
}*/

/*int main()
{
	float a, b, sr;
	system("chcp 1251");
	system("cls");
	printf("������� ����� a = ");
	scanf_s("%f", &a);
	printf("������� ����� b = ");
	scanf_s("%f", &b);
	sr = (a + b) / 2;
	printf("������� �������������� = %f", sr);
	return 0;

}*/

/*int main()
{
	float a, b, c, d, sum, raz, pr, chas;
	system("chcp 1251");
	system("cls");
	printf("����� �� ������ ���� ������ ����!\n");
	printf("������� ����� a = ");
	scanf_s("%f", &a);
	printf("����� �� ������ ���� ������ ����!\n");
	printf("������� ����� b = ");
	scanf_s("%f", &b);
	c = a * a;
	d = b * b;
	sum = c + d;
	raz = c - d;
	pr = c * d;
	chas = c / d;
	printf("����� = %f\n", sum);
	printf("�������� = %f\n", raz);
	printf("������������ = %f\n", pr);
	printf("������� = %f\n", chas);
	return 0;
}*/

int main()
{
	float a, b, c, d, sum, raz, pr, chas;
	system("chcp 1251");
	system("cls");
	printf("����� �� ������ ���� ������ ����!\n");
	printf("������� ����� a = ");
	scanf_s("%f", &a);
	printf("����� �� ������ ���� ������ ����!\n");
	printf("������� ����� b = ");
	scanf_s("%f", &b);
	c = fabs(a); //������ ������������� �����
	d = fabs(b);
	sum = c + d;
	raz = c - d;
	pr = c * d;
	chas = c / d;
	printf("����� = %f\n", sum);
	printf("�������� = %f\n", raz);
	printf("������������ = %f\n", pr);
	printf("������� = %f\n", chas);
	return 0;
}

