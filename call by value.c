#include<stdio.h>
void display(int x,int y);
int main()
{
int a=5,b=8;
printf("before calling the function,a=%d and b=%d\n",a,b);
display(a,b);
printf("after calling the function,a=%d and b=%d\n",a,b);
}
void display(int x,int y)
{
x++;
y++;
printf("inside the function x=%d and y=%d\n",x,y);
}
