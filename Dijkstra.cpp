/*

     _____________    _____________    _____________	          _____________    _____________
    (  ___________)  |  _________  )  (___________  )	         (___________  )  (  ___________)
    ( (		     | |         | )	          | )            	     ) )  ( (
    ( (___________   | |_________| )   ___________| )	          ___________) )  ( (___________
    (___________  )  |  ___________)  |  _________  )            (  ___________)  (  _________  )
                ) )  | |	      | |         | )  	         ( (              ( (         ) )
     ___________) )  | |___________   | |_________| )   ______   ( (___________   ( (_________) )
    (_____________)  |_____________)  |_____________)  (______)  (_____________)  (_____________)



    Name  : Abdus Sahid
    Don't give up until the last second.

    Topcoder handle : sea_26
    Codechef handle : sea_26

    Practice makes a man perfect.

*/

#pragma GCC optimize("03")
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;


template <typename T>
      using ordered_set = tree<T, null_type, less<T>,
          rb_tree_tag, tree_order_statistics_node_update>;


using ll = long long;
using ld = long double;

typedef pair<int, int> PII;
typedef pair<ll, int> PLI;
typedef pair<int, ll> PIL;
typedef pair<ll, ll> PLL;

typedef map<int, int> MII;
typedef map<ll, ll> MLL;
typedef map<PII, int> MPIII;
typedef map<string, int> MSI;

typedef ordered_set<int> OSI;
typedef ordered_set<ll> OSL;

const ll M = 1e9 + 7;
const ll M2 = 998244353;
const int Iinf = 0x3f3f3f3f;
const ll Linf = 0x3f3f3f3f3f3f3f3f;
const ld PI = acos(-1.0);
// const double pi = atan2(0, -1);
// const double PI = 4 * atan(1);
// const double pi = 2*cos(0.0);

#define mp make_pair
#define eb emplace_back
#define pf push_front
#define pb push_back
#define ppb pop_back()
#define fbo(ind) find_by_order(ind)
#define ook(val) order_of_key(val)
#define f first
#define s second
#define sz size()

#define bp(n) __builtin_popcount(n)
#define bclz(n) __builtin_clzll(n)
#define bctz(n) __builtin_ctzll(n)
#define bip(n) __builtin_parity(n)

#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define rvs(v) sort(all(v),greater<int>())
#define mnv(v) *min_element(all(v))
#define mxv(v) *max_element(all(v))
#define acm(v, ini) accumulate(all(v),ini)
#define uni(v) sort(all(v)),(v).erase(unique(all(v)), (v).end())
#define smp(container, element) (container.find(element) != container.end())
#define vp(container, element) (find(all(container),element) != container.end())

#define ub(v, k) upper_bound(all(v), k) - v.begin()
#define lb(v, k) lower_bound(all(v), k) - v.begin()
#define msz(a) memset(a, 0, sizeof(a))
#define msm(a) memset(a, 0xff, sizeof(a))
#define fpre(n) fixed << setprecision(n)
#define watch(x) cerr << (#x) << " is " << (x) << endl
#define sea template< typename T
#define tc int tt; cin >> tt; for(int t=1; t<=tt; t++)

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
sea > inline int Resetbit(T n, T Pos){ return n | (1 << Pos); }
sea > inline int Unsetbit(T n, T Pos){ return n & ~(1 << Pos); }
sea > inline int Flipbit(T n, T Pos){ return n ^ (1 << Pos); }

sea > inline T Max(T a, T b){ return a ^ ((a ^ b) & -(a < b)); }
sea > inline T Min(T a, T b){ return b ^ ((a ^ b) & -(a < b)); }
sea > inline void Swap(T &a, T &b){ a = ((a) ^= (b)),  b = ((b) ^= (a)),  a = ((a) ^= (b)); }
sea > inline T Sqr(T x){ return (x) * (x); }
sea > inline bool IsPoT(T x){ return (x != 0 and (x&(x - 1)) == 0); }

