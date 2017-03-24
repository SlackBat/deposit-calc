#include <stdio.h>
#include <math.h>

int check(int day, int cash){
	if((day > -1) && (day < 366) && (cash >= 10000))
		return 1;
	else return 0;
}

int allcash(int cash, int time){
	int p;
	if(time > -1 && time < 31)
		p = -10;
	if(time > 30 && time < 121)
		p = 2;
	if(time > 120 && time < 241)
		p = 6;
	if(time > 240 && time < 366)
		p = 12;

	if (cash > 100000)
		p = p + (p/6) +1;

	return(((cash * time * p)/365)/100+cash);
}

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