#include <stdio.h>

int main(void) {
  int n,var, sum=0, total=0;
  scanf("%d",&var);

  for(int i=1;i<=var;++i)
  {
    total += i;
  }

  for(int i=1;i<var;++i)
  {
    scanf("%d",&n);
    sum += n;
  }

  printf("%d",total - sum);
  
  return 0;
}

