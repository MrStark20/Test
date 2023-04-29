/*Jai Sree Krishna*/
/*Swagnik_Dhar */
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define ul unsigned long int
#define mod 1000000007
#define mod1 998244353
#define INF 1e18
#define mxx 2e5
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define bck back
#define lb *lower_bound
#define mp make_pair
#define minele *min_element
#define maxele *max_element
#define ff first
#define ss second
#define endl '\n'
#define pi 3.1415926535897932384621000000000
#define mem(a,b) memset(a, b, sizeof(a) )
#define f(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define uniq(v)  (v).erase(unique(all(v)),(v).end())
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define rev(v)              reverse(v.begin(),v.end())
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define debug(x) cout<< #x << "  " << x <<endl;
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)x.size()
const ll inf = 1e18;
using namespace std;
void init_code() {
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("Codeoutput.txt", "w", stdout);
#endif
}
//-----------------------------------------------------------------------------//
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll num1, ll num2) {return (num1 / gcd(num1, num2)) * num2;}
ll maxx(ll a, ll b) { return (a > b) ? a : b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
// unique(string.begin(),string.end())-> always returns an iterator .
// Convert Number(Num) direct to binary -> cout << bitset   <8>(num) << endl;
// cout << setprecision(10) << fixed;
// we use: __builtin_popcount(Given number); to count the number of set bits in it.
//-----------------------------------------------------------------------------//
using namespace std;
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int smalloutput = factorial(n - 1);
    return n * smalloutput;
}
int digit(ll n) {
    return log10(n) + 1;
}
bool chkprime(ll n) {
    ll cnt = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) {
                cnt++;
            }
        }
        if (cnt > 2) {
            return false;
        }
    }
    return true;
}
//Without DP approach
// int cnt = 0;
// int rec(int n) {
//     cnt++;
//     if (n == 1 or n == 2) {
//         return 1;
//     } else {
//         return rec(n - 1) + rec(n - 2);
//     }
// }
//Binary Exponentiation
ll fast_power(ll base, ll power, ll MOD) {
    if (power == 0)
        return 1;
    if (power == 1)
        return base % MOD;
    ll result = fast_power(base, power / 2, MOD) % MOD;
    if (power % 2 == 0)
        return ((result % MOD) * (result % MOD)) % MOD;
    ll a = ((result % MOD) * (base % MOD)) % MOD;
    a = ((a % MOD) * (result % MOD)) % MOD;
    return a % MOD;
}
// Seive of Eratosthenes
vector<int>arr;

int num = 100000;
bool seive[100001];
void createseive() {
    for (int i = 2; i <= num; i++) {
        seive[i] = true;
    }
    for (int i = 2; i * i <= num; i++) {
        if (seive[i] == true) {
            for (int j = i * i; j <= num; j += i) {
                seive[j] = false;
            }
        }
    }
    for (int i = 0; i < num; i++) {
        if (seive[i] == true) {
            arr.pb(i);
        }
    }
}
bool pattrnchack(vector<vector<char>>& a, vector<vector<char>>& b, int r, int c, int i, int j) {
    // for (int ai = 0; ai < r; ai++) {
    //     for (int aj = 0; aj < c; aj++) {
    for (int ai = 0; ai < r; ai++) {
        int bi = (ai + i) % r;
        for (int aj = 0; aj < c; aj++) {
            int bj = (aj + j) % c;
            if (a[ai][aj] != b[bi][bj])
                return false;
        }
    }
    return true;
}
void solve() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> a(r, vector<char>(c)), b(r, vector<char>(c));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (pattrnchack(a, b, r, c, i, j)) {
                cout << "Yes";
                return ;
            }
        }
    }
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         cout << a[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++) {
    //         cout << b[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    cout << "No" << endl;
    return;
}
//     int h , w;cin>>h>>w;
// int arr[h][w];
// int arr2[h][w];
// for(int i=0;i<h;i++){
//     for(int j=0;j<w;j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i=0;i<h;i++){
//     for(int j=0;j<w;j++){
//         cin>>arr2[i][j];
//     }
// }
// int i= 0,j=0,
int main() {
    //createseive();
    init_code();
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
//node* root=NULL;
//creating a tree;
//root =buildtree();
//   cout << fixed << setprecision(12);
//   cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}