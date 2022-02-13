#include <iostream> 
#include <list> 
using namespace std; 
 
class Graph 
{ 
int n;    
list<int> *c;   
void depth(int n, bool view[]);  
public: 
    
Graph(int n)
    {
 this->n = n; 
 c = new list<int>[n]; 
    }
     
void addEdge(int n, int w){
c[n].push_back(w); 
    }
     
void DFS();    
}; 
void Graph::depth(int n, bool view[]) 
{ 
     
view[n] = true; 
cout << n << " "; 
   
   
list<int>::iterator i; 
for(i = c[n].begin(); i != c[n].end(); ++i) 
if(!view[*i]) 
depth(*i, view); 
} 
   
 
void Graph::DFS() 
{ 
    
bool *view = new bool[n]; 
for (int i = 0; i < n; i++) 
view[i] = false; 
   
    
for (int i = 0; i < n; i++) 
if (view[i] == false) 
depth(i, view); 
} 
   
int main() 
{ 
    
Graph gdfs(4); 
gdfs.addEdge(0, 1); 
gdfs.addEdge(0, 2); 
gdfs.addEdge(0, 3);
gdfs.addEdge(1, 3); 
gdfs.addEdge(2, 3);
gdfs.addEdge(3, 3); 

 
cout << "Traversal : DFS "<<endl; 
gdfs.DFS(); 
   
return 0; 
}
