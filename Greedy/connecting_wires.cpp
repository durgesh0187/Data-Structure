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


// Q-> There are n white and black dots equaly space 
//     you want to connect each white dots with some black dots and find minimum space




int main(){

    
    int n;
    cin>>n;
    int white[n];
    int black[n];
    for(int i=0;i<n;i++)
    {
        cin>>white[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>black[i];
    }


    int minSpace =0;
    sort(white,white+n);
    sort(black,black+n);

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            v.push_back(black[i]-white[j]);
        }
    }

    for(int i=0;i<v.size();i++)
    {
        minSpace += v[i];
    }

    cout<< minSpace<<endl;


    return 0;
}