#include <iostream>
using namespace std;
int main(){
    int M, F1, F2;
    cin >> M >> F1 >> F2;
    int F3 = M-F1-F2;
    int ans = max(F3,max(F1,F2));
    cout << ans << '\n';
    return 0;

}
