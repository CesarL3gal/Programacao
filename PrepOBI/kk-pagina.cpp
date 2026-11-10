#include <bits/stdc++.h>
using namespace std;
int main(){
    long int N;
    int P, X;
    cin >> N >> P >> X;
    vector<long int> ids(N);

    for(int i=0;i<N;i++){
        cin >> ids[i];
    }

    sort(ids.begin(),ids.end());

    for(int i= (P*X); i < (P*X)+X; i++){
        cout << ids[i] << "\n";
    }

}