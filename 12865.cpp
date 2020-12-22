#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int in;
    vector<pair<int, int>> vec;
    pair<int, int> p;

    for(int i = 0; i < 9; i++){
        cin >> in;
        p = make_pair(in, i+1);
        vec.push_back(p);
    }

    sort(vec.begin(), vec.end());
    printf("%d\n", vec.back().first);
    printf("%d", vec.back().second);

    return 0;
}