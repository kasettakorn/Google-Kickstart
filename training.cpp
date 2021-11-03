#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define ROF(i,a,b) for(int i=b-1; i>=a; i--)
#define SORT(a,n) sort(a, a+n)
#define SORTR(a,n) sort(a, a+n, greater<int>())

/*
1
4 3
3 1 9 100
*/

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
typedef pair<int, char> pic;
typedef pair<int, string> pis;
typedef vector<pair<int,int>> vpii;

void solve(int tc)
{
    cout << "Case #" << tc << ": ";
    int s, p;
    cin >> s >> p;
    int arr[s];
    FOR(i,0,s) cin >> arr[i];

    SORT(arr,s);
    int sum=0, ans=2e9;
    FOR(i,0,s) {
        sum += arr[i];

        if (i >= p-1) {
            ans = min(ans, p*arr[i]-sum);
        }
    }
    cout << ans << endl;


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
