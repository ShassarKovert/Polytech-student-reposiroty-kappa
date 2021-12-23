//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	system("chcp 1251");
//	system("cls");
//	int a, b, vsp, c;
//	printf("Блок 1\nЭта программа присваивает переменным большее значние, если они не равны, или делает их нулями\nВведите значение первой переменной: ");
//	scanf_s("%d", &a);
//	printf("Введите значение второй переменной: ");
//	scanf_s("%d", &b);
//	if (a != b)
//	{
//		if (a > b)
//			b = a;
//		else
//			a = b;
//	}
//	else
//	{
//		a = 0;
//		b = 0;
//	}
//	printf("Новые значения переменных:\nА = %d\nВ = %d", a, b);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	system("chcp 1251");
//	system("cls");
//	int a, b, d, c;
//	printf("Блок 2\nЭта программа находит сумму двух наибольших переменных\nВведите значение первой переменной: ");
//	scanf_s("%d", &a);
//	printf("Введите значение второй переменной: ");
//	scanf_s("%d", &b);
//	printf("Введите значение третьей переменной: ");
//	scanf_s("%d", &c);
//	if ((a < b) && (a < c))
//		d = b + c;
//	if ((b < a) && (b < c))
//		d = a + c;
//	if ((c < a) && (c < b))
//		d = a + b;
//	printf("%d - сумма переменных", d);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	system("chcp 1251");
//	system("cls");
//	float ax, ay, bx, by, cx, cy, d, e;
//	printf("Блок 3\nЭта программа определяет, какая из первых двух точек в пространстве ближе к третьей\nВведите координату х точки A: ");
//	scanf_s("%f", &ax);
//	printf("Введите значение у точки A: ");
//	scanf_s("%f", &ay);
//	printf("Введите значение х точки B: ");
//	scanf_s("%f", &bx);
//	printf("Введите значение у точки B: ");
//	scanf_s("%f", &by);
//	printf("Введите значение х точки C: ");
//	scanf_s("%f", &cx);
//	printf("Введите значение у точки C: ");
//	scanf_s("%f", &cy);
//	d = sqrtf(((bx - cx) * (bx - cx)) + ((by - cy) * (by - cy)));
//	e = sqrtf(((ax - cx) * (ax - cx)) + ((ay - cy) * (ay - cy)));
//	if (d > e)
//		printf("Точка В ближе к точке С, расстояние - %f ", d);
//	if (e > d)
//		printf("Точка А ближе к точке С, расстояние - %f", e);
//	else
//		printf("Точки находятся на равном расстоянии от точки С");
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	system("cls");
	float ax, ay;
	printf("Блок 4\nЭта программа определяет номер координатной четверти, в которой лежит точка\nВведите координату х точки: ");
	scanf_s("%f", &ax);
	printf("Введите координату у точки: ");
	scanf_s("%f", &ay);
	if ((ax > 0) && (ay > 0))
		printf("Точка лежит в 1 четверти");
	if ((ax < 0) && (ay > 0))
		printf("Точка лежит во 2 четверти");
	if ((ax < 0) && (ay < 0))
		printf("Точка лежит в 3 четверти");
	if ((ax > 0) && (ay < 0))
		printf("Точка лежит в 4 четверти");
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	system("chcp 1251");
//	system("cls");
//	int a;
//	printf("Блок 5\nЭта программа выводит описание данной двузначной переменной\nВведите значение переменной: ");
//	scanf_s("%d", &a);
//	if (a == 0)
//		printf("Это нулевое число");
//	if ((a > 0) && (a % 2 == 0))
//		printf("Это четное положительное число");
//	if ((a > 0) && (a % 2 != 0))
//		printf("Это нечетное положительное число");
//	if ((a < 0) && (a % 2 == 0))
//		printf("Это четное отрицательное число");
//	if ((a < 0) && (a % 2 != 0))
//		printf("Это нечетное отрицательное число");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	system("chcp 1251");
//	system("cls");
//	int a;
//	printf("Блок 6\nЭта программа выводит описание числа в диапазоне от 1 до 999\nВведите значение переменной: ");
//	scanf_s("%d", &a);
//	if (a == 0)
//		printf("Это нулевое число");
//	if ((a % 2 == 0) && (a < 10)&&(a!=0))
//		printf("Это четное однозначное число");
//	if ((a % 2 == 0) && (a > 9) && (a < 100))
//		printf("Это четное двузначное число");
//	if ((a % 2 == 0) && (a > 99) && (a < 1000))
//		printf("Это четное трехзначное число");
//	if ((a % 2 != 0) && (a < 10))
//		printf("Это нечетное однозначное число");
//	if ((a % 2 != 0) && (a > 9) && (a < 100))
//		printf("Это нечетное двузначное число");
//	if ((a % 2 != 0) && (a > 99) && (a < 1000))
//		printf("Это нечетное трехзначное число");
//	if (a > 999)
//		printf("Слишком большое число");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	int z = 0;
//	for(int i=1;i<=3;i++)
//	{
//		z = z + 2 * i;
//	}
//	printf("%d", z);
//	return 0;
//}