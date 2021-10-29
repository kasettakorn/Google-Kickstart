#include <bits/stdc++.h>
using namespace std;
void solve(int tc)
{
    cout << "Case #" << tc << ": ";
    int n;
    string s;
    cin >> n;
    cin >> s;
    int longest = 1;
    if (s.size() == 1) {
        cout << 1 << endl;
        return;
    }
    cout << 1 << " ";
    for(int i=1; i<s.size(); i++) {
        if (s[i] > s[i-1]) {
            longest++;
        }
        else {
            longest = 1;
        }
        cout << longest << " ";
    }
    cout << endl;

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
