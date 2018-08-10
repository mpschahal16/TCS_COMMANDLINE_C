/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    int decino,ct=0,binaryno[10];
    if(argc!=2)
    {
        printf("Invalid input");
    }
    decino=atoi(argv[1]);
    while(decino!=0)
    {
        binaryno[ct]=decino%2;
        ct=ct+1;
        decino=decino/2;
    }
    for(int g=ct-1;g>=0;g--)
    {
        printf("%d",binaryno[g]);
    }
    
}
