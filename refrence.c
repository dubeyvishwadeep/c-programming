#include<stdio.h>
void ref(int *p,int *q);
int main()
{
int a=6;
int b=7;
printf("before calling the function a=%d,b=%d\n",a,b);
ref(&a,&b);
printf("after calling the function a=%d,b=%d\n",a,b);
}
void ref(int *p,int *q)
{
(*p)++;
(*q)++;
printf("inside the function *p=%d,*q=%d\n",*p,*q);
}
