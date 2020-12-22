#include<iostream>

using namespace std;

int main(){
    int a[8];
    for(int i = 0; i < 8; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < 8; i++){
        if(a[i] == i+1){
            if(i == 7){
                cout << "ascending";
                return 0;
            }
        }
        else break;
    }
    
    for(int i = 0; i < 8; i++){
        if(a[i] == 8-i){
            if(i == 7){
                cout << "descending";
                return 0;
            }
           
        }
        else break;
    }
   
    cout << "mixed";
    return 0;
}