#include <stdio.h>

int main()
{
	int i,j,k,m,n,min=10000,max=0;
	scanf("%d %d",&m,&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=m;i<n;i++)
	{
		min=10000;
		for(j=0;j<m;j++)
		{
			if(a[j]<min)
			{
				min=a[j];k=j;
			}
		}
		a[k]=a[k]+a[i];
	}
	for(i=0;i<m;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d\n",max);
}
