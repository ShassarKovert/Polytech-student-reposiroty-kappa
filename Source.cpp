//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main()
//{
//	system("chcp 1251");
//	system("cls");
//	int a, b, vsp, c;
//	printf("���� 1\n��� ��������� ����������� ���������� ������� �������, ���� ��� �� �����, ��� ������ �� ������\n������� �������� ������ ����������: ");
//	scanf_s("%d", &a);
//	printf("������� �������� ������ ����������: ");
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
//	printf("����� �������� ����������:\n� = %d\n� = %d", a, b);
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
//	printf("���� 2\n��� ��������� ������� ����� ���� ���������� ����������\n������� �������� ������ ����������: ");
//	scanf_s("%d", &a);
//	printf("������� �������� ������ ����������: ");
//	scanf_s("%d", &b);
//	printf("������� �������� ������� ����������: ");
//	scanf_s("%d", &c);
//	if ((a < b) && (a < c))
//		d = b + c;
//	if ((b < a) && (b < c))
//		d = a + c;
//	if ((c < a) && (c < b))
//		d = a + b;
//	printf("%d - ����� ����������", d);
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
//	printf("���� 3\n��� ��������� ����������, ����� �� ������ ���� ����� � ������������ ����� � �������\n������� ���������� � ����� A: ");
//	scanf_s("%f", &ax);
//	printf("������� �������� � ����� A: ");
//	scanf_s("%f", &ay);
//	printf("������� �������� � ����� B: ");
//	scanf_s("%f", &bx);
//	printf("������� �������� � ����� B: ");
//	scanf_s("%f", &by);
//	printf("������� �������� � ����� C: ");
//	scanf_s("%f", &cx);
//	printf("������� �������� � ����� C: ");
//	scanf_s("%f", &cy);
//	d = sqrtf(((bx - cx) * (bx - cx)) + ((by - cy) * (by - cy)));
//	e = sqrtf(((ax - cx) * (ax - cx)) + ((ay - cy) * (ay - cy)));
//	if (d > e)
//		printf("����� � ����� � ����� �, ���������� - %f ", d);
//	if (e > d)
//		printf("����� � ����� � ����� �, ���������� - %f", e);
//	else
//		printf("����� ��������� �� ������ ���������� �� ����� �");
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
	printf("���� 4\n��� ��������� ���������� ����� ������������ ��������, � ������� ����� �����\n������� ���������� � �����: ");
	scanf_s("%f", &ax);
	printf("������� ���������� � �����: ");
	scanf_s("%f", &ay);
	if ((ax > 0) && (ay > 0))
		printf("����� ����� � 1 ��������");
	if ((ax < 0) && (ay > 0))
		printf("����� ����� �� 2 ��������");
	if ((ax < 0) && (ay < 0))
		printf("����� ����� � 3 ��������");
	if ((ax > 0) && (ay < 0))
		printf("����� ����� � 4 ��������");
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
//	printf("���� 5\n��� ��������� ������� �������� ������ ���������� ����������\n������� �������� ����������: ");
//	scanf_s("%d", &a);
//	if (a == 0)
//		printf("��� ������� �����");
//	if ((a > 0) && (a % 2 == 0))
//		printf("��� ������ ������������� �����");
//	if ((a > 0) && (a % 2 != 0))
//		printf("��� �������� ������������� �����");
//	if ((a < 0) && (a % 2 == 0))
//		printf("��� ������ ������������� �����");
//	if ((a < 0) && (a % 2 != 0))
//		printf("��� �������� ������������� �����");
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
//	printf("���� 6\n��� ��������� ������� �������� ����� � ��������� �� 1 �� 999\n������� �������� ����������: ");
//	scanf_s("%d", &a);
//	if (a == 0)
//		printf("��� ������� �����");
//	if ((a % 2 == 0) && (a < 10)&&(a!=0))
//		printf("��� ������ ����������� �����");
//	if ((a % 2 == 0) && (a > 9) && (a < 100))
//		printf("��� ������ ���������� �����");
//	if ((a % 2 == 0) && (a > 99) && (a < 1000))
//		printf("��� ������ ����������� �����");
//	if ((a % 2 != 0) && (a < 10))
//		printf("��� �������� ����������� �����");
//	if ((a % 2 != 0) && (a > 9) && (a < 100))
//		printf("��� �������� ���������� �����");
//	if ((a % 2 != 0) && (a > 99) && (a < 1000))
//		printf("��� �������� ����������� �����");
//	if (a > 999)
//		printf("������� ������� �����");
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