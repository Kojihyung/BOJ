#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a;
    cin >> a;

    int b[a];
    for(int i = 0; i < a; i++){
        cin >> b[i];
    }

    int c = 0;

    for(int i = 0; i < a; i++){
        if(b[i] == 2) {
            c++;
            continue;
        }
        for(int j = 2; j <= round(sqrt(b[i])); j++){
            if(b[i]%j == 0) break;
            if(j == round(sqrt(b[i]))) c++;
        }
    }

    cout << c;

    return 0;
}