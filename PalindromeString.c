/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(int argc,char* argv[])
{
    char *ptr;
    int start=0,end=0,count=0;
    char orig[25],rev[25];
    if(argc!=2)
    {
        printf("Invalid Input");
        exit(0);
    }
    ptr=argv[1];
    while(*ptr!='\0')
    {
        orig[count]=*ptr;
        ptr++;
        count=count+1;
        
    }
    
    int t=0;
    for(int i=count-1;i>=0;i--)
    {
        rev[t]=orig[i];
        t=t+1;
    }
    int chec=1;
    
    for(int v=0;v<count;v++)
    {
        if(orig[v]!=rev[v])
        {
            chec=0;
        }
    }
    
    if(chec==1)
    {
        printf("Palindrome String");
    }
    else
    {
        printf("NOt Palindrome String");
    }
  
 
       
    
}
