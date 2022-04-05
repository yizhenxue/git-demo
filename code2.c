#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{	
	srand(time(NULL));
	int m=rand()%10,n=rand()%10;if(n<=2) n++;if(n>=8) n--;if(m<=2) m++;if(m>=8) m--;
	printf("%d %d\n",m,n);printf("\n");
	int a[m][n],num1[m*n],num2[m*n],num3[m][n];
	int i,j,x=0;
	int t=0,l=0,b=m-1,r=n-1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=rand()%10;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}printf("\n");
	while(x<m*n)
	{
		for(i=l;i<=r;i++)
		{if(x==m*n) break;
			num1[x]=a[t][i];x++;			
		}
		for(i=t+1;i<b;i++)
		{if(x==m*n) break;
			num1[x]=a[i][r];x++;		
		}
		for(i=r;i>=l;i--)
		{	if(x==m*n) break;
			num1[x]=a[b][i];x++;
		}
		for(i=b-1;i>t;i--)
		{	if(x==m*n) break;
			num1[x]=a[i][l];x++;
		}
		if(t<b) {t++;b--;}
		if(l<r) {l++;r--;}
		
	}
	t=0;b=m-1;l=0;r=n-1;x=0;
	for(i=1;i<=(m*n-1);i++)
	{
		
		num2[0]=num1[m*n-1];
		num2[i]=num1[i-1];		
	}
		while(x<m*n)
	{
		for(i=l;i<=r;i++)
		{	if(x==m*n) break;
			num3[t][i]=num2[x];x++;
		}
		for(i=t+1;i<b;i++)
		{	if(x==m*n) break;
			num3[i][r]=num2[x];x++;
		}
		for(i=r;i>=0;i--)
		{	if(x==m*n) break;
			num3[b][i]=num2[x];x++;
		}
		for(i=b-1;i>t;i--)
		{	if(x==m*n) break;
			num3[i][l]=num2[x];x++;
		}
		if(t<b) {t++;b--;}
		if(l<r) {l++;r--;}
		
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",num3[i][j]);
		}
		printf("\n");
	}	
}


























































