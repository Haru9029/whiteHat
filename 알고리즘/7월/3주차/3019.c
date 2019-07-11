#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    ����ü ����
*/
typedef struct schedule
{
  char name[100];
  int year;
  int month;
  int day;
}sch;

/*
	swap �Լ� 
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
    sch *arr;	//�迭(������) 
    //int count; (�ݺ�Ƚ�� üũ)
    
    /*
        �Է�
    */
    scanf("%d ",&n);
    arr = (sch *)malloc(sizeof(sch)*n); //���� �Ҵ�
    
    for(int i=0;i<n;++i)    //n����ŭ �Է� 
    {
        scanf("%s %d %d %d",
              arr[i].name, &arr[i].year,
              &arr[i].month, &arr[i].day);
    }
    
    /*
        �˰���
    */
    for(int i=0;i<n;++i)	//�� �� �� ���ĺ� üũ(��������)
    {
        int flag = 0;   //�ݺ� ����
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j].year>arr[j+1].year)	flag = swap(&arr[j],&arr[j+1]);	//�� 
            
            else if(arr[j].year==arr[j+1].year && arr[j].month>arr[j+1].month)	flag = swap(&arr[j],&arr[j+1]);	//�� 
            
            else if(arr[j].year==arr[j+1].year && arr[j].month==arr[j+1].month
					&& arr[j].day>arr[j+1].day)		flag = swap(&arr[j],&arr[j+1]);	//�� 
					
            else if(arr[j].year==arr[j+1].year && arr[j].month==arr[j+1].month
                    && arr[j].day==arr[j+1].day
					&& strcmp(arr[j].name,arr[j+1].name)>0)		flag = swap(&arr[j],&arr[j+1]);	//����(������) 
        }
        if(!(flag)) break;
        //++count;
    }
    
    /*
        ���
    */
    for(int i=0;i<n;++i)
        printf("%s\n",arr[i].name);
    //printf("\n%d",count);
    
    return 0;
}
