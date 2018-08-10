/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    int largest1,largest2;
    if(argc<3)
    {
        printf("Enter more values");
        exit(0);
    }
    largest1=atoi(argv[1]);
    for(int i=1;i<argc;i++)
    {
        if(largest1<atoi(argv[i]))
        {
            largest1=atoi(argv[i]);
        }
    }
    printf("Largest=%d\n",largest1);
    largest2=atoi(argv[1]);
    for(int j=2;j<argc;j++)
    {
        if(atoi(argv[j])>largest2&&atoi(argv[j])<largest1)
        {
            largest2=atoi(argv[j]);
        }
    }
    printf("Second Largest=%d",largest2);
}
