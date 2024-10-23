#include<stdio.h>
int main()
{
	int a,b,c;
	a=10;
	b=12;
	printf("before swapping %d=a,%d=b",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping %d=a,%d=b",a,b);
	return 0;
	
}
