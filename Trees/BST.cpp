#include<iostream>
#include<queue>
using namespace std;

struct BstNode {

int data;
BstNode *left, *right;

};

BstNode *getNewNode(int data) {
 BstNode *temp = new BstNode;
temp->data  = data;
temp->left = temp->right = NULL;
return temp;
}

BstNode* Insert(BstNode *root, int data) {
 
if(root == NULL) {
//cout << "node inserted\n";
  return getNewNode(data);
}

else if(data <= root->data) {
 root->left = Insert(root->left, data);
} else {
 root->right = Insert(root->right, data);
}

return root;
}


void Inorder(BstNode *root) {

 if(root == NULL) return;

Inorder(root->left);
cout << root->data << " -> ";
Inorder(root->right);

}

void PostOrder(BstNode *root) 
{
 if(root == NULL) return;

PostOrder(root->left);
PostOrder(root->right);
cout << root->data << " -> ";
} 

void PreOrder(BstNode *root) 
{
 if(root == NULL) return;

cout << root->data << " -> ";
PreOrder(root->left);
PreOrder(root->right);
}


int FindMin(BstNode *root) {
 
 if(root == NULL) return -1;

 if(root->left == NULL) return root->data;

return FindMin(root->left);
 
}

int FindMax(BstNode *root) {

if(root == NULL) return -1;

if(root->right == NULL)return root->data;


return FindMax(root->right);

}


int HeightOfTree(BstNode *root)
{
 if(root == NULL) return -1;

return max(HeightOfTree(root->left), HeightOfTree(root->right)) + 1;
}


void LevelOrderTraversal(BstNode *root) 
{
 if(root == NULL) return;

queue<BstNode*> Q;

Q.push(root);

while(!Q.empty()) {
 BstNode *current = Q.front();
cout << current->data << " ";
if(current->left != NULL) Q.push(current->left);
if(current->right != NULL) Q.push(current->right);
Q.pop();
}

}
int main() {

  BstNode *root = NULL;
root =  Insert(root, 50);
root = Insert(root, 30);
root = Insert(root, 20);
Insert(root, 40);
Insert(root, 70);
Insert(root, 60);
Insert(root, 80);
cout << "display\n";
//Inorder(root);

//cout << "Minimum: " << FindMin(root) << endl;
//cout << "Maximum: " << FindMax(root) << endl;
Inorder(root);
cout << endl;
PostOrder(root);
cout << endl;

//cout << "Height of the tree: " << HeightOfTree(root) << endl;


cout << "Level Order Traversal: "; LevelOrderTraversal(root);


return 0;
}
