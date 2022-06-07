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

const double PI = acos(-1.0L);

void solve(int tc)
{
    cout << "Case #" << tc << ": ";

    int R, A, B;
    cin >> R >> A >> B;

    ll sum = R*R;
    while(R > 0) {
        R = R * A;
        sum += R*R;
        R = R / B;
        sum += R*R;
    }

    cout << PI*sum << endl;



}

int main()
{
    cout << setprecision(16);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for(int i=1; i<=T; i++) {
        solve(i);
    }
    return 0;
}
