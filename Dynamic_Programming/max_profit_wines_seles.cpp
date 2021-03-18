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
int profit(int wines[], int i, int j, int y, int dp[][100])
{
    // Base case
    if(i>j)
    {
        return 0;
    }

    // return if dp[i][j]
    if(dp[i][j]!=0)
    {
        return dp[i][j];
    }

    int op1 = wines[i]*y + profit(wines, i+1, j, y+1, dp);
    int op2 = wines[j]*y + profit(wines, i, j-1, y+1, dp);

    return dp[i][j] = max(op1,op2);
}

int main(){

    int wines[] = {2,3,5,1,4};
    int dp[100][100] = {0};
    int n = sizeof(wines)/sizeof(int);
    int y=1;

    cout<< profit(wines,0,n-1,y,dp)<<endl;

    return 0;
}