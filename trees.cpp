#include<iostream>
#include "treeNode.h"
using namespace std;
void printTree(treeNode<int> *root){
cout<<root->data<<endl;
cout<<root->children.at(1)->data<<endl;
}
int main(){
    treeNode<int> * root=new treeNode<int>(10);
    treeNode<int> * node1=new treeNode<int>(20);
    treeNode<int> * node2=new treeNode<int>(30);
  root->children.push_back(root);
    root->children.push_back(node1);
    root->children.push_back(node2);

printTree(root);
}