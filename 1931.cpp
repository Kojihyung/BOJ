#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<utility>
#include<list>

using namespace std;

int main(){
    int a;
    int c;
    int d;
    scanf("%d", &a);
    int out = 1;

    list< pair<int, int> > li;

    for(int i = 0; i < a; i++){
        scanf("%d %d", &c, &d);
        li.push_back(make_pair(d, c));
    }

    li.sort();

    while(!li.empty()){
        int b = li.front().first;
        li.pop_front();
        while(!li.empty() && li.front().second < b){
            li.pop_front();
        }
        if(!li.empty()){
            out++;
        }
        
    }
    
    cout << out;

    return 0;
}