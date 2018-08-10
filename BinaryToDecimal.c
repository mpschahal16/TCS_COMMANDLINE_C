/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int powerfun(int n,int power)
{
    int ret=1;
    for(int i=1;i<=power;i++)
    {
        ret=ret*n;
    }
    return ret;
}

int main(int argc,char* argv[])
{
    
    int num,final=0,i=0;
    if(argc!=2)
    {
        printf("Invalid Input");
        exit(0);
    }
    num=atoi(argv[1]);
    while(num!=0)
    {
       final=final+((num%10)*powerfun(2,i));
       num=num/10;
       i=i+1;
    }
    printf("Decimal=%d",final);
    
}
