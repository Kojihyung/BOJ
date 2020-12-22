#include<iostream>
#include<stack>
#include<queue>
#include<stdio.h>

using namespace std;

int main(){
    stack<char> s;
    queue<char> q;

    char a;
    int end;

    while(true){
        end = 0;
        while(true){
            a = getchar();
            if(a == '\n') break;
            s.push(a);
            q.push(a);
        }

        if(s.size() == 1 && s.top() == '0') return 0;

        while(!s.empty()){
            if(s.top() != q.front()) end = 1;
            s.pop();
            q.pop();
        }

        if(end == 0) cout << "yes" << endl;
        else cout << "no" << endl;      
    }

    return 0;
}