#include<iostream>
#include<stdio.h>
#include<utility>
#include<algorithm>
#include<list>
#include<queue>

using namespace std;

int T, M, N, K;

bool* func(bool e[], bool arr[], int c, int d){
    //cout << "func" << endl;
                arr[c*N+d] = true;

                if(0<=c-1 && arr[(c-1)*N+d] == false && e[(c-1)*N+d] == true){
                    arr = func(e, arr, c-1, d);
                }
                if(c+1<M && arr[(c+1)*N+d] == false && e[(c+1)*N+d] == true){
                    arr = func(e, arr, c+1, d);
                }
                if(0<=d-1 && arr[c*N+d-1] == false && e[c*N+d-1] == true){
                   arr = func(e, arr, c, d-1);
                }
                if(d+1<N && arr[c*N+d+1] == false && e[c*N+d+1] == true){
                    arr = func(e, arr, c, d+1);
                }

    return arr;

            

}


int main(){
    
    scanf("%d", &T);

    int c, d;

    for(int i = 0; i < T; i++){
        scanf("%d %d %d", &M, &N, &K);

        int out = 0;

        queue< pair<int, int> > q;

        while(q.empty() == false) q.pop();

        bool v[M*N] = {false};
        bool e[M*N] = {false};

        for(int j = 0; j < K; j++){
            scanf("%d %d", &c, &d);
            q.push(make_pair(c, d));
            e[c*N+d] = true;
        }

        c = q.front().first;
        d = q.front().second;

        while(!q.empty()){
            v[c*N+d] = true;
            out++;

            if(!q.empty()){
                *v = func(e, v, c, d);
            }

            c = q.front().first;
            d = q.front().second;

            while(q.empty() == false && v[c*N+d] == true){
                q.pop();
                c = q.front().first;
                d = q.front().second;
            }
        }

        cout << out << endl;
    }


    return 0;
}