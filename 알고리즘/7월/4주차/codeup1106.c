#include <stdio.h>

int main()
{
    int a, b;
    
    a = 0x80000000;
    b = 0x7FFFFFFF;
    
    printf("%d %d", a, b);
    
    return 0;
}
