#include<iostream>
#include<map>
#include<stdlib.h>
#include<string>
#include<cctype>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;

    string name;
    cin >> a;
    cin >> b;

    map<string, int> m;
    map<int, string> m2;

    for(int i = 0; i < a; i++){
        cin >> name;
        m[name] = i;
        m2[i] = name;
        //m.insert(pair<string,int>(name, i));
        //m2.insert(pair<int, string>(i, name));
    }

    for(int i = 0; i < b; i++){
        cin >> name;
        if(atoi(name.c_str()) != 0){
            cout << m2[atoi(name.c_str())-1];
            cout << "\n";
        }
        else{
            cout << (m[name]+1);
            cout << "\n";
        }
    }

    return 0;
}