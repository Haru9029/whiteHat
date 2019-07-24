#include <stdio.h>

int main()
{
    int star=1,tri=0,squ=0,i=0;    //star, triangle, square
    
    while(tri<10)
    {
        squ = star*10+tri - star;
        if(squ<10)
        {
            if(squ-tri==squ)
            {
                printf("%d%d%d-%d%d=%d%d",star,tri,squ,star,tri,squ,squ);
                break;
            }
        }
    }
    
    return 0;
}
