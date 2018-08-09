/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    float area;
    int dia;
    if(argc!=2)
    {
        printf("Wrong Entry");
        return 0;
    }
    dia=atoi(argv[1]);
    area=3.14*(dia/2.0)*(dia/2.0);
    printf("Area =%.2f",area);
   
}
