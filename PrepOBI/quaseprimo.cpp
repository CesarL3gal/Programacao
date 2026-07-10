#include <bits/stdc++.h>
using namespace std;

int main(){
    //multiplos de um numero = total/n
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,K;
    cin>>N>>K;
    vector<int> ks;
    for(int i=0;i<K;i++){
        int temp;
        cin>>temp;
        ks.emplace_back(temp);
    }

    int contador=N;
    for(int i=N;i>1;i--){
        for(auto j: ks){
            if(i%j==0){
                contador--;
                break;
            }
        }
    }
    cout<<contador<<'\n';
    return 0;
}