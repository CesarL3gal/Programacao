#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> x;
    int num;
    while(n--){
        cin >> num; 
        x.insert(num);
    }
    int lido;
    while(cin >> lido){
        if(x.count(lido)){
            cout<<"sim"<<"\n";
        }
        else{
            cout<<"nao"<<"\n";
        }
    }

    return 0;
}