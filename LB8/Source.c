#include <stdio.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL, "RUS");
	puts("������� 0");
	int k;
	char c, t;
	puts("������� ���������� �������� � ������:");
	scanf("%d%c%c", &k, &c, &t);
	for (int i = 1; i <= (int)(k / 2); i++) printf("%c!", c);
	for (int i = 1; i <= (int)(k / 2); i++) printf("%c!", t);
	printf("+\n");
	puts("---------");
	puts("������� 1");
	int n, m;
	int s = 0;
	puts("������� ������ �����");
	scanf("%d", &n);
	puts("������� ������ �����");
	scanf("%d", &m);
	for (int i = n; i < m; i++) s += i;
	printf("����� ����� �� %d �� %d = %d\n", n, m, s);
	puts("---------");
	puts("������� 2");
	float  y;
	int shag;
	float x0 = 2;
	float x1 = 4;
	puts("������� ���:");
	scanf("%d", &shag);
	for (float i = x0; i <= x1; i += shag) {
		y = pow(2, i) - 2 * pow(i, 2) - 1;
		printf("| %.1f | %.1f |\n", i, y);
	}
	//puts("---------");
	//puts("������� 3");
	//float a, n;
	//float ot = 0;
	//puts("������� �����:");
	//scanf("%f", &a);
	//puts("������� ���������� ����������:");
	//scanf("%f", &n);
	//if (a = 0) printf("����������� �������� ���������");
	//for (float c = n, count = 1; count < c; count++)
	//{
	//	float tempp = pow(a, (-2 * n));
	//	ot += tempp;
	//	printf("%f %f", tempp, a);
	//}
	//printf("�����:%f", pow(a,-1) + ot);

}