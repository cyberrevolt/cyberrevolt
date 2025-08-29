#include <stdio.h>
void main() 
{
    int a1[100][100],i,j,a,b;
    printf("Enter the size of the matrix\n");
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("Enter elements in Matrix \n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            scanf("%d",&a1[i][j]);
        }
        printf("\n");
        printf("Matrix \n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            printf("%d ",a1[i][j]);
            printf("\n");
        }
        printf("\n");
        printf("Diagonal Elemets\n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(i==j||(i+j)==(a-1))
                printf("%d ",a1[i][j]);
                else
                printf("  ");
            }
            printf("\n");
        }
    }
    else
    printf("Invalid Size , Size must be equal\n");
}