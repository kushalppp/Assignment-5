#include<stdio.h>

void maximum(int ar[])
{
int max,i;
max=ar[0];
for(i=1;i<=4;i++)
  {
    if(max<ar[i])
       max=ar[i];
	}
printf("maximum no is %d",max);
}
 
main()
{
int a[5],i;
printf("enter array elements");
for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
maximum(a);
}

OUTPUT:-
enter array elements10
20
40
30
50
maximum no is 50