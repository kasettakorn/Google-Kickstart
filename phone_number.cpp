#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; i++)
#define ROF(i,a,b) for(int i=b-1; i>=a; i--)
#define SORT(a,n) sort(a, a+n)
#define SORTR(a,n) sort(a, a+n, greater<int>())

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

void readNumber(int n) {
  switch(n)
    {
        case 1 : cout << "one ";   break;
        case 2 : cout << "two ";   break;
        case 3 : cout << "three "; break;
        case 4 : cout << "four ";  break;
        case 5 : cout << "five ";  break;
        case 6 : cout << "six ";  break;
        case 7 : cout << "seven ";  break;
        case 8 : cout << "eight ";  break;
        case 9 : cout << "nine ";  break;
        case 0 : cout << "zero ";  break;
    }
}
void readFormat(int n) {
  switch(n)
    {
        case 2 : cout << "double "; break;
        case 3 : cout << "triple "; break;
        case 4 : cout << "quadruple "; break;
        case 5 : cout << "quintuple "; break;
        case 6 : cout << "sextuple ";  break;
        case 7 : cout << "septuple ";  break;
        case 8 : cout << "octuple ";   break;
        case 9 : cout << "nonuple ";   break;
        case 10 : cout << "decuple ";  break;
    }
}

void solve(int tc)
{
    cout << "Case #" << tc << ": ";
    string str, formats, temp_str;
    cin >> str >> formats;
    vi token;
    vs tokenize;
    stringstream check(formats);

    while(getline(check, temp_str, '-')) {
        token.push_back(stoi(temp_str));
    }

    int sum = 0;
    FOR(i,1,token.size()+1) {
        if(i == 1) {
            tokenize.push_back(str.substr(0, token[0]));
            sum += token[0];
        }
        else {
            tokenize.push_back(str.substr(sum, token[i-1]));
            sum += token[i-1];
        }


    }

    FOR(i,0,tokenize.size()) {
        int c=1;
        FOR(j,1,tokenize[i].size()+1) {

            if (j == tokenize[i].size() || tokenize[i][j-1]-'0' != tokenize[i][j]-'0') {
                readFormat(c);
                readNumber(tokenize[i][j-1]-'0');
                c=1;
            }
            else {
                c++;
            }
        }

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
