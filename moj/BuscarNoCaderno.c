#include <stdio.h>
int main(){
    int n, m, t;
    scanf("%d %d %d", &n,&m ,&t);
    getchar();
    char caderno1[n][82];
    char caderno2[m][82];
    for(int i=0;i<n;i++){
        fgets(caderno1[i],82,stdin);
        for(int j=0;caderno1[i][j]!='\0';j++){
            if(caderno1[i][j]=='\n'){
                caderno1[i][j]='\0';
            }
        }
    }
    for(int i=0;i<m;i++){
        fgets(caderno2[i],82,stdin);
        for(int j=0;caderno2[i][j]!='\0';j++){
            if(caderno2[i][j]=='\n'){
                caderno2[i][j]='\0';
            }
        }
    }
    while(t--){
        int qcaderno,linha,coluna;
        scanf("%d %d %d",&qcaderno, &linha, &coluna);
        linha--;
        if(qcaderno==1){
            for(int i=coluna;caderno1[linha][i]!='\0';i++){
                printf("%c",caderno1[linha][i]);
            }
        }
        else{
            for(int i=coluna;caderno2[linha][i]!='\0';i++){
                printf("%c",caderno2[linha][i]);
            }
        }
        printf("\n");
    }
    return 0;   
}