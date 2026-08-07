#include <stdio.h>
#include<stdbool.h>
int main() {
    int n, maior=0;
    bool i=false;
  while( scanf("%d",&n) ==1){
    if(!i){
      maior=n;
      i=true;
    }
    if(n>maior){
      maior=n;
    }
  }
  printf("%d\n",maior);
  return 0;
}
