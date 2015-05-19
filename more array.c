#include<stdio.h>
 void func(float f[],int *i,char c[5]);
int main()
{
float f_arr[5]={1.2,3.5,3.4,7.5,8.9};
int i_arr[5]={1,2,3,4,5};
char c_arr[5]={'a','b','c','d','e'};
printf("inside the main():");
printf("size of f_arr=%u\t",sizeof(f_arr));
printf("size of i_arr=%u\t",sizeof(i_arr));
printf("size of c_arr=%u\t",sizeof(c_arr));
func(f_arr,i_arr,c_arr);
}
 void func(float f[],int *i,char c[5])
{
printf("inside the func():");
printf("size of f=%u\t",sizeof(f));
printf("size of i=%u\t",sizeof(i));
printf("size of c=%u\t",sizeof(c));
}
