#include <stdio.h>
void main() 
{
    int a1[100][100],a2[100][100],i,j,a,b;
    printf("Enter the size of the matrix\n");
    scanf("%d %d",&a,&b);
    printf("Enter elements in Matrix \n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            scanf("%d",&a1[i][j]);
        }
        printf("Matrix \n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            printf("%d ",a1[i][j]);
            printf("\n");
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            a2[j][i]=a1[i][j];
        }
        printf("Transposed Matrix \n");
        for(i=0;i<b;i++)
        {
            for(j=0;j<a;j++)
            printf("%d ",a2[i][j]);
            printf("\n");
        }
}