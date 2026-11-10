#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);    
    int n1,m1,n2,m2;
    cin >> n1 >> m1;
    cin >> n2 >> m2;
    int A1=n1*m1;
    int A2=n2*m2;
    if(A1>A2){
        cout << A1 << endl;
    }
    else{
        cout << A2 << endl;
    }

    return 0;
}