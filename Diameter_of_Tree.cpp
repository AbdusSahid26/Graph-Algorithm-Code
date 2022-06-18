/*

     _____________    _____________    _____________	          _____________    _____________
    (  ___________)  |  _________  )  (___________  )	         (___________  )  (  ___________)
    ( (		     | |         | )	          | )            	     ) )  ( (
    ( (___________   | |_________| )   ___________| )	          ___________) )  ( (___________
    (___________  )  |  ___________)  |  _________  )            (  ___________)  (  _________  )
                ) )  | |	      | |         | )  	         ( (              ( (         ) )
     ___________) )  | |___________   | |_________| )   ______   ( (___________   ( (_________) )
    (_____________)  |_____________)  |_____________)  (______)  (_____________)  (_____________)



    Don't give up until the last second.

    Topcoder handle : sea_26
    Codechef handle : sea_26

    Practice makes a man perfect.
*/

//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//#pragma GCC optimize("unroll-loops")

//#pragma GCC optimize("03")
//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;


template<class T1, class T2>
    using Ordered_Set = tree<T1, null_type, T2,
        rb_tree_tag, tree_order_statistics_node_update>;


using ll = long long;
using ld = long double;

typedef pair<int, int> PII;
typedef pair<ll, int> PLI;
typedef pair<int, ll> PIL;
typedef pair<ll, ll> PLL;
typedef pair<string, int> PSI;

typedef map<int, int> MII;
typedef map<ll, ll> MLL;
typedef map<PII, int> MPIII;
typedef map<string, int> MSI;

const ll M = 1e9 + 7;
const ll M2 = 998244353;
const int Iinf = 0x3f3f3f3f;
const ll Linf = 0x3f3f3f3f3f3f3f3f;
const ld PI = acos(-1.0);
// const double pi = atan2(0, -1);
// const double PI = 4 * atan(1);
// const double pi = 2*cos(0.0);

#define pf push_front
#define ppb pop_back()
#define fbo(ind) find_by_order(ind)
#define ook(val) order_of_key(val)
#define f first
#define s second
#define sz size()

#define bp(n) __builtin_popcount(n)
#define bclz(n) __builtin_clz(n)
#define bctz(n) __builtin_ctzll(n)
#define bip(n) __builtin_parity(n)

#define All(v) (v).begin(),(v).end()
#define Rall(v) (v).rbegin(),(v).rend()
#define rvs(v) sort(All(v),greater<int>())
#define mnv(v) *min_element(All(v))
#define mxv(v) *max_element(All(v))
#define acm(v, ini) accumulate(All(v),ini)
#define smp(container, element) (container.find(element) != container.end())
#define vp(container, element) (find(All(container),element) != container.end())

#define ub(v, k) upper_bound(All(v), k) - v.begin()
#define lb(v, k) lower_bound(All(v), k) - v.begin()
#define msz(a) memset(a, 0, sizeof(a))
#define msm(a) memset(a, 0xff, sizeof(a))
#define fpre(n) fixed << setprecision(n)
#define watch(x) cerr << (#x) << " is " << (x) << endl
#define sea template< typename T
#define TC int tt; cin >> tt; for(int t=1; t<=tt; t++)

#define Rep(i, n) for(__typeof(n) i=0; i<n; i++)
#define Per(i, n) for(__typeof(n) i=n-1; i>=0; i--)
#define Lrep(i, p, q) for(__typeof(q) i=p; i<=q; i++)
#define Perl(i, p, q) for(__typeof(p) i=p; i>=q; i--)
#define IT(it, x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
#define RIT(it, x) for(__typeof((x).rbegin()) it = (x).rbegin(); it != (x).rend(); it++)

const int dx4[] = { +1, -1, +0, +0 };
const int dy4[] = { +0, +0, +1, -1 };
const int dx8[] = { +0, +0, +1, -1, -1, +1, -1, +1 };
const int dy8[] = { -1, +1, +0, +0, +1, +1, -1, -1 };

sea > using V = vector<T>;
sea > using VV = vector<vector<T> >;
sea > using MinHeap = priority_queue<T, vector<T>, greater<T> >;

