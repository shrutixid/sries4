#include<stdio.h>
void main()
{
printf("The following program is to print the Prime numbers series till n\n\n\n");
int n,eve,num,flag=0;
printf("Enter a number to print a series till than:-");
scanf("%d",&n);
printf("\nThe Prime number series is :-\n");
for( num=3;num<=n;num++)
{
  for(int i=2;i<num;i++)
  {
    if(num%i==0)
     {
       flag=1;
       break;
     }
 }
 if(flag==0)
 {
  printf("%d ",num);
 }
 flag=0;
 }
}
