#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b;
    int primeiro;
    for(int i=0;i<n;i++){
        if(i!=0){
            b=a;
            scanf("%d",&a);
            if(a==0 && b==0){
                printf("NO\n");
                return 0;
            }
        }
        else if(i==n-1){
            scanf("%d",&a);
            if(a==0 && primeiro==0){
                printf("NO\n");
                return 0;
            }
        }
        if(i==0){
            scanf("%d",&a);
            primeiro=a;
        }   
    }
    printf("YES\n");
    return 0;
}