#include<stdio.h>
int a[5];

void acceptarray()
{
int i;
printf("enter a array elements five:-");
for(i=0;i<=4;i++)
	scanf("%d",&a[i]);
}

void print()
{
int i;
for(i=0;i<=4;i++)
  printf("%d",a[i]);
}

main()
{
 acceptarray();
 print();
}


OUTPUT:-
enter a array elements five:-1
2
3
4
5
12345