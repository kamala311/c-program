# c-program

#include <stdio.h>


int main()
{
	int N,K,sum=0;
	scanf("%d",&N);
	scanf("%d\n",&K);
	int a[5];
	for(int i=1;i<N;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int i=1;i<=K;i++)
	{
	    sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}



