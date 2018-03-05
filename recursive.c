#include <stdio.h>
int main() 
{
	int n,i;
	scanf("%d",&n);
	int a,rem;
	while(n!=1)
	{
	rem=n%2;
	a=n/2;
	printf("%d\n",a);
	n=rem;
	break;
	}
	return 0;
}
