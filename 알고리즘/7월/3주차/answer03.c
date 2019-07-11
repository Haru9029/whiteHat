#include <stdio.h>
#define SIZE 4
/*
	4*4 마방진 해법
	1. 첫번째와 네번째 행에 제일 작은 수그룹과 제일 큰 수그룹의 짝 지우기,
	   이 단계의 세로열 합을 위의 상태로 만들기 위해 그룹 안의 숫자들은 엇갈려 짝을 짓는다. 
	   
	2. 2번째 작은 수그룹과 2번째 큰 수그룹의 짝 지우기,
	   역시 그룹안의 숫자들은 엇갈려 짝을 짓는다. 이 방법으로 이전 단계 세로열의 합에 맞춰
	   가운데 2행의 합을 맞춘다. 
	
	01 14 15 04
	08 11 10 05
	12 07 06 09
	13 02 03 16
	
	+ 상하좌우의 균형을 맞추는 논리로만 수를 넣었기 때문에
	  각 행과 열의 위치를 서로 맞바꾸어도(내부행, 열끼리  또는 외부행, 열끼리) 마방진이 깨지지 않는다.
*/
int main()
{
  	int square[SIZE][SIZE];
  	int magic[SIZE][SIZE];
	
	/*
		입력 
	*/
	for(int i=0; i<SIZE; i++)
	{
	    for(int j=0; j<SIZE; j++)
	    	square[i][j] = i*SIZE+j+1;
  	}
  	
  	/*
  		역순 정렬
  	*/
  	for(int i=0;i<SIZE;++i)
  	{
    	for(int j=0;j<SIZE;++j)
      		magic[i][j] = square[SIZE-1-i][SIZE-1-j];
	}
	
	/*
		대각선 부분은 원래대로 
	*/
  	for(int i=0; i<SIZE; i++)
  	{
    	for(int j=0; j<SIZE; j++)
    	{
	    	if(i==j||i+j==3)
				magic[i][j] = square[i][j];
	    }
	}
	
	/*
		출력 
	*/
	for(int i=0; i<SIZE; i++)
	{
	    for(int j=0; j<SIZE; j++)
	    	printf("%02d ", magic[i][j]);
  	  	printf("\n");
  	}

	  return 0;
}