sea > bool Chkmax(T &a, const T b){ if(a < b){a = b; return true;} else return false; }
sea > bool Chkmin(T &a, const T b){ if(a > b){a = b; return true;} else return false; }

sea > T Gcd(T a, T b){ while(b) b ^= a ^= b ^= a %= b; return a; }
sea > T Exgcd(T a, T b, T& x, T& y){ if(!b){ x = 1; y = 0;return a;} else{ T g = Exgcd(b, a%b, y, x); y -= (a/b)*x; return g;}}
sea > inline T Lcm(T a, T b){ return (a / Gcd(a, b)) * b; }

sea > inline T Mod(T a, T b){ return a >= b ? a % b : a; }
sea > T Binpow(T n, T p){ T Res = 1; while(p > 0){ if(p & 1) Res *= n; n *= n; p >>= 1; } return Res;}   /// n^p
sea > T Powmod(T n, T p, T M){ n %= M; T Res = 1; while(p > 0){ if(p & 1) Res = ((Res%M)*(n%M))%M; n = ((n%M)*(n%M))%M; p >>= 1; } return Res;}  /// (n^p) % M
sea > T ModInv(T a, T m){ return Powmod(a, m-2, m); }
sea > T Mulmod(T a, T b, T M){ T x = 0, y = a % M; while(b > 0){ if(b&1) x = (x + y) % M; } y = (y << 1) % M; b >>= 1; }  /// (a*b) % M
V<ll> PN = {2, 3, 5, 7, 11, 13, 17, 19, 23};
bool Mrpt(const ll n){ if(n < 2) return false; if(n%2 == 0) return n == 2; ll s = 0, d = n-1; while(d&1) s++, d /= 2;for(auto a: PN){
        if(a > n-2) break; ll x = Powmod(a, d, n); if(x == 1 or x == n-1) continue;
        Rep(i, s-1){ x = Mulmod(x, x, n); if(x == 1) return false; if(x == n-1) goto next_it; } return false; next_it:; }
return true;
}
sea > inline T BinCof(T n, T k){ T Res = 1; if(k > n-k) k = n-k; for(T i=0 ;i<k ;i++){ Res *= (n-i); Res /= (i+1);} return Res; }

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
inline int Mul(int a, int b){ return (int)((long long) a * b % M);}



void ReadInput(void){
    //read();
}
/*
/// https://codeforces.com/contest/20/problem/C

/// Set version

const int N = 1e5 + 5;
V<PII > Adj[N];
set<PLI > St;
ll Dist[N];
int Pred[N];

class Task{
public:
    void Solve(istream& cin, ostream& cout){
        ReadInput();

        int n, m;
        cin >> n >> m;
        Rep(i, m){
            int u, v, w;
            cin >> u >> v >> w;
            --u;
            --v;
            Adj[u].pb({v, w});
            Adj[v].pb({u, w});
        }

        Rep(i, n) Dist[i] = Linf;
        Dist[0] = 0;
        St.insert({Dist[0], 0});
        while(!St.empty()){
            int u = St.begin() -> s;
            St.erase(St.begin());
            for(auto Edge : Adj[u]){
                int v = Edge.f;
                int w = Edge.s;
                if(Dist[u] + w < Dist[v]){
                    St.erase({Dist[v], v});
                    Dist[v] = Dist[u] + w;
                    Pred[v] = u;
                    St.insert({Dist[v], v});
                }
            }
        }
        if(Dist[n-1] == Linf){
            cout << -1 << endl;
            exit(0);
        }
        //Below Code segment will find the path from x to y;
        V<int> Path;
        for(int v = n-1; v != 0; v = Pred[v])
            Path.eb(v+1);
        Path.eb(1);
        reverse(all(Path));
        Rep(i, Path.sz) cout << Path[i] << " ";
        cout << endl;
    }
};
*/



