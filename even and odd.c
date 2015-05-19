#include<stdio.h>
void se (int num);
main()
{
int arr[10],i;
printf("enter the array element :");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
se(arr[i]);
}
}
void se (int num)
{
if(num%2==0)
printf("number is even number\n");
else
printf("number is odd number\n");
}
