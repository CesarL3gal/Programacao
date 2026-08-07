#include <bits/stdc++.h>
using namespace std;
int main(){
    int G1,G2,G3,G4;
    cin>>G1>>G2>>G3>>G4;
    int mesas=0;
    mesas+=G4;
    mesas+=G3;
    G1=max(0,G1-G3);
    mesas+=G2/2;
    if(G2%2!=0){
        mesas++;
        G1=max(0,G1-2);
    }
    if(G1>0){
        mesas+=G1/4;
        if(G1%4 !=0){
            mesas++;
        }
    }
    cout<<mesas;

    return 0;
}