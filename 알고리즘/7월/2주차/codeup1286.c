#include <stdio.h>

int main(void)
{
    int arr[5];
    
    for(int i=0;i<5;++i)
        scanf("%d",&arr[i]);
    
    for(int i=0;i<5;++i)
    {
        if(arr[i]>arr[4])
        {
            int temp = arr[i];
            arr[i] = arr[4];
            arr[4] = temp;
        }
    }
    for(int i=4;i>0;--i)
    {
        if(arr[i]<arr[0])
        {
            int temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
        }
    }
    
    printf("%d\n%d",arr[4],arr[0]);
    
    return 0;
}

