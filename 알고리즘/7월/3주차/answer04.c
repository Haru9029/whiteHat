#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));	//����(�ð�) 
	
	for(int i=0;i<4;++i)
	{
		printf("subnet 192.168.1.%d ip\n",i*64);	//�ش� ����� 
		for(int j=0;j<40;++j)
		{
			printf("192.168.1.%d/26\n",i*64+rand()%63+1);	//�Ҵ� ���� ip(40��)	
		}
		printf("============================\n");
	}
	
	return 0;
}

