#include <stdio.h>
 int main() 
{
	int a,b,c,m;
	scanf("%d %d %d",&a,&b,&c);
	m=((a*b)%c);
	printf("\n%d",m);
	return 0;
}
