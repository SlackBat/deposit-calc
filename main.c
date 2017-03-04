#include <stdio.h>
#include <math.h>

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
		
	return(((cash * time * p)/365)/100);
}

int main()
{

	int cashin, time, cashout, p;
	
	printf("How much of cash are you ready to throw: ");
	scanf("%d\n", &cashin);
	
	printf("How long: ");
	scanf("%d\n", &time);
	
	p = allcash(cashin, time);
	cashout = cashin + p;
	
	printf("All your money right now: %d\n", cashout);
	
	return 0;
}