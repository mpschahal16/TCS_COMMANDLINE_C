/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int rev(int inp)
{
    int ret=0;
    while(inp!=0)
    {
        ret=(ret*10)+(inp%10);
        inp=inp/10;
    }
    return ret;
}

int main(int argc,char* argv[])
{
    int check,orig;
    if(argc!=2)
    {
        printf("Enter some value");
        return 0;
    }
    orig=atoi(argv[1]);
    
    check=rev(orig);
    if(orig==check)
    {
        printf("%d is Palindrom No.",orig);
    }
    else
    {
        printf("%d Not Palindrom No.",orig);
    }
}

