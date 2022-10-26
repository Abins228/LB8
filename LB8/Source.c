#include <stdio.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL, "RUS");
	puts("Задание 0");
	int k;
	char c, t;
	puts("Введите количество символов и символ:");
	scanf("%d%c%c", &k, &c, &t);
	for (int i = 1; i <= (int)(k / 2); i++) printf("%c!", c);
	for (int i = 1; i <= (int)(k / 2); i++) printf("%c!", t);
	printf("+\n");
	puts("---------");
	puts("Задание 1");
	int n, m;
	int s = 0;
	puts("Введите первое число");
	scanf("%d", &n);
	puts("Введите второе число");
	scanf("%d", &m);
	for (int i = n; i < m; i++) s += i;
	printf("Сумма чисел от %d от %d = %d\n", n, m, s);
	puts("---------");
	puts("Задание 2");
	float  y;
	int shag;
	float x0 = 2;
	float x1 = 4;
	puts("Укажите шаг:");
	scanf("%d", &shag);
	for (float i = x0; i <= x1; i += shag) {
		y = pow(2, i) - 2 * pow(i, 2) - 1;
		printf("| %.1f | %.1f |\n", i, y);
	}
	//puts("---------");
	//puts("Задание 3");
	//float a, n;
	//float ot = 0;
	//puts("Введите число:");
	//scanf("%f", &a);
	//puts("Введите количество повторений:");
	//scanf("%f", &n);
	//if (a = 0) printf("Некоректное значение аргумента");
	//for (float c = n, count = 1; count < c; count++)
	//{
	//	float tempp = pow(a, (-2 * n));
	//	ot += tempp;
	//	printf("%f %f", tempp, a);
	//}
	//printf("Ответ:%f", pow(a,-1) + ot);

}