sea > inline bool Checkbit(T n, T Pos){ return n & (1 << Pos); }
sea > inline T Resetbit(T n, T Pos){ return n | (1 << Pos); }
sea > inline T Unsetbit(T n, T Pos){ return n & ~(1 << Pos); }
sea > inline T Flipbit(T n, T Pos){ return n ^ (1 << Pos); }

sea > inline T Max(T a, T b){ return a ^ ((a ^ b) & -(a < b)); }
sea > inline T Min(T a, T b){ return b ^ ((a ^ b) & -(a < b)); }
sea > inline void Swap(T &a, T &b){ a = ((a) ^= (b)),  b = ((b) ^= (a)),  a = ((a) ^= (b)); }
sea > inline T Sqr(T x){ return (x) * (x); }
sea > inline bool IsPoT(T x){ return (x != 0 and (x & (x - 1)) == 0); }

sea > bool Chkmax(T &a, const T b){ if(a < b){a = b; return true;} else return false; }
sea > bool Chkmin(T &a, const T b){ if(a > b){a = b; return true;} else return false; }
sea > V<T> Compress(V<T> A){ sort(all(A)); A.erase(unique(all(A)), A.end()); return A;}

sea > T Gcd(T a, T b){ while(b) b ^= a ^= b ^= a %= b; return a; }
sea > T Exgcd(T a, T b, T& x, T& y){ if(!b){ x = 1; y = 0;return a;} else{ T g = Exgcd(b, a%b, y, x); y -= (a/b)*x; return g;}}
sea > inline T Lcm(T a, T b){ return (a / Gcd(a, b)) * b; }

sea > T Powmod(T n, T p, T M){ n %= M; T Res = 1; while(p > 0){ if(p & 1) Res = ((Res%M)*(n%M))%M; n = ((n%M)*(n%M))%M; p >>= 1; } return Res;}  /// (n^p) % M
sea > T ModInv(T a, T m){ return Powmod(a, m-2, m); }
sea > T Mulmod(T a, T b, T M){ T x = 0, y = a % M; while(b > 0){ if(b&1) x = (x + y) % M; } y = (y << 1) % M; b >>= 1; }  /// (a*b) % M

static inline bool Is_digit(char c){ return static_cast<unsigned char>(c - '0') < 10; }
static inline bool Is_upper(char c){ return static_cast<unsigned char>(c - 'A') < 26; }
static inline bool Is_lower(char c){ return static_cast<unsigned char>(c - 'a') < 26; }

namespace Input{
    sea > inline void read(T& x){
        bool Negative = false; register int c; x = 0; c = getchar();
        if(c == '-'){ Negative = true; c = getchar(); }
        for(; (c > 47 and c < 58); c = getchar()) x = (x << 3) + (x << 1) + c - 48; if(Negative) x *= -1;
    }
    sea, class... Ts> void read(T& t, Ts&... ts){ read(t); read(ts...); }
    sea > istream &operator>>(istream &is, vector<T> &vec){ for(auto &v : vec) is >> v; return is; }
}
using namespace Input;

inline void Add(int &a, int b){ a += b; if(a >= M) a -= M;}
inline void Sub(int &a, int b){ a -= b; if(a < 0) a += M;}
inline int Mul(int a, int b){ return (int)((ll) a * b % M);}


void Out(){
    cout << "wtf" << '\n';
}


void ReadInput(void){
    //read();
}


/// https://codeforces.com/contest/14/submission/81430363


V<int> distance_of_node(int n, int s, VV<int>& Edges){
    V<int> res(n);     /// res[s] = 0;
    queue<PII> que;
    que.push({s, -1}); /// (now, prev)
    while(!que.empty()){
        PII pa = que.front();
        que.pop();
        if(pa.s >= 0)
            res[pa.f] = 1 + res[pa.s];
        for(auto x: Edges[pa.f]){
            if(x == pa.s) continue;
            que.push({x, pa.f});
        }
    }
    return res;
}

PII diameter_of_tree(int n, int s, VV<int>& Edges){
    V<int> dist = distance_of_node(n, s, Edges);
    int first_node = max_element(All(dist)) - dist.begin();

    dist = distance_of_node(n, first_node, Edges);
    int second_node = max_element(All(dist)) - dist.begin();
    return make_pair(first_node, second_node);
}


