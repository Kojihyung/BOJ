#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> g[N+1];
    vector<int> g2[N+1];

    int a, b;

    for(int i = 0; i < N-1; i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int d1 = 0;
    int z = 0;

    for(int i = 1; i <= N; i++){
        int a = g[i].size();
        if(a > 2){
            z += a*(a-1)*(a-2)/6;
        }
    }

    for(int i = 1; i <= N; i++){
        int b = g[i].size();
        if(b > 1){
            int c = 1;
            for(int j = 0; j < b; j++){
                int d = g[g[i].at(j)].size();
            }
            if(c > 1){
                d1 += c;
            }
        }
    }
    if(d1/2 > 3*z){
        cout << "D";
    }
    else if(d1/2 < 3*z){
        cout << "G";
    }
    else
        cout << "DUDUDUNGA";

    return 0;
}