#include<stdio.h>

void bubblesort(int a[],int k)
{
int round,temp,i,flg;
for(round=1;round<=k-1;round++)
{
flg=0;
   for(i=0;i<=k-1-round;i++)
         if(a[i]>a[i+1])
          {
	   flg=1;
           temp=a[i];
           a[i]=a[i+1];
            a[i+1]=temp;
          }
        if(flg==0)
          break;
} 
printf("round is %d\n",round);
}


main()
{
int aray[8]={1,2,10,4,5,6,7,9};
int i;
bubblesort(aray,8);
for(i=0;i<=7;i++)
  printf(" %d ",aray[i]);
}


OUTPUT:-
round is 2
 1  2  4  5  6  7  9  10
    
