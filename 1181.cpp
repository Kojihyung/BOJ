#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main(){
    int a;
    cin >> a;

    string in[a];

    for(int i = 0; i < a; i++){
        cin >> in[i];
    }

    for(int i = 0; i < a; i++){
        for(int j = i+1; j < a; j++){
            if(in[i].size() > in[j].size()){
                swap(in[i], in[j]);
            }
        }
    }

    int size = in[0].size();
    int b = 0;
    int c = 0;
    while(b < a){
        c = b;
        while(b < a){
            b++;
            if(in[b].size() != size) break;
        }
        size = in[b].size();
        sort(in+c, in+b);
    }

    string equal = in[0];
    cout << in[0] << endl;

    for(int i = 1; i < a; i++){
        if(in[i].compare(equal) != 0){
            equal = in[i];
            cout << in[i] << endl;
        } 
    }

    return 0;
}