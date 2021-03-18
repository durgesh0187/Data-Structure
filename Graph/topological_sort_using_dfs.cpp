#include<bits/stdc++.h>
using namespace std;

// Weighted graph and dricted graph implement using hashmap

class Graph{
   map<string, list<string> >l;

   public:
        void addEdge(string x, string y)
        {
            l[x].push_back(y);
            //l[y].push_back(x);
        }

        void dfs_helper(string src, map<string,bool>&visited, list<string> &ordering)
        {
            visited[src] = true;

            for(auto nbr : l[src])
            {
                if(!visited[nbr])
                {
                    dfs_helper(nbr,visited,ordering);
                }
            }
            ordering.push_front(src);
        }

        void dfs()
        {
            map<string ,bool> visited;
            list<string> ordering;
            for(auto p:l)
            {
                string node = p.first;
                visited[node] = false;
            }
            
           
            for(auto p:l)
            {
                string node = p.first;
                if(!visited[node])
                {
                    dfs_helper(node,visited,ordering);
                }
            }

            for(auto node: ordering)
            {
                cout<< node<<endl;
            }
        }
};

int main()
{
   
    Graph g;
    g.addEdge("Python","DataPreprocessing");
    g.addEdge("Python","Pytorch");
    g.addEdge("Python","ML");
    g.addEdge("DataPreprocessing","ML");
    g.addEdge("Python","DL");
    g.addEdge("ML","DL");
    g.addEdge("DL","FaceRecogn");
    g.addEdge("DataSet","FaceRecogn");

    g.dfs();


    return 0;
}