class TreeDestruction{
public:
    void Solve(istream& cin, ostream& cout){

        ReadInput();

        int n;
        cin >> n;
        VV<int> Edges(n);
        Rep(i, n-1){
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            Edges[u].emplace_back(v);
            Edges[v].emplace_back(u);
        }

        int fromNode, toNode;
        fromNode = get<0> (diameter_of_tree(n, 0, Edges));
        toNode = get<1> (diameter_of_tree(n, 0, Edges));
        //tie(s, t) = diameter_of_tree(n, 0, Edges);

        V<int> ds = distance_of_node(n, fromNode, Edges);
        V<int> dt = distance_of_node(n, toNode, Edges);


        cout << fromNode << " " << toNode << endl;
        cout << "Diameter : " << mxv(ds) << endl;

    }
};



signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifdef LOCAL_DEFINE
    auto start_time = clock();
#endif // LOCAL_DEFINE

#ifdef INPUT
    freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
#endif

    TreeDestruction Problem;
    std::istream& in(std::cin);
    std::ostream& out(std::cout);
    Problem.Solve(in, out);

#ifdef LOCAL_DEFINE
    auto end_time = clock();
        cerr << "\nTime Elapsed: " << fpre(3) << 1.0 * (end_time - start_time) / CLOCKS_PER_SEC  << " Sec"<< endl;
#endif // LOCAL_DEFINE

    return 0;
}

/*

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

const int N = 2e5;

vector<int> g[N];
int dist[N];

void dfs(int u, int p) {
  for (int v : g[u]) if (v != p) {
    dist[v] = dist[u] + 1;
    dfs(v, u);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> deg(n);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(0, -1);
  int u = max_element(dist, dist + n) - dist;
  dist[u] = 0;
  dfs(u, -1);
  vector<int> du(dist, dist + n);
  int v = max_element(dist, dist + n) - dist;
  dist[v] = 0;
  dfs(v, -1);
  vector<int> dv(dist, dist + n);

}


*/


/*

const int N = 2e5 + 10;
int Par[N];
int Visited[N];
int Dep[N];
V<int> Edges[N];

void dfs(int child, int papa, int dep){
    Par[child] = papa;
    Dep[child] = dep;
    for(auto x: Edges[child]){
        if(x == papa) continue;
        dfs(x, child, dep + 1);
    }
}


class ThreePathsOnATree{
public:
    void Solve(istream& cin, ostream& cout){

        ReadInput();


        int n;
        cin >> n;
        Rep(i, n-1){
            int x, y;
            cin >> x >> y;
            Edges[x].emplace_back(y);
            Edges[y].emplace_back(x);
        }

        int a = 1, b = 1, c = 1;
        dfs(1, 0, 0);

        Lrep(i, 1, n){
            if(Dep[i] > Dep[a])
                a = i;
        }

        msz(Dep);
        dfs(a, 0, 0);
        Lrep(i, 1, n){
            if(Dep[i] > Dep[b])
                b = i;
        }

*/


/*

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> Edges;
vector<int> dist;

void dfs(int child, int papa, int d){
    dist[child] = d;
    for(auto x: Edges[child]){
        if(x == papa) continue;
        dfs(x, child, d + 1);
    }
}

int diameter(int node){
    int n = Edges.size();
    dist.assign(n, -1);
    dfs(node, -1, 0);
    int u = max_element(dist.begin(), dist.end()) - dist.begin();
    //dist.assign(n, -1);
    fill(dist.begin(), dist.end(), -1);
    dfs(u, -1, 0);
    return *max_element(dist.begin(), dist.end());
}


int main(){

    int n;
    cin >> n;
    vector<int> u(n), v(n);
    for(int i=0; i<n-1; i++){
        cin >> u[i] >> v[i];
        --u[i];
        --v[i];
    }

    int res = 0;
    for(int i=0; i<n-1; i++){
        Edges.assign(n, {});
        for(int j=0; j<n-1; j++){
            if(i == j) continue;
            Edges[u[j]].emplace_back(v[j]);
            Edges[v[j]].emplace_back(u[j]);
        }
        res = max(res, diameter(u[i])* diameter(v[i]));
    }
    cout << res << '\n';

return 0;
}


*/
