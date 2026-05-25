#include <stdio.h>

int main(){
    int N,j,i;
    char s[1001];

    scanf("%d", &N);

    char m[N][1001];

    for(i=0;i<N;i++)
    {
        scanf(" %[^\n]",s);
        for(j=0; j<1000 && s[j]!='\0';j++)
        {
            if(s[j]>=65 && s[j]<=77)s[j]=s[j]+13;
            else if(s[j]>77 && s[j]<=90)s[j]=s[j]-13;
            m[i][j]=s[j];
        }
        m[i][j]='\0';
        printf("%s\n", m[i]);
    }

    // for(i=0;i<N;i++)
    // {
    //     printf("%s\n", m[i]);
    // }

    return 0;
}
