#include<iostream>

using namespace std;

int main(){
    //coral BV BPBV BPBV BP
    //fake BVP BVP BVP BVP
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    if(n1==n3 || n2==n4){
        cout<<"V"<<'\n';
    }
    else{
        cout<<"F"<<'\n';
    }
    return 0;
}