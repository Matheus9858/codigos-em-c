#include <stdio.h>
int mdc(int x,int y){
  if(y<=x && x%y==0){
    return y ;
  }
  else if(y>x){
    return mdc(y,x);
  }
  else{
    return mdc(y,x%y);
  }
}

int main(void) {
  printf("Hello World\n");
  int k,n,m;
  scanf("%i %i",&n,&m);
  k=mdc(n,m);
  printf("%i",k);
  return 0;
}
