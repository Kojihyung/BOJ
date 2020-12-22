#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;

    cin >> N >> M;
    vector<int> v[M];
    int arr2[N+1];
    int arr[N+1];
    int arr3[N+1];

    int c;

    for(int i = 0; i < M; i++){
        cin >> c;
        for(int j = 0; j < c; j++){
            int d;
            cin >> d;
            v[i].push_back(d);
        }
    }
    int e;

    for(int i = 1; i < N+1; i ++){
        cin >> e;
        arr2[i] = e;
        arr3[i] = e;
        arr[i] = e;
    }

    int check = 0;

    for(int i = M-1; i >= 0; i--){
        check = 0;
        int s = v[i].size();
        for(int j = 0; j < s; j++){
            if(arr2[v[i].at(j)] == 0){
                check = 1;
                break;
            }
        }

        if(check == 1){
            for(int j = 0; j < s; j++){
                arr2[v[i].at(j)] = 0;
            }
        }
    }

    for(int i = 1; i < N+1; i++){
        arr[i] = arr2[i];
    }

    for(int i = 0; i < M; i++){
        check = 0;
        int s = v[i].size();

        for(int j = 0; j < s; j++){
            if(arr[v[i].at(j)] == 1){
                check = 1;
                break;
            }
        }

        if(check == 1){
            for(int j = 0; j < s; j++){
                arr[v[i].at(j)] = 1;
            }
        }
    }

    for(int i = 1; i < N+1; i++){
        if(arr[i] != arr3[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    cout << endl;

    for(int i = 1; i < N+1; i++){
        if(i == N) cout << arr2[i];
        else cout << arr2[i] << " ";
    }

    return 0;
}
