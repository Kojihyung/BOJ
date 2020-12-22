//포기~ 알골 좀 듣고 다시

#include<iostream>
#include<stdio.h>
#include<utility>
#include<vector>

using namespace std;

int main(){
    int a;
    scanf("%d", &a);

    int b[a];
    int c = -1;
    int d = -1;

    for(int i = 0; i < a; i++){
        scanf("%d", &b[i]);
        int e[b[i]] = {0, };
        for(int j = 0; j < b[i]-1; j++){
            scanf("%d %d", &c, &d);
            e[c]++;
            e[d]++;
        }
        cout << e[0] << endl;
    }


    return 0;
}