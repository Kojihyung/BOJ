#include<stdio.h>
#include<iostream>
#include<queue>

using namespace std;

int main(){
    int N,K;
    scanf("%d %d", &N, &K);

    queue<int> q;
    int d[100001] = {0, };

    d[N] = 0;
    q.push(N);

    //bfs

    while(!q.empty()){
        N = q.front();
        if(N == K){
            cout << d[N];
            return 0;
        }
        q.pop();

        if(0 <= N-1 && d[N-1] == 0){
            d[N-1] = d[N] + 1;
            q.push(N-1);
        }

        if(N+1 < 100001 && d[N+1] == 0){
            d[N+1] = d[N] + 1;
            q.push(N+1);
        }

        if(2*N < 100001 && d[2*N] == 0){
            d[2*N] = d[N] + 1;
            q.push(2*N);
        }
    }

    return 0;
}