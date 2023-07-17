#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void rootOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* temp =  q.front();
        q.pop();
        if(temp != NULL)
        {
            cout<<temp -> data<<" ";
            if(temp -> left)
            {
                q.push(temp -> left);

            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }
        
        }

        else
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        
    }

}

void preOrder(Node* root)
{
    if(root == NULL)
        return;

    cout<<root -> data<<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void inOrder(Node* root)
{
    if(root == NULL)
    return;

    inOrder(root -> left);
    cout<<root -> data<<" ";
    inOrder(root -> right);
}

void postOrder(Node* root)
{
    if(root == NULL)
    return;

    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root -> data<<" ";
}

Node* insertIntoBST(Node* root , int data)
{
    // base case (agar root null hai yaani usko root bana do)
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if(data < root -> data)
    {
        root -> left = insertIntoBST(root -> left, data);

    }
    else
    {
        root -> right = insertIntoBST(root -> right, data);
    }
    return root;
}

void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data != -1)
    {
        root = insertIntoBST(root , data);
        cin>>data;
    }
}

int main()
{
    Node* root = NULL;
    cout<<"enter data for creation of BST"<<endl;
    takeInput(root);
    cout<<"root order traversal"<<endl;
    rootOrderTraversal(root);
    cout<<endl;
    cout<<"preorder traversal is :"<<endl;
    preOrder(root);

    cout<<endl<<"inorder traversal is: "<<endl;
    inOrder(root);
    cout<<endl<<"post order traversal is : "<<endl;
    postOrder(root);

}



// 10 8 21 7 27 5 4 3 -1