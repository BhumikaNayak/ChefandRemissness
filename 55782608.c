#include <stdio.h>

int main(void) 
{
    int T;
    scanf("%d",&T);
    int GuardA,GuardB,Minimum,Maximum;
    
    while(T--)
    {
        scanf("%d%d",&GuardA,&GuardB);
        if(GuardA>GuardB)
        Minimum=GuardA;
        else
        Minimum=GuardB;
        printf("%d %d\n",Minimum,GuardA+GuardB);
    }
    return 0;
}

