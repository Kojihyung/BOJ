#include<iostream>
#include<stdio.h>
#include<list>

using namespace std;

int main(){
    int a;
    scanf("%d", &a);

    list<int> li;
    for(int i = 0; i < a; i++){
        li.push_back(i+1);
    }
    
    int turn = 0;

    while(li.size() > 1){
        if(turn == 0){
            li.pop_front();
            turn = 1;
        }
        else if(turn == 1){
            li.push_back(li.front());
            li.pop_front();
            turn = 0;
        }
        //cout << li.front() << endl;
    }

    cout << li.front();

    return 0;
}