/// https://codeforces.com/contest/954/submission/73483030


const int N = 1e3 + 10;
bool grid[N][N];

V<int> Dijkstra(int start, const VV<int> &Edges) {
        int n = (int) Edges.sz;
        V<int> dist(n, Iinf);
        priority_queue<PII> que;
        dist[start] = 0;
        que.push({0, start});
        while(!que.empty()){
                auto p = que.top();
                que.pop();
                int u = p.s;
                for(auto v : Edges[u]) {
                        if(dist[v] > dist[u] + 1) {
                            dist[v] = dist[u] + 1;
                            que.push({-dist[v], v});
                        }
                }
        }
        return dist;
}







/// https://codeforces.com/contest/20/problem/C

///Priority_queue version

const int N = 1e5 + 5;
V<PII > Adj[N];
MinHeap<PLI> PQ;
ll Dist[N];
int Par[N];

class Task{
public:
    void Solve(istream& cin, ostream& cout){
        ReadInput();

        int n, m;
        cin >> n >> m;
        Rep(i, m){
            int u, v, w;
            cin >> u >> v >> w;
            --u;
            --v;
            Adj[u].pb({v, w});
            Adj[v].pb({u, w});
        }
        Rep(i, n) Dist[i] = Linf;
        Dist[0] = 0;
        PQ.push({0, 0});
        while(!PQ.empty()){
            int u = PQ.top().s;
            ll Dist_u = PQ.top().f;
            PQ.pop();
            if(Dist_u != Dist[u]) continue;

            for(auto Edge : Adj[u]){
                int v = Edge.f;
                ll w = Edge.s;
                if(Dist[u] + w < Dist[v]){
                    Dist[v] = Dist[u] + w;
                    Par[v] = u;
                    PQ.push({Dist[v], v});
                }
            }
        }
        if(Dist[n-1] == Linf){
            cout << -1 << endl;
            exit(0);
        }
        V<int> Path;
        for(int v = n-1; v != 0; v = Par[v])
            Path.eb(v+1);
        Path.eb(1);
        reverse(all(Path));
        Rep(i, Path.sz) cout << Path[i] << " ";
        cout << endl;
    }
};




signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifdef LOCAL_DEFINE
        auto start_time = clock();
    #endif // LOCAL_DEFINE

    #ifdef LOCAL_DEFINE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif // LOCAL_DEFINE

    Task Problem;
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
/// https://codeforces.com/contest/20/problem/C
Errichto

#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef vector<int> vi;
const int inf = 1e18L + 5;

vii *G;
vi D,P;

void Dijkstra(int s,int N){
	D.assign(N+1,inf);
	P.assign(N+1,-1);
	D[s]=0;
	P[s]=-1;
	set<pii> Q;
	Q.insert({0,s});
	while(!Q.empty()){
		auto top=Q.begin();
		int u=top->second;
		Q.erase(top);
		if(u==N)return ;
		for(auto next:G[u]){
			int v=next.first,wt=next.second;
			if(D[v]>D[u]+wt){
				P[v]=u;
				Q.erase({D[v], v});
				D[v]=D[u]+wt;
				Q.insert({D[v], v});
			}
		}
	}
}
void print_shortest_path(int to){
	vi path;
	for(int i=to;i!=-1;i=P[i])path.push_back(i);
	reverse(path.begin(),path.end());
	for(auto i:path)printf("%lld ", i);
}
int32_t main(){
	int N,m; scanf("%lld%lld", &N, &m);
	G= new vii[N+1];
	for(int i=0;i<m;i++){
		int a,b,w;cin>>a>>b>>w;
		G[a].push_back({b,w});
		G[b].push_back({a,w});
	}
	Dijkstra(1,N);
	if(D[N]==inf)cout<<-1;
	else
		print_shortest_path(N);
	//cout<<D[N]<<"\n";

}

*/
