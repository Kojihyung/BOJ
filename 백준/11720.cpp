#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    char in[a];

    for(int i = 0; i < a; i++){
        cin >> in[i];
    }

    int sum = 0;

    for(int i = 0; i < a; i++){
        sum += in[i]-'0';
    }

    cout << sum;

    return 0;
}