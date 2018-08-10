/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    int a,b;
    float area;
   if(argc!=3)
   {
       printf("Invalid Input");
       exit(0);
   }
   a=atoi(argv[1]);
   b=atoi(argv[2]);
   area=0.5*a*b;
   printf("Area=%.2f",area);
   
}
