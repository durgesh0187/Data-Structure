#include <bits/stdc++.h>
//For ordered_set
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define ld long double
using namespace std;
// For ordered_set

template <typename T>

const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);


// Top-down approach
int ladder(int n, int k, int dp[])
{
    // Base case
    if(n==0)
    {
        return 1;
    }

    //dp 
    if(dp[n]!=0)
    {
        return dp[n];
    }

    // Rec case
    int ways = 0;
    for(int i=1;i<=k;i++)
    {
        if(n-i>=0)
        {
            ways += ladder(n-i,k,dp);
        }
    }
    return dp[n] = ways;
}

int main(){

    int n,k;
    cin>>n>>k;
    int dp[100] = {0};
    cout<< ladder(n,k,dp) <<endl;
    return 0;
}