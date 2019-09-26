#include<stdio.h>

int main()
{
	int n;
	printf("enter a n value::\n");
	scanf("%d",&n);
	int arr[n];
	int i,ter=0;
	printf("enter a array elmets::\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

			
	int j=1,k;
	printf("after::\n");	
	while(j<=17)
	{
	int	temp=arr[0];
		for(i=0;i<n;i++)
		{
			arr[i]=arr[i+1];
	
		}
		arr[n-1]=temp;;
		printf("j=::%d\n",j);
	
		for(k=0;k<n;k++)
		{	
			printf("%d\n",arr[k]);
		}
		j++;

	
	}	
}
