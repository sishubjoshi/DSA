#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

struct Node {
    int data;
    Node *left;
    Node *right;
}*root;

class BST {

    
    public:
    BST() {
        root = NULL;
    }
    void insert(Node *, Node *);
    void display(Node *, int);
};


void BST :: insert(Node * tree, Node *temp) {

    if(root == NULL) {
        root = temp;
        root->left = NULL;
        root->right = NULL;
        cout<<root->data<<" node is inserted!!\n";
        return;
    }

    if(tree->data == temp->data) {
        cout<<"Element is already present in the tree.\n";
        return;
    }
    if(tree->data > temp->data) {

        if(tree->left != NULL) {

            insert(tree->left, temp);

        } else {
            tree->left = temp;
            (tree->left)->left = NULL;
            (tree->left)->right = NULL;
            cout<<"Node added to the left.\n";
            return;

        }

    } else {

        if(tree->right != NULL) {

            insert(tree->right, temp);

        } else {

            tree->right = temp;
            tree->right->left = NULL;
            tree->right->right = NULL;
            cout<<"Node added to the right.\n";
            return;
        }
    }
    
    

} 

void BST:: display(Node *ptr, int level)
{
    int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level;i++)
                cout<<"       ";
	}
        cout<<ptr->data;
        display(ptr->left, level+1);
    }
}

int main() {

    int choice, num;
    BST bst;
    Node *temp;

    while(true) {

        cin>>choice;
        switch(choice) {

                case 1:
                    temp = new Node;
                    cin >> num;
                    temp->data = num;
                    bst.insert(root,temp);
                    break;
                case 2:
                    bst.display(root, 1);
                    break;
        }
    }
    



    return 0;
}
