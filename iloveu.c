#include<stdio.h>
void main()
{

        int i,j,p=1;

        for(i=1;i<=11;i++)
        {

            for (j=1;j<=11;j++)
            {

                if(i==1||j==6||i==11)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            for(p=1;p<=5;p++)
            {
                printf("    ");
            }
            
            for (j=1;j<=10;j++)
            {

                if(i==2&&j!=1&&j!=2&&j!=4&&j!=5&&j!=6&&j!=7&&j!=9&&j!=10||i==3&&j!=1&&j!=10&&j!=5&&j!=6||i==4||i==5||i==6||i==7&&j!=1&&j!=10||
                                     i==8&&j!=1&&j!=2&&j!=9&&j!=10||i==9&&j!=1&&j!=2&&j!=3&&j!=8&&j!=9&&j!=10||
                                            i==10&&j!=1&&j!=2&&j!=3&&j!=4&&j!=7&&j!=8&&j!=9&&j!=10)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            
            for(p=1;p<=5;p++)
            {
                printf("     ");
            }
            
            for (j=1;j<=10;j++)
            {

                if(j==1&&i!=7&&i!=8&&i!=9&&i!=10&&i!=11||j==10&&i!=7&&i!=8&&i!=9&&i!=10&&i!=11||
                   i==7&&j!=1&&j!=3&&j!=4&&j!=5&&j!=6&&j!=7&&j!=8&&j!=10||i==8&&j!=1&&j!=2&&j!=4&&j!=5&&j!=6&&j!=7&&j!=9&&j!=10||
                   i==9&&j!=1&&j!=2&&j!=3&&j!=8&&j!=9&&j!=10)
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

}


