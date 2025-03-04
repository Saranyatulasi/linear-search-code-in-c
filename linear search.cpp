#include<stdio.h>
int main()
{
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int A[n];
	printf("enter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",& A[i]);
	}
	int k,c=0;
	printf("enter the element to be searched:");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		if(k==A[i])
		{c++;
		break;
		}
		
	}
	if(c==1)
	printf("YES");
	else
	printf("NO");
}