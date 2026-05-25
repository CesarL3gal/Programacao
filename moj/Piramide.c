//Piramide
#include <stdio.h>
int main(){
    long int n;
    scanf("%ld",&n);
    int k=n-1;
    int save=k;
    for(int i=1;i<n+1;i++){
        while(k>0){
            printf(" ");
            k--;
        }
        for(int j=0;j<i;j++){
            
            if(j==0){
                printf("*");
            }
            else{
            printf("**");
            }
        }
        save--;
        k=save;
        printf("\n");
    }
    return 0;
}
/*
  *   // 2
 ***    // 1
*****    // 0

piramide de 3


       *       //7
      ***      //6
     *****     //5 
    *******    //4
   *********   //3
  ***********  //2
 *************  //1
*************** //0
Piramide de 8
*/
