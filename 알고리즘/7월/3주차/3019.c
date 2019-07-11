#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    구조체 선언
*/
typedef struct schedule
{
  char name[100];
  int year;
  int month;
  int day;
}sch;

/*
	swap 함수 
*/
int swap(sch *a, sch *b)
{
	sch temp = *a;
	*a = *b;
	*b = temp;
	
	return 1;
}

int main(void)
{
    int n;
    sch *arr;	//배열(포인터) 
    //int count; (반복횟수 체크)
    
    /*
        입력
    */
    scanf("%d ",&n);
    arr = (sch *)malloc(sizeof(sch)*n); //동적 할당
    
    for(int i=0;i<n;++i)    //n개만큼 입력 
    {
        scanf("%s %d %d %d",
              arr[i].name, &arr[i].year,
              &arr[i].month, &arr[i].day);
    }
    
    /*
        알고리즘
    */
    for(int i=0;i<n;++i)	//년 월 일 알파벳 체크(오름차순)
    {
        int flag = 0;   //반복 제어
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j].year>arr[j+1].year)	flag = swap(&arr[j],&arr[j+1]);	//년 
            
            else if(arr[j].year==arr[j+1].year && arr[j].month>arr[j+1].month)	flag = swap(&arr[j],&arr[j+1]);	//월 
            
            else if(arr[j].year==arr[j+1].year && arr[j].month==arr[j+1].month
					&& arr[j].day>arr[j+1].day)		flag = swap(&arr[j],&arr[j+1]);	//일 
					
            else if(arr[j].year==arr[j+1].year && arr[j].month==arr[j+1].month
                    && arr[j].day==arr[j+1].day
					&& strcmp(arr[j].name,arr[j+1].name)>0)		flag = swap(&arr[j],&arr[j+1]);	//문자(사전순) 
        }
        if(!(flag)) break;
        //++count;
    }
    
    /*
        출력
    */
    for(int i=0;i<n;++i)
        printf("%s\n",arr[i].name);
    //printf("\n%d",count);
    
    return 0;
}
