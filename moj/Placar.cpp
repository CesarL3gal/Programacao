#include <bits/stdc++.h>

using namespace std;

int main(){
    int p;
    int c;
    cin >> p;
    vector<int> tempo(110,0);
    for(int i=0;i<p;i++){
        int temp;
        cin >> temp;
        tempo[temp]=1; // 1 == pedro

    }
    cin >> c;
    for(int i=0;i<c;i++){
        int temp;
        cin >> temp;
        tempo[temp]=2; // 2 == camilla
    }
    int a=0,b=0;
    cout << a << " " << b << endl;
    for(int i=0;i<110;i++){
        if(tempo[i]!=0){
            if(tempo[i]==1){
                a++;
                cout << a << " " << b << endl;
            }else{
                b++;
                cout << a << " " << b << endl;
            }
        }
    }
    return 0;
}