#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;

    char b[10];
    int c;
    stack<int> s;

    for(int i = 0; i < a; i++){
        cin >> b;
        if(b[0] == 'p'){
            if(b[1] == 'u'){
                cin >> c;
                s.push(c);
            }
            else
            {
                if(s.empty()) cout << -1 << "\n";
                else {cout << s.top() << "\n"; s.pop();}
            }
            
        }
        else if(b[0] == 't'){
            if(s.empty()) {cout << -1 << "\n";}
            else cout << s.top() << "\n";
        }
        else if(b[0] == 's'){
            cout << s.size() << "\n";
        }
        else if(b[0] == 'e'){
            cout << (s.empty() ? 1 : 0) << "\n";
        }
    }

    return 0;
}