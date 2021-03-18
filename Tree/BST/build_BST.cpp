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


// Build Search tree

node *insertIndBST(node*root, int data){
    // Base case
    if(root==NULL)
    {
        return new node(data);
    }

    // Rec case insert in the subtree and updated pointer
    if(data<=root->data)
    {
        root->left = insertIndBST(root->left,data);
    }
    else
    {
        root->right = insertIndBST(root->right,data);
    }
    
    return root;
}


node *buildBST()
{
    int d;
    cin>>d;
    node * root = NULL;
    while(d!=-1)
    {
        root = insertIndBST(root,d);
        cin>>d;
    }
    return root;
}




void bfs(node*root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node *f = q.front();
        cout<< f->data<<" ";
        q.pop();
        
        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);
        }

    }
    
    return;
}



int main(){

    node *root = buildBST();

    bfs(root);

    return 0;
}