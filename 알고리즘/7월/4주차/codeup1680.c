#include <stdio.h>

int main()
{
    int s=0,t=1,o=0,i=0;
    
    while(i<9)
    {
        if(i==2*i)
        {
            o = i;
            while(t*10+o!=2*s)
            {
                if(s>9)
                    goto NEXT;
                ++s;
            }
        }
        NEXT:
            ++i;
    }
    
    printf("%d%d+%d%d=%d%d%d",s,o,s,o,t,o,o);
    
    return 0;
}
