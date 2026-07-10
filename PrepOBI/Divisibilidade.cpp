#include <bits/stdc++.h>
using namespace std;
auto divisores(int M){
    vector<int> ds;
    for(int d=1;d*d<=M;d++){
        if(M%d==0){
            auto c=M/d;
            ds.emplace_back(d);
            if(c!=d){
                ds.emplace_back(c);
            }
        }
    }
    sort(ds.begin(),ds.end());
    return ds;
}
int main(){

    int M;
    cin>>M;
    vector<int> ds=divisores(M);
    for(auto i: ds){
        cout<<i<<" ";
    }
    cout<<'\n';
    cout<<"numero de divisores:"<<ds.size();
    
return 0;
}