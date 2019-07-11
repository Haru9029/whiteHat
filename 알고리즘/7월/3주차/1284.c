#include <stdio.h>

int main()
{
	int var, prime = 0;	//prime = (소수) 
	
	scanf("%d", &var);	//입력 
	
	for(int i=2;i<var;++i)	//가장 작은 소수 
	{	
		if(var%i==0)
		{
			prime = i; 
			break;
		}	
	}
	
	if(prime == 0)	//입력 받은 값이 소수였을 경우 
	{
		printf("wrong number");
		return -1;
	}	
	else
	{
		for(int i=2;i<(var/prime);++i)
		{	
			if((var/prime)%i==0)	//두 소수의 곱으로 나타낼 수 없을 경우 
			{
				printf("wrong number");
				return -1;
			}
		}
		printf("%d %d", prime, var/prime);	//두 소수의 곱으로 나타낼 수 있는 경우(출력) 
	}
	
	return 0;
}
