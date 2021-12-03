#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    int source;
    int dest;
    int weight;

};
void compare()
void kruskal(edge *input,int n,int e)
{
    sort(input,input+e,compare);
}
int main()
{
    int n,E;
    cin>>n>>E;
    edge *input=new edge[E];
   for(int i=0;i<E;i++)
   {
    int s,d,w; 
    cin>>s>>d>>w;
    input->source=s;
    input->dest=d;
    input->weight=w;
   }
}