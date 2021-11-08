#include<stdio.h>
main()
{
	int a,b,c,d;
	a=20;
	b=10;
	c=5;
	d=1;
	printf("%d\n",a>b && c>d);
	printf("%d\n",a>b && c<d);
	printf("%d\n",a=b && c>d);
	printf("%d\n",a=b && c<d);
	printf("%d\n",a>b || c>d);
	printf("%d\n",a>b || c<d);
	printf("%d\n",a=b || c>d);
	printf("%d\n",a=b || c<d);
	
}
