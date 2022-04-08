#include <stdio.h>

int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	while(n>1)
	{
		if(n%2==0&&n!=2)
		{
			n/=2;
			cnt++;
			printf("^");
		}
		if(n%2==1)
		{
			n--;
			cnt++;
			printf("-");
		}
		if(n==2)
		{
			n--;
			cnt++;
			printf("-\n");
			break;
		}
	}
	printf("%d",cnt);
}

















































