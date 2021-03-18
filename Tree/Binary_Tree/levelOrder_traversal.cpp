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


int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }

    int ls = height(root->left);
    int rs = height(root->right);

    return max(ls,rs)+1;
}


// Print Kth level node in tree
void printKthLevel(node*root, int k)
{
    if(root==NULL)
    {
        return;
    }

    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }

    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
    return;
}

// Print LevelOrder traversal  time complexity = O(n2)
void printAllLevel(node*root)
{
    int h = height(root);
    for(int i=1;i<=h;i++)
    {
        printKthLevel(root,i);
        cout<<endl;
    }
    return;
}

// print LevelOrder traversal using BFS in time complexity = O(n)
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

    node *root = buildPreorder();


    //printAllLevel(root);
    bfs(root);

    return 0;
}