#include<stdio.h>
 void func(int x,int y,int *ps,int  *pd, int *pp);
int main()
{
int a,b,sum,diff,prod;
 a = 6;
 b = 7;
func(a,b,&sum,&diff,&prod);
printf("sum=%d,diff=%d,prod=%d\n",sum,diff,prod);
}
 void func(int x,int y,int *ps,int *pd,int *pp)
{
*ps=x+y;
*pd=x-y;
*pp=x*y;
}
