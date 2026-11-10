#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,T;
    cin >> N >> T;
    vector<int> ordem(N);
    for(int i=0;i<N;i++){
        ordem[i]=i;
        //cout << ordem[i]<< " ";
    }
    for(int i=0;i<T;i++){
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        int pos1 = find(ordem.begin(),ordem.end(),A) - ordem.begin();
        int pos2 = find(ordem.begin(),ordem.end(),B) - ordem.begin();
        int temp = ordem[pos1];
        ordem[pos1] = ordem[pos2];
        ordem[pos2] = temp;
    }
    for(int i=0;i<N;i++){
        if(i!=N-1){
            cout << ordem[i]+1<<" ";
        }
        else{
            cout << ordem[i]+1<<"\n";
        }
    }
    return 0;
}
// Entrada
// 5 3
// 1 3
// 2 4
// 3 5
// 1 2 3 4 5
// 3 2 1 4 5
// 3 4 1 2 5
// 5 4 1 2 3
