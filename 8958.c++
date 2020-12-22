#include<iostream>
#include<string>

using namespace std;

int main(){
    int a;
    cin >> a;
    string input[a];
    int score[a];

    for(int i = 0; i < a; i++){
        cin >> input[i];
        score[i] = 0;
    }

    int acc;

    for(int i = 0; i < a; i++){
        acc = 0;
        for(int j = 0; j < input[i].length(); j++){
            if(input[i][j] == 'O'){
                acc++;
                score[i] += acc;
            }
            else if(input[i][j] == 'X'){
                acc = 0;
            }
        }
        
    }

    for(int i = 0; i < a; i++){
        cout << score[i] << endl;
    }

    return 0;
}