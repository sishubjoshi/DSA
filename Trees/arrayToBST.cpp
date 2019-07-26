#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val = 0) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void insert(Node** root, int val) {

    if(*root == NULL)
         *root = new Node(val);
    else if((*root)->data > val)
        insert(&((*root)->left), val);
    else if((*root)->data < val)
        insert(&((*root)->right), val);
}

Node* getBST(int *arr, int n) {

    Node *root;

    for(int i=0; i<n; i++)
        insert(&root, arr[i]);

    return root;
}

void display(Node** root) {
    queue<Node**> q;
    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data;
        if(temp->left != NULL)
            q.push(temp->left);
        else if(temp->right != NULL)
            q.push(temp->right);
    }
}
int main() {

    int arr[] = {123,1,214,13,213,123,12,312,311,3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    Node *root;

    root = getBST(arr, n);

    display(&root);

return 0;
}