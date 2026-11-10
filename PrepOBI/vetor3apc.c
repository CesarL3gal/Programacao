    #include <stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int vetor[n], vetorpar[n],vetorimpar[n];
        for(int i=0;i<n;i++){
            scanf("%d",&vetor[i]);
        }
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(vetor[i]%2==0){
                vetorpar[j]=vetor[i];
                j++;
            }
            else{
                vetorimpar[k]=vetor[i];
                k++;
            }
        }
        for(int i=0;i<j;i++){
            if(i!=j-1)
                printf("%d ",vetorpar[i]);
            else{
                printf("%d",vetorpar[i]);
            }
        }
        printf("\n");
        for(int i=0;i<k;i++){
            if(i!=k-1)
            printf("%d ",vetorimpar[i]);
            else
            printf("%d",vetorimpar[i]);
        }
        printf("\n");   
        return 0;
    }