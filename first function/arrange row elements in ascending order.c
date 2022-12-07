
#include<stdio.h>

int main()
{
    int i,j,r,c,temp;
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    //arrange column elements in ascending order

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            for(int k =j+1; k<r; k++)
            {
                if(a[i][j]>a[i][k])
                {
                    temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }
            }

        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }





    return 0;
}
