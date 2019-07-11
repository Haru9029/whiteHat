#include <stdio.h>

int main(void)
{
    int var, cnt=0;
    
    scanf("%d",&var);
    
    while(var/1!=0)
    {
        ++cnt;
        var /= 10;
    }
    
    printf("%d",cnt);
    
    return 0;
}

