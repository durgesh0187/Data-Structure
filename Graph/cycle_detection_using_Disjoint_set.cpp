#include<bits/stdc++.h>
using namespace std;


class Graph{
    list<pair<int,int>>l;
    int v;

    public:
        Graph(int v)
        {
            this->v=v;
        }

        void addEdge(int u, int v)
        {
            l.push_back(make_pair(u,v));
        }

        // Find
        int findset(int i, int parent[])
        {
            // Base case
            if(parent[i]==-1)
            {
                return i;
            }
            return findset(parent[i],parent);
        }

        // Union set
        void union_set(int x, int y, int parent[])
        {
            int s1 = findset(x,parent);
            int s2 = findset(y, parent);

            if(s1!=s2)
            {
                parent[s1] = s2;
            }
        }

        bool contain_cycle()
        {
            // DSU logic to check if graph is cycle or not
            int *parent = new int[v];

            for(int i=0;i<v;i++)
            {
                parent[i] = -1;
            }

            // Itrate over edge list
            for(auto edge : l)
            {
                int i = edge.first;
                int j = edge.second;

                int s1= findset(i,parent);
                int s2= findset(j,parent);

                if(s1!=s2)
                {
                    union_set(s1,s2,parent);
                }
                else
                {
                    return true;
                }
            }
            delete []parent;
            return false;
        }

};

int main()
{
   
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,0);
    

    if(g.contain_cycle())
    {
        cout<<"Yes contain cycle"<<endl;
    }
    else
    {
        cout<<"Not dosent contain cycle"<<endl;
    }


    return 0;
}