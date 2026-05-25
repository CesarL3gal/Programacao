#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int vet[a],vetp[a],veti[a];
    int k=0;
    int l=0;
    for(int i=0;i<a;i++){
        scanf("%d",&vet[i]);
    }
    for(int i=0;i<a;i++){
        if(vet[i]%2==0){
            vetp[k]=vet[i];
            k++;
        }
        else if(vet[i]%2==1 || vet[i]%2==-1){
            veti[l]=vet[i];
            l++;
        }
    }
    for(int i=0;i<k;i++){
        printf("%d ",vetp[i]);
    }
    printf("\n");
    for(int i=0;i<l;i++){
        printf("%d ",veti[i]);
    }
    return 0;
}