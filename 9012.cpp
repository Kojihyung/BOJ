#include<iostream>
#include<stack>
#include<algorithm>
#include<string>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;
    string in[a];
    stack<char> s;
    char c = '?';

    for(int i = 0; i < a; i++){
        cin >> in[i];
        while(!s.empty()) s.pop();
        for(int j = 0; j < in[i].length(); j++){
            if(in[i].at(j) == '(') s.push(c);
            else if(in[i].at(j) == ')'){
                if(!s.empty()) s.pop();
                else{
                    cout << "NO" << "\n";
                    break;
                }
            }
            if(j == in[i].length()-1 && s.empty()){
                cout << "YES" << "\n";
            }
            if(j == in[i].length()-1 && !s.empty()){
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}