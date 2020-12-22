#include<iostream>
#include<string>

using namespace std;

int main(){
    int a;
    cin >> a;
    int input[a];
    int max;
    int min;

    for(int i = 0; i < a; i++){
        cin >> input[i];
    }

    max = input[0];
    min = input[0];

    for(int i = 1; i < a; i++){
        if(input[i] > max){
            max = input[i];
        }
        if(input[i] < min){
            min = input[i];
        }
    }

    cout << min;
    cout << " ";
    cout << max;

    return 0;
}