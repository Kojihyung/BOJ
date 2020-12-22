//dfs

#include<iostream>
#include<stack>
#include <algorithm>
#include<utility>

using namespace std;

int a,b;
int connect[101][101]={0};
int v[101]={0};
int out = 0;

void dfs(int from){
    v[from] = 1;
    out++;
    for(int i = 1; i <= a; i++){
        if(connect[from][i]==1 && v[i] == 0){
            dfs(i);
        }
    }
    return;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int c,d;
    cin >> a;
    cin >> b;

    for(int i = 0; i < b; i++){
        cin >> c >> d;
        connect[c][d] = 1;
        connect[d][c] = 1;
    }  

    dfs(1);

    cout << out-1;

    return 0;
}