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
	printf("Блок 1\nПрограмма считает количество килобайт, требуемое для хранения энного количества байт\n");
	printf("Введите количество байт: ");
	scanf_s("%f", &a);
	c = a / b;
	if ((int) a % (int)b != 0)
		e= (int)c+1;
	g = (int)c;
	if (e == g)
		printf("Необходимо %d кб", g);
	if (e > g)
		printf("Необходимо %d кб", e);
	else
		printf("Необходимо %d кб", g);
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
	printf("Блок 2\nЭта программа считает количество отрезков\nВведите длину отрезка А: ");
	scanf_s("%f", &a);
	printf("Введите длину В: ");
	scanf_s("%f", &b);
	d = a / b;
	c = (int)d;
	printf("Вот столько: %d", c);
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
	printf("Блок 3\nЭта программа считает остаток от вычитания всех чисел из числа...\nВведите число А: ");
	scanf_s("%f", &a);
	printf("Введите число В: ");
	scanf_s("%f", &b);
	while (a > b)
		a -= b;
	printf("%f - вот столько останется", a);
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
	printf("Блок 4\nЭта программа меняет местами цифры двузначного числа\nВведите число: ");
	scanf_s("%d", &a);
	d = a % 10;
	e = a / 10;
	printf("%d%d - вот такое получилось число, красиво?", d, e);
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