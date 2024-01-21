#include<stdio.h>
main()
{
      int i,j,n;
      
      printf("Enter the number:");
      scanf("%d",&n);

      for(i=1;i<=n;i++)
      {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
      }

}