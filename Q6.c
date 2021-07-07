#include<stdio.h>

int duplicate(int ar[])
{
int n,m,i;
char c;
for(n=0;n<=4;n++)
{
  for(m=1;m<=4;m++)
  {
   if(ar[n]==ar[m])
	if(n!=m)
{
ar[n]=ar[m]=0;
   }
}
}
for(i=0;i<=4;i++)
printf("%d",ar[i]);
}
main()
{
int a[5],i;
printf("enter array elements");
for(i=0;i<=4;i++)
 scanf("%d",&a[i]);
duplicate(a);
}