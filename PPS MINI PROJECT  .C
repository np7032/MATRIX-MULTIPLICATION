#include<stdio.h>
int main()
{ int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
printf("\n enter the no of rows and columns in a matrix A");
scanf("%d%d",&r1,&c1);
printf("\n enter the no of rows and columnds in a matrix B");
scanf("%d%d",&r2,&c2);
// checking multiplication condition
if(c1==r2)
{//reading eements into a matrix A
printf("\n enter %d elements into a matrix A :",(r1*c1));
for(i=0;i<r1;i++)
{ for(j=0;j<c1;j++)
{ scanf("%d",&a[i][j]);
}
}
//reading elements into a matrix B 
printf("\n enter %d elements into matrix B:", (r2*c2));
for (i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    { scanf("%d",&b[i][j]);
    }
}
//printing matrix A 
printf("\n matrix A is -----\n");
for(i=0;i<r1;i++)
 {  for(j=0;j<c1;j++)
{
    printf("\t %d",a[i][j]);
}
printf("\n");
//printing matrix B  
("\n matrix B is ----\n");
for(i=0;i<r2;i++)
{ for(j=0;j<c1;j++)
{ 
    printf("\t %d",b[i][j]);
}
printf("\n");
//Matrices multiplication logic
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        c[i][j]=0;
        for(k=0;k<c1;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
}//printing multiplication matrix c1
printf("\n matrix C is----\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
   printf("\t %d",c[i][j]);
}
printf("\n");
}
}}}
else
{
    printf("\n matrices multiplication is not possible");
}
}
