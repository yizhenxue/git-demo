#include <stdio.h>
int isprime(int n)
{
	int i,result=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		result=0;
	}
	return result;
}
int main()
{
	int n,x,y,z;
	scanf("%d",&n);
	for(x=2;x<n/2;x++)
	{
		y=n-x;
		if(isprime(x)&&isprime(y))
		{
			printf("%d=%d+%d",n,x,y);
			break;
		}
	}
	
 } 




















































