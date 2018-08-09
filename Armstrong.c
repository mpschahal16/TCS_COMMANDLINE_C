/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int len(int no)
{
    int ct=0;
    while(no!=0)
    {
        ct=ct+1;
        no=no/10;
    }
    return ct;
}

int sumpowdigits(int no,int power)
{
    int sum=0;
    while(no!=0)
    {
        sum=sum+powerfun(no%10,power);
        no=no/10;
    }
    return sum;
}


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
    int orig,powe;
    int final;
    if(argc!=2)
    {
        printf("Enter value");
        return 0;
    }
    orig=atoi(argv[1]);
    powe=len(orig);
    final=sumpowdigits(orig,powe);
    if(orig==final)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    
   
}

