#include<iostream>
#include<list>
#include<utility>
#include <algorithm>
#include<functional>

using namespace std;


int main(){

struct predicate
{
       bool operator ()( const std::pair<int, string> &left, const std::pair<int, string> &right ) const
       {
           return ( left.first < right.first);
       }
};

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    int b;
    string s;
    cin >> a;
    list< pair<int, string> > v;

    for(int i = 0; i < a; i++){
        cin >> b;
        cin >> s;
        v.push_back(make_pair(b, s));
    }

    v.sort(predicate());

    for(int i = 0; i < a; i++){
        cout << v.front().first << " " << v.front().second << "\n";
        v.pop_front();
    }

    return 0;
}