#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "Rus");

	float y1, y2, x;
	printf("������� �������� �\n");
	scanf_s("%f", &x);
	if (x <= 3)
	{
		y1 = pow(x, 2) - 3 * x + 9;
		printf("y1 = %.2lf\n", y1);
	}
	else
	{
		y1 = 1 / (pow(x, 3) + 3);
		printf("y2 = %.2lf\n", y1);
	}
	y2 = x * exp(sin(pow(x, 2)));
	printf("y2 = %.2lf\n", y2);
	printf("������������ = %.2lf\n", (y1 * y2));
	printf("�������� ��������� = %.2lf\n", (pow(y1, 2) - pow(y2, 2)));
	printf("��������� ����� = %.2lf\n", (2 * (y1 + y2)));
}