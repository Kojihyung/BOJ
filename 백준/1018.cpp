#include<iostream>

using namespace std;

int main(){
    int a;
    int b;

    cin >> a;
    cin >> b;

    char in[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> in[i][j];
        }
    }

    char t;
    char c;

    int sum;
    int min = 32;

    for(int i = 0; i <= a-8; i++){
        for(int j = 0; j <= b-8; j++){
            t = *(*(in+i)+j);
            sum = 0;

            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if(l != 0) {t == 'W' ? t = 'B' : t = 'W';}
                    if(*(*(in+i+k)+l+j) != t){
                        sum++;
                    }
                }
            }

            if(sum > 32) sum = 64-sum;

            if(sum < min){
                min = sum;
            }
        }
    }

    cout << min;
    
    return 0;
}