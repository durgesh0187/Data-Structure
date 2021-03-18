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
int fib(int n, int dp[])
{
    // Base case
    if(n==0 || n==1)
    {
        return n;
    }

    // Top-down approach using dp

    if(dp[n]!=0)
    {
        return dp[n];
    }

    int ans;
    ans  = fib(n-1,dp) + fib(n-2,dp);

    return dp[n] = ans;
}


// Buttom-up approach 
int finBU(int n)
{
    int dp[100] = {0};
    dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


// Buttom-up approach with space optimized
int fibSpaceOpt(int n)
{
    if(n==1 || n==0)
    {
        return n;
    }

    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(){

    int n;
    cin>>n;
    int dp[100] = {0};
    //cout<< fib(n,dp)<<endl;
    //cout<< finBU(n)<<endl;
    cout<< fibSpaceOpt(n)<<endl;
    return 0;
}