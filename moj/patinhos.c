#include <stdio.h>
#include <string.h>

int main(){
    int npatinhos;
    scanf("%d",&npatinhos);
    getchar();
    char matriz[1000][1000];
    char temp[1000];
    int j=0;
    int i=0;
    while(scanf("%s",temp)!=EOF){
        strcpy(matriz[i][strlen(temp)],temp);
            //matriz[i][strlen(temp)]=temp;
            if(temp=='\n'){
                j++;
                i=0;
            }else{
                i++;
             }

    }
    int linha=i;
    i=0;
    j=0;
    for(int i=0; i< linha;i++){
        for(int j=0; matriz[i][j]!='\0';j++){
            printf("%c",matriz[i][j]);
            if(matriz[i][j]=='\n'){
                break;
            }
        }
    }

    return 0;
}