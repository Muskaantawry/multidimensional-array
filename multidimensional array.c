#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    int *b;
    int sum1=0, sum2=0;
    printf("input elements in the matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    b=&a;
    printf("Printing the matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*((b+i*3)+j));
            if(i==j)
            sum1+=a[i][j];
            if((i+j)==2)
            sum2+= a[i][j];
        }
        printf("\n");
    }
    printf("sum of first diagonal is %d \n",sum1);
    printf("sum of second diagonal is %d",sum2);
}
