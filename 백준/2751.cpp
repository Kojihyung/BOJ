#include<iostream>
#include<vector>
#include <algorithm>
#include<functional>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    int b;
    cin >> a;
    vector<int> v;

    for(int i = 0; i < a; i++){
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < a; i++){
        cout << v.back() << "\n";
        v.pop_back();
    }

    

    return 0;
}