#include<stdio.h>
#include<conio.h>
void main()
{
//clrscr();
int n,i,j,k=1;
clrscr();
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
  printf("%d ",k);
  k++;
}
  printf("\n");//%d",i);
}
getch();
}
