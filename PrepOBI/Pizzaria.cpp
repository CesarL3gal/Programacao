#include <iostream>
using namespace std;
int main(){
    int G, P;
    cin >> G >> P;
    int ans = ((G * 8) + (P * 4))-2;
    cout << ans << '\n';
    return 0;
}