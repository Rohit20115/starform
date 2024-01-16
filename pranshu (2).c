#include<stdio.h>
main()
{
    int i,j;
    
    for(i=1;i<=5;i++) //Rows
    {
        for(j=1;j<=5;j++) //Columns
        {
            if(j==1||(i==1&&j!=5||i==2&&j==5||i==3&&j!=5))
            {
                printf("*");
            }
            else
            {
                printf(" ");   
            }
        }
       
    
    printf("\t");
            for(j=1;j<=5;j++) //Columns
        {
            if(j==1||(i==1&&j!=5||i==2&&j==5||i==3&&j!=5||i==4&&j==4||i==5&&j==5))
            {
                printf("*");
            }
            else
            {
                printf(" ");   
            }
        }
        printf("\t");
    
    
      
        for(j=1;j<=5;j++) //Columns
        {
            if(j==5||j==1||(i==1&&j!=5||i==2&&j==5||i==3&&j!=5))
            {
                printf("*");
            }
            else
            {
                printf(" ");   
            }
        }
        printf("\t");
   
    
        for(j=1;j<=5;j++) //Columns
        {
            if(j==1||i==2&&(j==2)||i==3&&j==3||i==4&&j==4||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");   
            }
        }
        printf("\t");
    
        for(j=1;j<=5;j++) //Columns
        {
            if(i==1||i==2&&j==1||i==3||i==4&&j==5||i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");   
            }
        }
        printf("\t");
    
    
       
        for(j=1;j<=5;j++) //Columns
        {
            if(j==1||i==3||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");   
            }
        }
        printf("\t");
   
        for(j=1;j<=5;j++) //Columns
        {
            if(j==1||i==5||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");   
            }
        }
        printf("\n");
    }
    printf("\n\n");
}