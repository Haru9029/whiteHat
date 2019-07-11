#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));	//랜덤(시간) 
	
	for(int i=0;i<4;++i)
	{
		printf("subnet 192.168.1.%d ip\n",i*64);	//해당 서브넷 
		for(int j=0;j<40;++j)
		{
			printf("192.168.1.%d/26\n",i*64+rand()%63+1);	//할당 받은 ip(40개)	
		}
		printf("============================\n");
	}
	
	return 0;
}

