#include<stdio.h>
void func(int a[]);
int main()
{
int i,arr[5]={3,6,2,7,1};
func(arr);
printf("inside the main():");
for(i=0;i<5;i++)
printf("%d",arr[i]);
printf("\n");
}
void func(int a[])
{
int i;
printf("inside the function():");
for(i=0;i<5;i++)
{
a[i]=a[i]+2;
printf("%d",a[i]);
}
printf("\n");
}
