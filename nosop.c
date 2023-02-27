#include<stdio.h>
void main()
{
	int n,sum,r;
	sum=0;
	scanf("%d",&n);
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("%d",sum);
	
}
