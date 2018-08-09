/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    int sum=0;
    if(argc!=3)
    {
        printf("Wrong entry");
        return 0;
    }
    int low,upper;
    low=atoi(argv[1]);
    low=low+1;
    upper=atoi(argv[2]);
    for(;low<upper;low++)
    {
      sum=sum+isodd(low);  
    }
    printf("Sum=%d",sum);
}


int isodd(int x)
{
    int check=x;
    
    if(x%2==0)
    {
        check=0;
    }
    return check;
}

