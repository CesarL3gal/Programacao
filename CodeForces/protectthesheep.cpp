    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n,m;
        cin >> n >> m;
        int matriz[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char temp;
                cin >> temp;
                if(temp=='.'){
                    matriz[i][j]=0;
                }
                else if (temp=='S')
                {
                    matriz[i][j]=1;
                }
                else if (temp=='W')
                {
                    matriz[i][j]=-1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << matriz[i][j]<< " ";
            }
            cout<<"\n";
        }
        return 0;
    }