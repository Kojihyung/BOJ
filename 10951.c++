#include<iostream>

using namespace std;

int main(){
    int a;
    int b;

    while( cin >> a >> b){ // while(scanf("%d %d", &a, &b) != EOF)
        cout << a+b << endl;
    }

    return 0;
}