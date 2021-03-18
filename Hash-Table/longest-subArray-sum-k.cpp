// #include <bits/stdc++.h>
// //For ordered_set
// #define MOD 1000000007
// #define test int t; cin>>t; while(t--)
// #define init(arr,val) memset(arr,val,sizeof(arr))
// #define loop(i,a,b) for(int i=a;i<b;i++)
// #define loopr(i,a,b) for(int i=a;i>=b;i--)
// #define loops(i,a,b,step) for(int i=a;i<b;i+=step)
// #define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
// #define ull unsigned long long int
// #define ll long long int
// #define P pair
// #define PLL pair<long long, long long>
// #define PII pair<int, int>
// #define PUU pair<unsigned long long int, unsigned long long int>
// #define L list
// #define V vector
// #define D deque
// #define ST set
// #define MS multiset
// #define M map
// #define UM unordered_map
// #define mp make_pair
// #define pb push_back
// #define pf push_front
// #define MM multimap
// #define F first
// #define S second
// #define IT iterator
// #define RIT reverse_iterator
// #define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
// #define FILE_READ_IN freopen("input.txt","r",stdin);
// #define FILE_READ_OUT freopen("output.txt","w",stdout);
// #define all(a) a.begin(),a.end()
// #define ld long double
// using namespace std;
// // For ordered_set

// template <typename T>

// const ll maxn = 1e5;
// const ll inf = 1e9;
// const double pi = acos(-1);

// int longestSubarray(int a[], int n,int k)
// {
//     unordered_map<int,int> m;
//     int pre=0;
//     int len = 0;

//     for(int i=0;i<n;i++)
//     {
//         pre += a[i];

//         if(pre==k)
//         {
//             len = max(len,i+1);
//         }
//         if(m.find(pre-k)!=m.end())
//         {
//             len = max(len, i-m[pre-k]);
//         }
//         else
//         {
//             m[pre] = i; 
//         }
//     }
//     return len;
// }

// int main(){

//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<< longestSubarray(a,n,k)<<endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }


bool isPrime(int n)
{
	if(n==1)
	return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}

int main() {
   
    int n;
    cin>>n;
    
    int num = getSum(n);

    if(isPrime(num))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
