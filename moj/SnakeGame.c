//MY SNAKE IS SOLID 
#include <stdio.h>
int matriz[10][10]={};
int acabou=1;
void W(int maior){

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(matriz[i][j]==maior && i!= 0 ){
            matriz[i-1][j]=maior+1;
        }
        else if(i==0){
            printf("Bateu na parede\n");
            acabou=0;
        }
        else if(matriz[i-1][j]!=0){
            printf("Bateu em si mesmo\n");
            acabou=0;
        }
    }
}

if(acabou==1){
     printf("Nao bateu\n");
}


for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(matriz[i][j]!=0){
            matriz[i][j]= matriz[i][j] - 1;
        }
    }
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        printf(" %d",matriz[i][j]);
    }
    printf("\n");
}
}

void A(int maior){
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(matriz[i][j]== maior && j!= 0 ){
            matriz[i][j-1]=maior+1;
        }
        else if(j==0){
            printf("Bateu na parede\n");
            acabou=0;
        }
        else if(matriz[i][j-1]!=0){
            printf("Bateu em si mesmo\n");
            acabou=0;
        }
    }
}
if(acabou==1){
     printf("Nao bateu\n");
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(matriz[i][j]!=0){
            matriz[i][j]= matriz[i][j] - 1;
        }
    }
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        printf(" %d",matriz[i][j]);
    }
    printf("\n");
}
}


void S(int maior){

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(matriz[i][j]== maior && i!= 9 ){
            matriz[i+1][j]=maior+1;
        }
        else if(i==9){
            printf("Bateu na parede\n");
            acabou=0;
        }
        else if(matriz[i+1][j]!=0){
            printf("Bateu em si mesmo\n");
            acabou=0;
        }
    }
}
if(acabou==1){
     printf("Nao bateu\n");
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(matriz[i][j]!=0){
            matriz[i][j]= matriz[i][j] - 1;
        }
    }
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        printf(" %d",matriz[i][j]);
    }
    printf("\n");
}
}


void D(int maior){

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(matriz[i][j]== maior && j!= 9 ){
            matriz[i][j+1]=maior+1;
        }
        else if(j==9){
            printf("Bateu na parede\n");
            acabou=0;
        }
        else if(matriz[i][j+1]!=0){
            printf("Bateu em si mesmo\n");
            acabou=0;
        }
    }
}
if(acabou==1){
     printf("Nao bateu\n");
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(matriz[i][j]!=0){
            matriz[i][j]= matriz[i][j] - 1;
        }
    }
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        printf(" %d",matriz[i][j]);
    }
    printf("\n");
}
}



int main(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    int maior=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
    }

   char move[3]={};
    while((scanf("%s",move))){
        if(move[0]=='p'){
            printf("Venceu\n");
            break;
        }
        if(move[0]=='a'){
        A(maior);
        }
        if(move[0]=='w'){
        W(maior);
        }
        if(move[0]=='s'){
        S(maior);
        }
        if(move[0]=='d'){
         D(maior);
        }
        if (acabou==0){
            return 0;
        }
    }
    return 0;
}