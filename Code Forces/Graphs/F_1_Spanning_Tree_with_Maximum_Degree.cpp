#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 10000007;
vector<vector<int>> gr(N);

void sortRows(vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); ++i) {
        sort(matrix[i].begin(), matrix[i].end());
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    vector<vector<int>> v;
    for (int i = 1; i <= n; i++) {
        for (auto ok : gr[i]) {
            v.push_back({i, ok});
        }
    }


    sortRows(v);


    set<pair<int, int>> ans;


    set<int> s;

    for (auto i : v) {

        if (s.find(i[0]) == s.end() || s.find(i[1]) == s.end()) {
            ans.insert({i[0], i[1]});

            s.insert(i[0]);
            s.insert(i[1]);
        }
    }

    for (auto i : ans) {
        cout << i.first << " " << i.second << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
