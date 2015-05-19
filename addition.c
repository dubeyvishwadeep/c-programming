#define ROW 3
#define COL 4
#include<stdio.h>
main()
{
int i,j,mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL];
printf("enter the matrix mat1(%d*%d)row-wise :\n",ROW,COL);
for(i=0;i<ROW;i++)
for(j=0;j<COL;j++)
scanf("%d",&mat1[i][j]);
printf("enter the matrix mat2(%d*%d)row-wise:\n",ROW,COL);
for(i=0;i<ROW;i++)
for(j=0;j<COL;j++)
scanf("%d",&mat2[i][j]);

/*addition of two matrix*/
for(i=0;i<ROW;i++)
for(j=0;j<COL;j++)
mat3[i][j]=mat1[i][j]+mat2[i][j];
printf(" the resultant matrix3 is:\n");
for(i=0;i<ROW;i++)
{
for(j=0;j<COL;j++)
printf("%d",mat3[i][j]);
printf("\n");

}
}
