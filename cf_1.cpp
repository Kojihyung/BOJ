#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int b[a];

    for(int i = 0; i < a; i ++){
        cin >> b[i];
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b[i]; j++){
            if(j == b[i] - 1) cout << 1 << "\n";
            else cout << 1 << " ";
        }
    }

    return 0;
}