#define ROW 3
#define COL 4
#include<stdio.h>
main()
{
int mat[ROW][COL],i,j;
printf("enter the elements of the matrix(%d*%d)row-wise:\n",ROW,COL);
for(i=0;i<ROW;i++)
for(j=0;j<COL;j++)
scanf("%d",&mat[i][j]);
printf("the matrix you have  entered is :\n");
for(i=0;i<ROW;i++)
{
for(j=0;j<COL;j++)
printf("%d",mat[i][j]);
printf("\n");
}
printf("\n");
}
