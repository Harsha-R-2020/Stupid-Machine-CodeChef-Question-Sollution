#include<stdio.h>
int main()
{
	long int sum=0;
    int n,t;
	scanf("%d",&t);
	for(int o=0;o<t;o++)
	{
		scanf("%d",&n);
		long int a[n],b[n];
		scanf("%ld",&a[0]);
		b[0]=a[0];
		sum=a[0];
		for(int i=1;i<n;i++)
		{
			scanf("%ld",&a[i]);
			if(b[i-1]>a[i])
			{
				b[i]=a[i];
			}
			else if(a[i]>=b[i-1])
			{
				b[i]=b[i-1];
			}
			sum=sum+b[i];
		}
		printf("%ld\n",sum);
	}
}
