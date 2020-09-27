#include <stdio.h>
int cata(float x){
  if(x==0){
    return 1;
  }
  else{
    return ((2*(2*x-1))/(x+1)) * cata(x-1) ;
  }
}

int main(void) {
  printf("Hello World\n");
  int k,n,m;
  scanf("%i ",&n);
  k=cata(n);
  printf("%i",k);
  return 0;
}
