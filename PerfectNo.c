/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    int n,sum=0;
    if(argc!=2)
    {
        printf("Invalid input");
        exit(0);
    }
    n=atoi(argv[1]);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
          
        }
    }
    if(n==sum)
    {
        printf("Perfect NO.");
    }
    else
    {
        printf("Not Perfect");
    }
}
