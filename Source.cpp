/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	float a, b = 1024, c, d;
	int e, g, h;
	e = 0;
	g = 0;
	printf("���� 1\n��������� ������� ���������� ��������, ��������� ��� �������� ������ ���������� ����\n");
	printf("������� ���������� ����: ");
	scanf_s("%f", &a);
	c = a / b;
	if ((int) a % (int)b != 0)
		e= (int)c+1;
	g = (int)c;
	if (e == g)
		printf("���������� %d ��", g);
	if (e > g)
		printf("���������� %d ��", e);
	else
		printf("���������� %d ��", g);
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	int c;
	float a, b, d;
	printf("���� 2\n��� ��������� ������� ���������� ��������\n������� ����� ������� �: ");
	scanf_s("%f", &a);
	printf("������� ����� �: ");
	scanf_s("%f", &b);
	d = a / b;
	c = (int)d;
	printf("��� �������: %d", c);
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	float a, b, c;
	printf("���� 3\n��� ��������� ������� ������� �� ��������� ���� ����� �� �����...\n������� ����� �: ");
	scanf_s("%f", &a);
	printf("������� ����� �: ");
	scanf_s("%f", &b);
	while (a > b)
		a -= b;
	printf("%f - ��� ������� ���������", a);
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	int d, e, a;
	printf("���� 4\n��� ��������� ������ ������� ����� ����������� �����\n������� �����: ");
	scanf_s("%d", &a);
	d = a % 10;
	e = a / 10;
	printf("%d%d - ��� ����� ���������� �����, �������?", d, e);
	return 0;
}*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	int a, b, c, d, e;
	printf("f\nf\nf: ");
	scanf_s("%d", &a);
	e = a / 100;
	c = a % 100;
	b = c / 10;
	d = c % 10;
	printf("%d%d%d", b, d, e);
	return 0;
}