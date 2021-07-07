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
printf("return 1");
}

main()
{
int loc;
int aray[6]={10,2,3,40,50,60};
loc=linearfind(aray,6);
if(loc<=6)
printf("index no is %d in a given array.",loc);
}


OUTPUT:-
enter a no:-10
index no is 0 in a given array.