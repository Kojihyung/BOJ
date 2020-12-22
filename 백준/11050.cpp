#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int c = 1;
    int d = 1;
    int e = 1;

    for(int i = 0; i < a; i++){
        c *= i+1;
    }
    for(int i = 0; i < a-b; i++){
        d *= i+1;
    }
    for(int i = 0; i < b; i++){
        e *= i+1;
    }

    cout << c/d/e;

    return 0;
}