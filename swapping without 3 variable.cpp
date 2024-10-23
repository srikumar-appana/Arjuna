#include<stdio.h>
int main()
{
	int a,b;
	a=10;
	b=12;
	printf("before swapping %d=a,%d=b",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping %d=a,%d=b",a,b);
	return 0;
	
}
