#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int a,b;
int c;
int e = 0;

int func(bool* v, int n){
    if(v[n%a] == false){
        e++;
        if(e == b){
            v[n%a] = true;
            c = n%a;
            return c;
        }
        return func(v, (n+1)%a);
    }
    else{
        return func(v, (n+1)%a);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b;
    bool v[100001] = {false};
    int d = 0;
    cout << "<";

    for(int i = 0; i < a; i++){
        e = 0;
        d = func(v, (d+1)%a);
        if(i != a-1){
            if(d == 0) cout << a << ", ";
            else cout << d << ", ";
        }
        else{
            if(d == 0) cout << a << ">";
            else cout << d << ">";
        }
        
    }

    return 0;
}