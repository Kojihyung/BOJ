#include <cstdio>

using namespace std;

int abs(int num1, int num2){
    
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N][N];

    int team1[N/2];
    int team2[N/2];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", arr[i][j]);
        }
    }

    int a = 1;

    for(int i = 0; i < N/2; i++){
        team1[i] = a+i;
    }

    return 0;
}