#include <iostream>

using namespace std;

int main(){
    
    int x ,y;
    cin >> x >> y;
    int a = x + y;
    int s = x - y;
    int m = x * y;
    int d = x / y;
    int r = x % y;

    cout<< a << '\n';
    cout<< s << '\n';
    cout<< m << '\n';
    cout<< d << '\n';
    cout<< r << '\n';
    return 0;
}