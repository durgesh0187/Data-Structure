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


bool compare(pair<int,int>p1, pair<int,int>p2)
{
    return p1.second < p2.second;    
}

int main(){

    int t,s,e;
    cin>>t;
    vector<pair<int,int>> v;
    while(t--)
    {
        int n;
        cin>>n;
        while(n--)
        {
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }

        sort(v.begin(), v.end(), compare);

        int res =1;
        int fin = v[0].second;

        for(int i=1;i<n;i++)
        {
            if(v[i].first >= fin)
            {
                fin = v[i].second;
                res++;
            }
        }

        v.clear();

        cout<<res<<endl;
    }


    return 0;
}