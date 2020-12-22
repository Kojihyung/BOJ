#include<iostream>

using namespace std;

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

    int a;
    

    cin >> a;

    int c[a+1];
    c[0] = 0;
    c[1] = 0;
    for(int i = 2; i <= a; i++){
        c[i] = c[i-1] + 1;
        if(i%2==0) c[i] = (c[i]>c[i/2]+1 ? c[i/2]+1:c[i]);
        if(i%3==0) c[i] = (c[i]>c[i/3]+1 ? c[i/3]+1:c[i]);
    }

    cout << c[a];

    return 0;
}