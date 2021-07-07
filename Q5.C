#include<stdio.h>

int maximum(int ma[])
{
int max,i;
max=ma[0];
for(i=1;i<=4;i++)
   if(max<ma[i])
      max=ma[i];
printf(" maximum no is %d",max);
}

int minimum(int mi[])
{
int min,x;
min=mi[0];
for(x=1;x<=4;x++)
   if(min>mi[x])
      min=mi[x];
printf("\n minimum no is %d",min); 
}


main()
{
int ar[5],i;
printf("enter array of elements");
for(i=0;i<=4;i++)
  scanf("%d",&ar[i]);

maximum(ar);
minimum(ar);
}


OUTPUT:-
enter array of elements10
20
60
40
02
 maximum no is 60
 minimum no is 2
