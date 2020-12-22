#include<iostream>
#include<algorithm>

using namespace std;

int func(){
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;

    cin >> N >> K;

    int item[N+1][2];
    int dp[N+1][100003];

    for(int i = 1; i < N+1; i++){
        cin >> item[i][0] >> item[i][1];
    }

    for(int i = 1; i < N+1; i++){
        int weight = item[i][0];
        int val = item[i][1];

        for(int j = 1; j <= K; j++){
            if(j < item[i][0]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight]+val);
        }
    }

    cout << dp[N][K];

    return 0;
}