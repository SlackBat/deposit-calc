#include <stdio.h>
#include "deposit.h"

int main()
{

	int cash, time;

	printf("Введите сумму и срок вклада: ");
	scanf("%d%d", &cash, &time);
	printf("\n");

	if (check(time, cash) == 0)
		printf("Ошибка!");
	else
		printf("Сумма вклада стала равна: %d\n", allcash(cash, time));

	return 0;
}
