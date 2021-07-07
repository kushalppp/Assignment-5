#include<stdio.h>

main()

{
int a[5],total=0,i;
float avg;
printf("enter marks of five subjects :");

for(i=0;i<=4;i++)
 scanf("%d",&a[i]);

for(i=0;i<=4;i++)
 total=total+a[i];

avg=total/5.0;
printf("total is %d and avrg is %f",total,avg);

}


OUTPUT:-

enter marks of five subjects :55
45
12
15
33
total is 160 and avrg is 32.000000