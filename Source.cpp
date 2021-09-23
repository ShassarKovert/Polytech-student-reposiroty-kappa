#include <stdio.h> // ввод и вывод
#include <stdlib.h> // для русского
#include <math.h> // математика

/*int main()
{
	float a, b, S, P;
	system("chcp 1251"); //теперь будет раболтать русский язык
	system("cls"); // очищает консоль
	printf("Введите сторону a: "); // выводит теткст
	scanf_s("%f", &a); // считывает введенные данные
	printf("Введите сторону b: ");
	scanf_s("%f", &b);
	S = a * b;
	P = 2 * (a + b);
	printf("площадь = %f\n", S);
	printf("периметр = %f\n", P);
	return 0; // не дает консоли сразу же закрыться
}*/

/*int main()
{
	float pi, d, L;
	pi = 3.14;
	system("chcp 1251");
	system("cls");
	printf("Введите диаметр: ");
	scanf_s("%f", &d);
	L = pi * d;
	printf("Длина окружности L = %f", L);
	return 0;
}*/

/*int main()
{
	float a, b, sr;
	system("chcp 1251");
	system("cls");
	printf("Введите число a = ");
	scanf_s("%f", &a);
	printf("Введите число b = ");
	scanf_s("%f", &b);
	sr = (a + b) / 2;
	printf("Среднее арифметическое = %f", sr);
	return 0;

}*/

/*int main()
{
	float a, b, c, d, sum, raz, pr, chas;
	system("chcp 1251");
	system("cls");
	printf("Число не должно быть равным нулю!\n");
	printf("Введите число a = ");
	scanf_s("%f", &a);
	printf("Число не должно быть равным нулю!\n");
	printf("Введите число b = ");
	scanf_s("%f", &b);
	c = a * a;
	d = b * b;
	sum = c + d;
	raz = c - d;
	pr = c * d;
	chas = c / d;
	printf("Сумма = %f\n", sum);
	printf("Разность = %f\n", raz);
	printf("Произведение = %f\n", pr);
	printf("Частное = %f\n", chas);
	return 0;
}*/

int main()
{
	float a, b, c, d, sum, raz, pr, chas;
	system("chcp 1251");
	system("cls");
	printf("Число не должно быть равным нулю!\n");
	printf("Введите число a = ");
	scanf_s("%f", &a);
	printf("Число не должно быть равным нулю!\n");
	printf("Введите число b = ");
	scanf_s("%f", &b);
	c = fabs(a); //модуль вещественного числа
	d = fabs(b);
	sum = c + d;
	raz = c - d;
	pr = c * d;
	chas = c / d;
	printf("Сумма = %f\n", sum);
	printf("Разность = %f\n", raz);
	printf("Произведение = %f\n", pr);
	printf("Частное = %f\n", chas);
	return 0;
}

