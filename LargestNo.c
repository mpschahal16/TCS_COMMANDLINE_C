/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    int largest;
    if(argc==1)
    {
        printf("Enter some values");
    }
    largest=atoi(argv[1]);
    for(int i=1;i<argc;i++)
    {
        if(atoi(argv[i])>largest)
        {
            largest=atoi(argv[i]);
        }
        
    }
    printf("Largest=%d",largest);
}
