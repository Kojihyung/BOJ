#include<iostream>
#include<queue>
#include <algorithm> 
#include <functional>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    int b;
    cin >> a;

    priority_queue< int, vector<int>, greater<int> > p;

    for(int i = 0; i < a; i++){
        cin >> b;
        if(b == 0){
            if(p.empty()){
                cout << 0 << "\n";
            }
            else{
                cout << p.top() << "\n";
                p.pop();
            }
        }
        else{
            p.push(b);
        }
    }

    return 0;
}