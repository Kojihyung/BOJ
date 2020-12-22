#include<iostream>
#include<list>
#include<utility>
#include <algorithm>
#include<functional>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    int b,c,d;
    int e, f;
    cin >> a;

    for(int i = 0; i < a; i++){
        cin >> b >> c >> d;
        e = d%b;
        f = d/b+1;
        if(e == 0) {e = b; f--;}

        if(f < 10){
            cout << e << 0 << f << "\n";
        }
        else cout << e << f << "\n";
    }


    return 0;
}