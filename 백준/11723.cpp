#include<iostream>
#include<cstring>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    bool arr[21];
    string s;
    int b;
    memset(arr, false, sizeof(arr));

    for(int i = 0; i < N; i++){
        cin >> s;
        if(s == "add"){
            cin >> b;
            arr[b] = true;
        }
        else if(s == "remove"){
            cin >> b;
            arr[b] = false;
        }
        else if(s == "check"){
            cin >> b;
            if(arr[b] == true) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(s == "toggle"){
            cin >> b;
            if(arr[b] == false) arr[b] = true;
            else arr[b] = false;
        }
        else if(s == "all"){
            memset(arr, true, sizeof(arr));
        }
        else{
            memset(arr, false, sizeof(arr));
        }
    }

    return 0;
}