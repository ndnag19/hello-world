/* Program for bubble sort */
#include<stdio.h>
int main()
{
	int n,i,round,temp,*p;
	int a[n-1];
	printf("enter the no. of array elements:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	p=a;
	printf("the given array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	for(round=1;round<=n-1;round++)
	{
		for(i=0;i<=n-1-round;i++)
		{
			if(*(p+i)>*(p+1+i))
			{
			    temp=*(p+i);
			    *(p+i)=*(p+i+1);
			    *(p+i+1)=temp;
		    }
		}
	}
	printf("\n");
	printf("the sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
