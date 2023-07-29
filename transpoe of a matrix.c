#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
    printf("Enter the order of matrix A for m and n:\n");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter a[%d][%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("order of B  for p and q:\n");
    scanf("%d %d",p,q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf(" enter b[%d][%d] element:",i,j);
            scanf("%d",&b[i][j]);
        }
        if(n==p)
        {
            for(i=0;i<m;i++)
            {
                for(j=0;j<q;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<m;k++)
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
            printf("Elements after multplications \n");
            for(i=0;i<m;i++)
                for(j=0;j<q;j++)
            {
                printf("%5d",c[i][j]);
            }
            printf("\n");
        }
        else
            printf("Multplication of matrix is not possible for given matrices !");
        }

        return 0;
}
