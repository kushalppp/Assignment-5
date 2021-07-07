#include<stdio.h>

 void reversearray()
{
int a[5] ,i;
printf("enter value of array five elements:");
for(i=0;i<=4;i++)
 scanf("%d",&a[i]);
printf("revers of array element is:-"); 
for(i=4;i>=0;i--)
 printf(" %d",a[i]);
}

main()
{
reversearray();
}


OUTPUT:-
enter value of array five elements:1
2
3
4
5
revers of array element is:- 5 4 3 2 1