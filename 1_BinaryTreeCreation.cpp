#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* root)
{
    cout<<"enter data "<<endl;
    int data;
    cin>>data; 
    root = new Node(data);

    if(data == -1)
        return NULL;
    
    cout<<"enter value to be inserted at left of "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"enter value to be inserted at right of "<<data<<endl;
    root -> right = buildTree(root -> right);

    return root;

}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);

    //adding separator
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp ==  NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<< temp -> data <<" ";
            if(temp -> left)
            {
                q.push(temp-> left);
            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }
    }
}

void inorder(Node* root)
{
    // base case
    if( root == NULL)
        return;
    
    inorder(root -> left);
    cout<< root -> data<< " ";
    inorder(root -> right);
}

void preorder(Node* root)  // nlr
{
    //base case
    if(root == NULL)
        return;
    
    cout<< root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(Node* root)   // lrn
{
    // base case
    if(root  == NULL)
        return;
        
    postorder(root -> left);
    postorder(root -> right);
    cout<< root -> data << " ";
    
}


//5 4 -1 -1 7 9 -1 -1 -1
// 1 3 7 -1 -1 -1 5 17 -1 -1 -1
int main()
{
    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    cout<<"inorder traversal is : "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal is:"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal is: "<<endl;
    postorder(root);
    cout<<endl;
}