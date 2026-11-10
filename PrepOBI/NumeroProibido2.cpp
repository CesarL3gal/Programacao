#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> vetor;
    while(n--){
        int numero;
        cin >> numero;
        vetor.push_back(numero);
    }
    sort(vetor.begin(),vetor.end());
    int lido;
    while(cin>>lido){
            if(binary_search(vetor.begin(),vetor.end(),lido)){
                cout<<"sim\n";
            }
            else{
                cout<<"nao\n";
            }
    }
    return 0;
}