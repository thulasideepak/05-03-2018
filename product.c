#include <stdio.h>
 int main() 
{
	int n,r,a=1;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		a=a*r;
		n=n/10;
	}
	printf("\n%d",a);
	return 0;
}
