#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//
int isprime(char*str1)
{
	int j,result=0;
	for(j=0;j<strlen(str1);j++)
	{
		if(str1[j]=='.') result=1;
	
	}return result;
}
int main()
{
	int n,i,j,cnt=0; scanf("%d",&n);printf("\n");
	char str1[n][100],str2[n][100],str3[n][100];int num1[n]; char num2[n][100],num3[n][100],num4[i][100];
	for(i=0;i<n;i++)
	{
		scanf("%s",&str1[i]);
		strcpy(str3[i],str1[i]);
	}printf("\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(str1[i]);j++)
		{if(isprime(str1[i])!=1) break;
			if(str1[i][j]=='.') break;	//.后字符不计
				if(isalpha(str3[i][j])) cnt++;
			if(str1[i][j]>='a'&&str1[i][j]<='x') str2[i][j]=str1[i][j]-30;//译码 
			if(str1[i][j]=='y'||str1[i][j]=='z') str2[i][j]=str1[i][j]-56;
			if(str1[i][j]>='A'&&str1[i][j]<='Y') str2[i][j]=str1[i][j]+33;
			if(str1[i][j]=='Z') str2[i][j]=str1[i][j]+7;
		}	printf("%s",str2[i]);printf("\n");itoa(num1[i],num3[i],10);cnt=0;
			
	}
	char *p=str2[0];
	for(i=1;i<n;i++)//首尾相接 
	{
	  p=strcat(p,str2[i]);
	}
	printf("%s",p);
//	char *q;
//	for(i=0;i<n;i++)
//	{
//		q=strcat(num2[i],num3[i]);*q++;
//	}
//	printf("%s",strcat(p,q));
	

		
	
}
