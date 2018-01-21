#include <stdio.h>

int main(void)
{
	int lyear;
	scanf("%d",&lyear);
	printf("the year is %d",lyear);
	
		if((lyear%4)==0)
		{
			printf("yes",lyear);
		}
		else
		{
			printf("no",lyear);
		}
		

	return 0;
}
