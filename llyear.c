#include <stdio.h>

int main(void)
{
	int lyear;
	scanf("%d",&lyear);
	printf("the year is %d",lyear);
	
		if((lyear%4)==0)
		{
			printf("%d is leapyear",lyear);
		}
		else
		{
			printf("%d is not a leapyear",lyear);
		}
		

	return 0;
}
