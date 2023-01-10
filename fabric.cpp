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
    string color;
    int duration;
    int id;
}Fabric;


bool comparatorByColor(Fabric f1, Fabric f2) {
    return f1.color < f2.color;
}
bool comparatorByDuration(Fabric f1, Fabric f2) {
    return f1.duration < f2.duration;
}
bool comparatorById(Fabric f1, Fabric f2) {
    return f1.id < f2.id;
}

void solve(int tc)
{
    string color;
    int n;
    cin >> n;
    
    Fabric A[n], B[n];
    FOR(i,0,n) {
        cin >> A[i].color >> A[i].duration >> A[i].id;
        B[i].color = A[i].color;
        B[i].duration = A[i].duration;
        B[i].id = A[i].id;
    }
    sort(B, B+n, comparatorByColor);
    sort(B, B+n, comparatorByDuration);
    
    int count=0;
    FOR(i,0,n) {
        if(A[i].id == B[i].id) count++;
    }
    
    
    cout << "Case #" << tc << ": " << count << '\n';
    


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
