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



// create a tree class 

class node{
    public:
        int data;
        node *left;
        node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};


// Build tree using preorder

node *buildPreorder(){
    int d;
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    node *root = new node(d);
    root->left = buildPreorder();
    root->right = buildPreorder();

    return root;
}


// Print preorder traversal
void print(node*root)
{
    if(root==NULL)
    {
        return;
    }

    print(root->left);
    cout<< root->data <<" ";
    print(root->right);
}


int main(){

    node *root = buildPreorder();
    print(root);

    return 0;
}