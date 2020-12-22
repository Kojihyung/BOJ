#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a;
    scanf("%d", &a);

    int b[a];

    for(int i = 0; i < a; i++){
        scanf("%d", &b[i]);
    }

    int arr[40];
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i < 40; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 0; i < a; i++){
        if(b[i] == 0){
            cout << 1 << " " << 0 << endl;
        }
        else if(b[i] == 1){
            cout << 0 << " " << 1 << endl;
        }
        else{
            cout << arr[b[i]-2] << " " << arr[b[i]-1] << endl;
        }
    }

    return 0;
}