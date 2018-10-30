#include<stdio.h>
#include<conio.h>
void main()
{
char s1[100],s2[100];
int i,j;
clrscr();
printf("enter the frist string:");
scanf("%s",s1);
printf("Enter the 2nd string:");
scanf("%s",s2);
for(i=0;s1[i]!='\0';i++)
{
for(j=0;s2[j]!='\0';j++,i++)

s1[i]=s2[j];
}
s2[i]='\0';
printf("the concatenate:%s",s2);

getch();

}