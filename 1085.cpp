#include<iostream>

using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int ans;

    ans = x;
    if(y < ans) ans = y;
    if(w-x < ans) ans = w-x;
    if(h-y < ans) ans = h-y;

    cout << ans;

    return 0;
}