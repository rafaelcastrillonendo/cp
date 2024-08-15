#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define forn(i, a, b) for (int i = (a); i < (b); i++)
#define for_(i, a, b) for (int i = (a); i <= (b); i++)
typedef long long ll;
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) int(x.size())
#define MAX_N 200005
const int MOD = 1e9+7;
#define logbase3(i) floor(log(i)/log(3))+1
typedef pair<int,int> pii;
const vector<int> dx = {0, 1, 0, -1}; 
const vector<int> dy = {1, 0, -1, 0}; 
int64_t fact[MAX_N];
#define TEST_CASES() int t; cin >> t; while(t--)

ll inverse(ll a, ll b) {
    ll r = 1;
    while(b > 0) {
        if(b & 1) r = (r * a) % MOD;
        b /= 2;
        a = (a * a) % MOD; 
    }
    return r;
}

void preComputeFactorial(){
    fact[0] = 1; 
    for(ll i = 1; i < MAX_N; ++i) fact[i] = (fact[i - 1] * i) % MOD;
}

long long binomial_coefficient(int n, int k) {
    if(n < k) return 0LL;
    return (fact[n] * inverse((fact[n - k] * fact[k]) % MOD, MOD - 2)) % MOD;
}

char tlwer(char aux){
    aux = tolower(aux);
    return aux;
}
char tpr(char aux){
    aux = toupper(aux);
    return aux;
}
void trimTrailingSpaces(string& str) {
    size_t end = str.find_last_not_of(" ");
    if (end != string::npos) {
        str.erase(end + 1); 
    } else {
        str.clear(); 
    }
}




int main() {
    Fast;
    solve();
    
    return 0;
}
