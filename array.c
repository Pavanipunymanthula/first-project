#include<stdio.h>
int main()
{
	int a[50],i,j,n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)	
		for(j=i+1;j<n;j++)jiu87g
		{
		if(a[i]>a[j])
		
		
		{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
		
			
		}
		for(i=0;i<n;i++)
	printf("%d",a[i]);	
	}
