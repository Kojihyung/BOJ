#include<iostream>

using namespace std;

int main(){
    int a;
    int b;

    while(true){ // while(scanf("%d %d", &a, &b) != EOF)
        cin >> a >> b;
        if(a == 0) break;
        cout << a+b << endl;
    }

    return 0;
}