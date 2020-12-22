#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    int N, r, c;
    scanf("%d %d %d", &N, &r, &c);

    //int num = pow(2,N)/4;

    int ans = 0;
    int a = 0;
    int b = 0;
    int z;

    while(N > 1){
        z = pow(2, N)*pow(2,N)/4;;
        if(r >= a + pow(2, N-1)){
            ans += z/2;
            a += pow(2, N-1);
        }
        if(c >= b + pow(2, N-1)){
            ans += z/4;
            b += pow(2, N-1);
        }
        N--;
    }


    int out = ans*4 + 2*(r%2) + c%2;

    cout << out;    

    return 0;
}