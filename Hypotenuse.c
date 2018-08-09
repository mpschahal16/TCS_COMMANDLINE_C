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
    int a,b,h;
    if(argc!=3)
    {
        printf("InValid Entry");
    }
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    h=pow(((a*a)+(b*b)),.5);
    
    printf("%d",h);

    return 0;
}
