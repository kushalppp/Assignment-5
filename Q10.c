#include<stdio.h>

int linearfind(int a[],int k)
{
int i, no;
printf("enter a no:-");
scanf("%d",&no);
for (i=0;i<=k-1;i++)
{
 if(no==a[i])
   return i;
}
printf("return NULL ");
}

main()
{
int loc;
int aray[6]={11,2,3,4,55,60};
loc=linearfind(aray,6);
if(loc<=6)
printf("address of given element is %d",&aray[loc]);
}


OUTPUT:-
enter a no:-11
address of given element is -408120576
enter a no:-55
address of given element is -1038249632
enter a no:-0
return NULL