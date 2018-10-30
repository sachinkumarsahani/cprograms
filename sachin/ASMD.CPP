#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,subtract,multiply;
float divide;
clrscr();
printf("Enter number:");
scanf("%d%d",&a,&b);
sum=a+b;
subtract=a-b;
multiply=a*b;
divide=a/b;
printf("sum=%d",sum);
printf("subtract=%d\n",subtract);
printf("multipl=%d",multiply);
printf("divide=%d",divide);
printf("\n");
getch();
}