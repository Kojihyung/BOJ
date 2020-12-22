#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int num = 0;

    char temp[20];

    vector<string> c;
    vector<string> e;

    c.resize(a);

    for(int i = 0; i < a; i++){
        scanf("%s", temp);
        c.push_back(temp);
    }

    sort(c.begin(), c.end());

    for(int i = 0; i < b; i++){
        scanf("%s", temp);

        if(binary_search(c.begin(), c.end(), temp)){
            e.push_back(temp);
            num++;
        }
    }

    sort(e.begin(), e.end());

    cout << num << endl;
    for(int i = 0; i < num; i++){
        cout << e[i] << endl;
    }

    return 0;
}