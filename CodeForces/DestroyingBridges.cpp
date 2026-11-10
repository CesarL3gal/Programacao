#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k; //n ilhas, kpontes destruidas
        cin >> n >> k;
        int p = ((n*(n-1))/2); //numero de pontes
        if(p==k){
            cout << 1 << "\n";
        }

       }
    return 0;
}