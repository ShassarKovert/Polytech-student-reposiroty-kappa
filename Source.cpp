#include <stdio.h>
#include <stdlib.h> // äëÿ ðóññêîãî
#include <math.h> // ìàòåìàòèêà

/*int main()
{
	float a, b, S, P;
	system("chcp 1251"); //òåïåðü áóäåò ðàáîëòàòü ðóññêèé ÿçûê
	system("cls"); // î÷èùàåò êîíñîëü
	printf("Ââåäèòå ñòîðîíó a: "); // âûâîäèò òåòêñò
	scanf_s("%f", &a); // ñ÷èòûâàåò ââåäåííûå äàííûå
	printf("Ââåäèòå ñòîðîíó b: ");
	scanf_s("%f", &b);
	S = a * b;
	P = 2 * (a + b);
	printf("ïëîùàäü = %f\n", S);
	printf("ïåðèìåòð = %f\n", P);
	return 0; // íå äàåò êîíñîëè ñðàçó æå çàêðûòüñÿ
}*/

/*int main()
{
	float pi, d, L;
	pi = 3.14;
	system("chcp 1251");
	system("cls");
	printf("Ââåäèòå äèàìåòð: ");
	scanf_s("%f", &d);
	L = pi * d;
	printf("Äëèíà îêðóæíîñòè L = %f", L);
	return 0;
}*/

/*int main()
{
	float a, b, sr;
	system("chcp 1251");
	system("cls");
	printf("Ââåäèòå ÷èñëî a = ");
	scanf_s("%f", &a);
	printf("Ââåäèòå ÷èñëî b = ");
	scanf_s("%f", &b);
	sr = (a + b) / 2;
	printf("Ñðåäíåå àðèôìåòè÷åñêîå = %f", sr);
	return 0;

}*/

/*int main()
{
	float a, b, c, d, sum, raz, pr, chas;
	system("chcp 1251");
	system("cls");
	printf("×èñëî íå äîëæíî áûòü ðàâíûì íóëþ!\n");
	printf("Ââåäèòå ÷èñëî a = ");
	scanf_s("%f", &a);
	printf("×èñëî íå äîëæíî áûòü ðàâíûì íóëþ!\n");
	printf("Ââåäèòå ÷èñëî b = ");
	scanf_s("%f", &b);
	c = a * a;
	d = b * b;
	sum = c + d;
	raz = c - d;
	pr = c * d;
	chas = c / d;
	printf("Ñóììà = %f\n", sum);
	printf("Ðàçíîñòü = %f\n", raz);
	printf("Ïðîèçâåäåíèå = %f\n", pr);
	printf("×àñòíîå = %f\n", chas);
	return 0;
}*/

int main()
{
	float a, b, c, d, sum, raz, pr, chas;
	system("chcp 1251");
	system("cls");
	printf("×èñëî íå äîëæíî áûòü ðàâíûì íóëþ!\n");
	printf("Ââåäèòå ÷èñëî a = ");
	scanf_s("%f", &a);
	printf("×èñëî íå äîëæíî áûòü ðàâíûì íóëþ!\n");
	printf("Ââåäèòå ÷èñëî b = ");
	scanf_s("%f", &b);
	c = fabs(a); //ìîäóëü âåùåñòâåííîãî ÷èñëà
	d = fabs(b);
	sum = c + d;
	raz = c - d;
	pr = c * d;
	chas = c / d;
	printf("Ñóììà = %f\n", sum);
	printf("Ðàçíîñòü = %f\n", raz);
	printf("Ïðîèçâåäåíèå = %f\n", pr);
	printf("×àñòíîå = %f\n", chas);
	return 0;
}

