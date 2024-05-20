#include<stdio.h>
int printN[5][5];
int printI[5][5];
int printK[5][5];
int printH[5][5];
int printI1[5][5];
int printL[5][5];
int printP[5][5];
int printR[5][5];
void gap()
{
    for(int a=0;a<=5;a++)
    {
        for(int b=0;b<1;b++)
        {
            printf(" ");
        }
    }
}//end gap()

void printconsole()
{
   for(int a=0;a<=5;a++)
    {

        gap();
        for(int b=0;b<5;b++)
        {
            char ch=printN[a][b];
            printf("%c",ch);
        }
        gap();
        for(int b=0;b<5;b++)
        {
            char ch=printI[a][b];
            printf("%c",ch);
        }
        gap();
         for(int b=0;b<5;b++)
        {
            char ch=printK[a][b];
            printf("%c",ch);
        }
        gap();
         for(int b=0;b<5;b++)
        {
            char ch=printH[a][b];
            printf("%c",ch);
        }
        gap();
         for(int b=0;b<5;b++)
        {
            char ch=printI[a][b];
            printf("%c",ch);
        }
        gap();
         for(int b=0;b<5;b++)
        {
            char ch=printL[a][b];
            printf("%c",ch);
        }
        gap();
         for(int b=0;b<5;b++)
        {
            char ch=printP[a][b];
            printf("%c",ch);
        }
        gap();
        for(int b=0;b<5;b++)
        {
            char ch=printR[a][b];
            printf("%c",ch);
        }
    printf("\n");
}//end of for loop
}//end of printconsole()

void N()
{
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(b==0|| b==4 ||a==b)
            {
                printN[a][b]=42;
            }
            else
            {
                printN[a][b]=32;
            }
        }
    }
}

void I()
{
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if( b==2 || a==0 || a==4 )
            {
                printI[a][b]=42;
            }
            else
                {
                    printI[a][b]=32;
                }
        }
    }
}

void K()
{
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(b==0 || a==2 && b==1 || b==2 && a==1 || b==2 && a==3 ||b==3 && a==4 || b==3 && a==0)
            {
                printK[a][b]=42;
            }
            else
                {
                    printK[a][b]=32;
                }
        }
    }
}


void H()
{
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(b==0 || b==4 || a==2)
            {
                printH[a][b]=42;
            }
            else
                {
                    printH[a][b]=32;
                }
        }
    }
}
/*
void I1()
{
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(a==0||a==7||b==4)
            {
                printI1[a][b]=42;
            }
            else
                {
                    printI1[a][b]=32;
                }
        }
    }
}

*/
void L()
{
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(b==0 || a==4)
            {
                printL[a][b]=42;
            }
            else
                {
                    printL[a][b]=32;
                }
        }
    }
}

void P()
{
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(b==0 || a==0 || b==4 && a<2 || a==2)
            {
                printP[a][b]=42;
            }
            else
                {
                    printP[a][b]=32;
                }
        }
    }
}


void R()
{
    for(int a=0;a<5;a++)
    {
        for(int b=0;b<5;b++)
        {
            if(b==0 || a==0 || b==4 && a<2 || a==2 || a==3 && b==2 || a==4 && b==4 )
            {
                printR[a][b]=42;
            }
            else
                {
                    printR[a][b]=32;
                }
        }
    }
}


void main()
{
   N();
   I();
   K();
   H();
  // I1();
   L();
   P();
   R();

   printconsole();
}

