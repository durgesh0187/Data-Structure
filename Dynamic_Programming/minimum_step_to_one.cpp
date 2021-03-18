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
int minStep(int n, int dp[])
{
    // Base case
    if(n==1)
    {
        return 0;
    }

    // Res case
    // Look if n is already computed
    if(dp[n]!=0)
    {
        return dp[n];
    }

    // Compute if dp[n] is not know (for first)

    int op1,op2,op3;
    op1=op2=op3 = INT_MAX;

    if(n%3==0)
    {
        op1 = minStep(n/3,dp) + 1;
    }
    if(n%2==0)
    {
        op2 = minStep(n/2,dp) + 1;
    }
    op3 = minStep(n-1,dp) + 1;

    int ans = min(min(op1,op2),op3);

    return dp[n] = ans;
}



// Bottum-up approach 
int minStepBU(int n)
{
    int dp[100] = {0};
    dp[1] = 0;

    for(int i=2;i<=n;i++)
    {
        int op1,op2,op3;
        op1=op2=op3 = INT_MAX;

        if(n%3==0)
        {
            op1 = dp[i/3];
        }
        if(n%2==0)
        {
            op2 = dp[i/2];
        }
        op3 = dp[i-1];

        dp[i] = min(min(op1,op2),op3) + 1;
    }
    return dp[n];
}







int main(){

    int n;
    cin>>n;
    int dp[100] = {0};

    cout<< minStep(n,dp)<<endl;
    //cout<< minStepBU(n)<<endl;


    return 0;
}