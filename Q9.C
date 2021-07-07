#include<stdio.h>

int binaryfind(int a[],int k)
{
int i,no,decimal=0,rem,base=1;
printf("enter a binary no:-");
scanf("%d",&no);
while(no>0)
{
rem=no%10;
decimal=decimal+(rem*base);
no=no/10;
base=base*2;
}

 for(i=0;i<=k-1;i++)
{  
if(decimal==a[i])
    return i;
}
printf("return 1");
}


main()
{
int aray[6]={5,3,4,6,8,12};
int loc;
loc=binaryfind(aray,6);
if(loc<=6)
printf("%d",loc);
}

OUTPUT:-
enter a binary no:-1000
4