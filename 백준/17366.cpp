#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;

    stack<int> s;
    map<int, int> m;

    char str[N];

    for(int i = 0; i < N; i++){
        cin >> str[i];
    }

    for(int i = 0; i < N; i++){
        if(str[i] == '.') continue;
        else if(str[i] == '(') s.push(i);
        else{
            if(abs(i-s.top()) != 1) {m.insert(make_pair(i, s.top())); m.insert(make_pair(s.top(), i));}
            s.pop();
        }
    }

    int from = 7;
    int to = 10;
    int start;

    int dist[12];
    fill(dist, dist+12, 1e9);
    dist[from-1] = 0;
    bool v[12];
    fill(v, v+12, false);
    v[from-1] = true;

    start = from;
    int temp;
    int type = 0;
    
    cout << "?";

    cout << dist[to-1];

    return 0;
}