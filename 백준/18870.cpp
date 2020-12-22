#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

	vector<int> v2;
    vector<int> v;
    map<int, int> m;

	for (int tmp, i = 0; i < N; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	v2 = v;
	sort(v2.begin(), v2.end());
	int idx = 1;

	for (int i = 0; i < N; i++) {
		if (m[v2[i]] == 0)
			m[v2[i]] = idx++;
		else continue;
	}

	for (int i = 0; i < N; i++) {
		cout << m[v[i]]-1 << " ";
	}

    return 0;
}