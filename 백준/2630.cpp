#include<iostream>
#include<algorithm>

using namespace std;

int black, white;
int color[128][128];

int N;

void func(int a, int start1, int start2){
    int checkBlack, checkWhite;

    if(a == 1){
        if(color[start1][start2] == 0) white++;
        else black++;
    }
    else if(a > 1){
        checkWhite = 0;
        checkBlack = 0;
        for(int i = start1; i < start1+a; i++){
            for(int j = start2; j < start2+a; j++){
                if(color[i][j] == 0){
                    checkWhite = 1;
                }
                else{
                    checkBlack = 1;
                }
            }
        }
        if(checkWhite == 1 && checkBlack == 1){
            func(a/2, start1, start2);
            func(a/2, start1+a/2, start2+a/2);
            func(a/2, start1, start2+a/2);
            func(a/2, start1+a/2, start2);
        }
        else if(checkWhite == 0){
            black++;
        }
        else if(checkBlack == 0){
            white++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> color[i][j];
        }
    }

    black = 0;
    white = 0;

    int a = N; // N = 2, 4, 8, 16, 32, 64, 128 중 하나

    func(a, 0, 0);

    cout << white << endl;
    cout << black;

    return 0;
}