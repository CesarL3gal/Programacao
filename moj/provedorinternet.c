#include <stdio.h>

int main() {
    int n;
  scanf("%d",&n);
  if(n<=20){
    printf("30\n");
  }
  else{
    n = n - 20;
    int resultado = 30;
    for(int i=0;i<n;i++){
      resultado +=3;
    }
    printf("%d\n",resultado);
  }
    return 0;
}