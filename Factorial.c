/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        int ans=1;
        int i;
        for(i=1;i<=x;i++)
        {
            ans=ans*i;
        }
        return ans;
        
    }
}

int main(int argc,char* argv[])
{
    int ans;
    if(argc==1)
    {
        printf("Enter some value");
        return 0;
    }
    for(int i=1;i<argc;i++)
    {
        ans=fact(atoi(argv[i]));
        printf("%d,",ans);
    }
    
}
