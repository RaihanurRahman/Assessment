#include <bits/stdc++.h>
using namespace std;
// #include <bits/stdtr1c++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
 
 
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
 
/// Typedef
typedef long long           ll;
typedef unsigned long       ul;
typedef unsigned long long  ull;
typedef vector<int>         vi;
typedef vector<vi>          vvi;
typedef vector<ll>          vll;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
 
#define mt                  make_tuple
#define fbo                 find_by_order
#define ook                 order_of_key
#define UB                  upper_bound
#define LB                  lower_bound
#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define ff                  first
#define ss                  second
#define sf                  scanf
#define pf                  printf
#define loop(i, y)          for(int i=0; i<int(y); i++)
#define FOR(i, x, y)        for(int i=int(x); i<int(y); i++)
#define ROF(i, x, y)        for(int i=int(x); i>=int(y); i--)
#define all(c)              c.begin(), c.end()
#define sz(c)               int(c.size())
#define SQR(x)              ((x)*(x))
#define clr(x, y)           memset(x, y, sizeof(x))
#define si(x)               scanf("%d", &x)
#define sii(x, y)           scanf("%d %d", &x, &y)
#define siii(x, y, z)       scanf("%d %d %d", &x, &y, &z)
#define sl(x)               scanf("%lld", &x)
#define sll(x, y)           scanf("%lld %lld", &x, &y)
#define slll(x, y, z)       scanf("%lld %lld %lld", &x, &y, &z)
#define FastIO              ios_base::sync_with_stdio(false)
#define FixedPrecision(x)   ios_base::sync_with_stdio(false); cout.setf(ios::fixed); cout.precision(x); cin.tie(0);
#define bitCheck(N,in)      ((bool)(N&(1LL<<(in))))
#define bitOff(N,in)        (N&(~(1LL<<(in))))
#define bitOn(N,in)         (N|(1LL<<(in)))
#define bitFlip(a,k)        (a^(1LL<<(k)))
#define popCount(x)         __builtin_popcount(x)
#define popCountLL(x)       __builtin_popcountll(x)
#define int2Bin(x, y)       bitset<y> z=x; cout<<z.to_string()<<endl;
#define tr(it, container)   for(auto it = container.begin(); it != container.end(); it++)
#define unq(v)              (v).erase(unique(all(v)),v.end())
#define common(a,b)         sort(all(a)), sort(all(b)), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b)       sort(all(a)), sort(all(b)), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
#define DB(x)               cout << #x << " = " << x << endl
#define DDB(x,y)            cout << #x << " = " << x << "   " << #y << " = " << y << endl
#define DDDB(x,y,z)         cout << #x << " = " << x << "   " << #y << " = " << y << "   " << #z << " = " << z << endl
#define ran(a, b)           ((((rand() << 15) ^ rand()) % ((b) - (a) + 1)) + (a))
/// template <typename T> using orderset = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
/// *X.find_by_order(k) //returns the kth largest element.(0-based)
/// X.order_of_key(val) //returns the no. of values less than val
 
#define MAX 200005
int A[104],B[104],ans[204];
int main(){
    #ifdef VAMP
        clock_t tStart = clock();
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string a,b;
    cin>>a>>b;
    reverse(all(a));
    reverse(all(b));

    int len1 = a.length(), len2 = b.length(),len=0,rem = 0,sum;
    int mx = max(len1,len2);
    FOR(i,0,mx){
        if(len1==len2 || (i<len1 && i<len2)){
            sum = rem + (a[i]-'0') + (b[i]-'0');
        }
        else if(i>=len1){
            sum = rem + (b[i]-'0');
        }
        else if(i>=len2) sum = rem + (a[i]-'0');

        ans[len++] = sum%10;
        rem = sum/10;
    }

    FOR(i,0,mx){
        cout<<ans[len-i-1];
    }
    cout<<endl;
    #ifdef VAMP
       printf("\n>>Runtime: %.10f\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}