/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    int year;
    if(argc!=2)
    {
        printf("Invalid input");
    }
    year=atoi(argv[1]);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if (year%4==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}
