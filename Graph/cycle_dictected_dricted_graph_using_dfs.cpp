#include<bits/stdc++.h>
using namespace std;


class Graph{
    list<int> *l;
    int v;

    public:
        Graph(int v)
        {
            this->v=v;
            l = new list<int> [v];
        }

        void addEdge(int x, int y, bool dricted = true)
        {
            l[x].push_back(y);
            if(!dricted)
            {
                l[y].push_back(x);
            }
        }

        bool cycle_helper(int node,bool *visited, int parent)
        {
            // visit a node
            visited[node] = true;
            for(int nbr : l[node])
            {
                if(!visited[nbr])
                {
                    bool cycle_mila = cycle_helper(nbr,visited,node);

                    if(cycle_mila==true)
                    {
                        return true;
                    }
                }
                else if(nbr!=parent)
                {
                    return true;
                }
            }
            return false;
        }

        bool contain_cycle()
        {
            bool *visited = new bool[v];
            bool *stack = new bool[v];

            for(int i=0;i<v;i++)
            {
                visited[i] = false;
            }
            return cycle_helper(0,visited,-1);
        }

};

int main()
{
   
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(1,5);
    g.addEdge(5,6);
    g.addEdge(4,2);

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