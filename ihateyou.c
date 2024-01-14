#include<stdio.h>
main()
{
    int n;
    printf("Enter the  odd and even number :");
    scanf("%d",&n);
    int p=n/2+1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==p)
            printf("*");
            else printf(" ");
        }
        printf("\t\t ");
        for(int j=1;j<=n;j++)
        {
            if(j==1||j==n||i==p)
            printf("*");
            else printf(" ");
        }
        printf("\t");
         for(int j=1;j<=n;j++)
        {
            if(( i>=p&&(j==1||j==n)) || i==p||(i<=p && (j-i==p-1||i+j==p+1)))
        
            printf("*");
            else printf(" ");
        }

        printf("\t");
        
         for(int j=1;j<=n;j++)
        {
            if(i==1||j==p)
        
            printf("*");
            else printf(" ");
        }

        printf("\t");

         for(int j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||i==p)
        
            printf("*");
            else printf(" ");
        }
        
        printf("\t\t ");


         for(int j=1;j<=n;j++)
        {
            if( ( i<=p+1 &&(j==1 ||j==n)) ||(i>p+1&&(i+j==n+p+1||i-j==p))||(i==n&&j==p))
        
            printf("*");
            else printf(" "  );
        }

        printf("\n");

    }

}
