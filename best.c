#include<stdio.h>
main()
{
int i,arr[10]={1,2,3,4,5,6,7,8,9,10};
int small,large;
small=large=arr[0];
for(i=0;i<10;i++)
{
if(arr[i]<small)
small=arr[i];
if(arr[i]>large)
large=arr[i];
}
printf("smallest =%d,largest=%d\n",small,large);
}
