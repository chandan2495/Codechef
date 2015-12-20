#include<bits/stdc++.h>

using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};

void LevelOrder(node * root)
{
  queue <node*> currentLvl,nextLvl,empty;
  currentLvl.push(root);
  while(!currentLvl.empty()){
      node *current=currentLvl.front();
      currentLvl.pop();
      printf("%d ",current->data);
      if(current->left!=NULL)
        nextLvl.push(current->left);
      if(current->right!=NULL)
        nextLvl.push(current->right);
      if(currentLvl.empty()){
          swap(currentLvl,nextLvl);
          swap(nextLvl,empty);
      }
  }
}
