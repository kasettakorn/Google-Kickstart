/*
  Google Kickstart 2022 Round D
  TaskName: Image Labeler
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

void solve(int tc)
{
    cout << "Case #" << tc << ": ";
    ll n, m;
    cin >> n >> m;
    ll A[n];
    FOR(i, 0, n) cin >> A[i];
    SORT(A, n);
    double ans = 0;
    FOR(i, 0, m-1) {
        ans += A[n-1-i];
    }
    ans += ((A[(n-m+1)/2]) + (A[(n-m)/2])) / 2.0;
    cout << fixed << setprecision(12);
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
