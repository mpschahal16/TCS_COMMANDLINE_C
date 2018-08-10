/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    int o=0,s=1,n,next;
    if(argc!=2)
    {
        printf("Invalid input");
        exit(0);
    }
    n=atoi(argv[1]);
   for(int i=1;i<=n;i++)
   {
       printf("%d ",o);
       next=o+s;
       o=s;
       s=next;
       
   }
    
    
    
}
