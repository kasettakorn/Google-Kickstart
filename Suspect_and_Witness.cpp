/*
  Google Kick Start 2022
  TaskName: Suspect and Witness
  Lang: C++
*/
#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define ROF(i,a,b) for(int i=b-1; i>=a; i--)
#define SORT(a,n) sort(a, a+n)
#define SORTR(a,n) sort(a, a+n, greater<int>())

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
typedef pair<int, char> pic;
typedef pair<int, string> pis;
typedef vector<pair<int,int>> vpii;

typedef struct {
    ll edges[10000][10000];
 //   ll nedges, nvertices;
} Graph;

void solve(int tc)
{
    cout << "Case #" << tc << ": ";
    Graph g;
    ll n, m, k;
    cin >> n >> m >> k;
    ll a, b;
    memset(g.edges, 0, sizeof(g.edges));
    FOR(i,0,m) {
        cin >> a >> b;
        g.edges[a][b] = 1;
    }






}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for(int i=1; i<=T; i++) {
        solve(i);
    }
    return 0;
}
