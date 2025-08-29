#include <stdio.h>
void main() 
{
    int a1[100][100],a2[100][100],a3[100][100],i,j,a,b,c,d;
    printf("Enter the size of first matrix\n");
    scanf("%d %d",&a,&b);
    printf("Enter the size of second matrix\n");
    scanf("%d %d",&c,&d);
    if(a==c&&b==d)
    {
        printf("Enter elements in Matrix 1\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            scanf("%d",&a1[i][j]);
        }
        printf("Enter elements in Matrix 2\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            scanf("%d",&a2[i][j]);
        }
        printf("\n");
        printf("Matrix 1\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            printf("%d ",a1[i][j]);
            printf("\n");
        }
        printf("\n");
        printf("Matrix 2\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("%d ",a2[i][j]);
                a3[i][j]=a1[i][j]+a2[i][j];
            }
            printf("\n");
        }
        printf("\n");
        printf("Resultant Matrix \n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            printf("%d ",a3[i][j]);
            printf("\n");
        }
    }
    else
    printf("Invalid Size\n");
}