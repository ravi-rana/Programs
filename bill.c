#include<stdio.h>
int main()
{
	int a;
	int bill;
	printf("enter you units\n");
	scanf("%d",&a);
	if(a<=50)
		bill=500+(1*a);
	else if(a>50&&a<=150)
		bill=500+50+((a-50)*2);
	else if(a>150&&a<=250)
		bill=500+50+200+((a-100)*2.5);
	else if(a>250)
		bill=500+50+200+250+((a-250)*3);
		printf("bill = %d\n",bill);
	return 0;
}

