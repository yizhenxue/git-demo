#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int m,n;while(1){m=rand()%10;n=rand()%10;if(m>2&&m<8&&n>2&&n<8) break;}
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
	while(t<b&&l<r)
	{
		for(i=l;i<r;i++)
		{
			num1[x]=a[t][i];x++;
		}
		for(i=t;i<b;i++)
		{
			num1[x]=a[i][r];x++;
		}
		for(i=r;i>l;i--)
		{
			num1[x]=a[b][i];x++;
		}
		for(i=b;i>t;i--)
		{
			num1[x]=a[i][l];x++;
		}
		t++;l++;b--;r--;
	}if(t==b&&l!=r) for(i=l;i<r;i++) {num1[x]=a[t][i];x++;}
	if(l==r&&t!=b) for(i=t;i<b;i++) {num1[x]=a[i][r];x++;}
	if(t==b&&l==r) num1[x]=a[t][r];
		for(i=1;i<=(m*n-1);i++)
	{
		
		num2[0]=num1[m*n-1];
		num2[i]=num1[i-1];		
	}	t=0;b=m-1;l=0;r=n-1;x=0;
		while(t<b&&l<r)
	{
		for(i=l;i<r;i++)
		{
		num3[t][i]=num2[x];x++;
		}
		for(i=t;i<b;i++)
		{
			num3[i][r]=num2[x];x++;
		}
		for(i=r;i>l;i--)
		{
			num3[b][i]=num2[x];x++;
		}
		for(i=b;i>t;i--)
		{
		num3[i][l]=num2[x];x++;
		}
		t++;l++;b--;r--;
	}if(t==b&&l!=r) for(i=l;i<r;i++) {num3[t][i]=num2[x];x++;}
	if(l==r&&t!=b) for(i=t;i<b;i++) {num3[i][r]=num2[x];x++;}
	if(l==r&&t==b) num3[t][r]=num2[x];
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",num3[i][j]);
		}
		printf("\n");
	}	
}

























































