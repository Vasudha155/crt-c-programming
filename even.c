#include<stdio.h>
int main()
{
	int w=6,x;
	if(w%2!=0 || w==2 )
	{
		printf("odd");
	}
	else
	x=w/2;
	if(x%2==0)
	{
		printf("%d %d",x,x);
	}
	else
	{
		printf("%d %d",x-1,x+1);
	}
	return 0;
	
}
