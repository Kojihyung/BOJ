#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main(){
    int a;
    cin >> a;

    vector< pair<int, int> > vec(a);

    for(int i = 0; i < a; i++){
        scanf("%d %d", &vec[i].first, &vec[i].second);
    }

    sort(vec.begin(), vec.end());

    for(int i = 0; i < a; i++){
        printf("%d %d\n", vec[i].first, vec[i].second);
    }

    return 0;
}