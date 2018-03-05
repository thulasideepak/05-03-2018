#include <stdio.h>
int main() 
 {
 int n,a,r=0;
 int result;
 printf("\n enter the number:");
 scanf("%d",&n);
 while(n!=0)
 {
 a=n%10;
r=reverse*10+a;
n=n/10;
}
printf("\n%d",r);
return 0;
}
