#include<stdio.h>
int main()
{

        int i,j;

        for(i=1;i<=10;i++)

        {

                for(j=1;j<=30;j++)
                {

                        if(i==1&&j<=30||i==2&&j==1||i==2&&j==30||i==3&&j==1||i==3&&j==30||i==4&&j==1||i==4&&j==25||i==5&&j==1||i==5&&j==30||
                           i==6&&j==1||i==6&&j==30||i==7&&j<=30||i==8&&j==15||i==8&&j==16||i==9&&j==15||i==9&&j==16||i==10&&j==11||i==10&&j==12||
                           i==10&&j==13||i==10&&j==14||i==10&&j==15||i==10&&j==16||i==10&&j==17||i==10&&j==18||i==10&&j==19||i==10&&j==20)
                        
                        {
                                printf("\3");
                        }
                         else
                        {
                                printf(" ");
                        }
                        if(i==4&&j==12)

                        printf("Rohit");
                }
                printf("\n");

        }

        return 0;
}