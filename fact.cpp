#include<stdio.h>
int main()
{
	int i=1,n,long fact=1;
	printf("enter the number:"\n);
	scanf(%d" ",&n);
	for(i=1;i<=n;i++)
	{
		if(n<=0)
		{
			printf("no negative value");
		}
		else
	  {
		fact=fact(n-1)*n;
		printf("%d factorial is:"n,fact);
	  }
	}
	return 0;
}
