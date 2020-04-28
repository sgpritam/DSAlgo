#include<iostream>
#include<algorithm>
using namespace std;

class node{

public:

    int data;
    node*right;
    node*left;

    node(int d){

        data=d;
        left=NULL;
        right=NULL;

    }

};

void preorder(node*root){

    
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";

    
    preorder(root->left);
    preorder(root->right);

    return;

}


void PrintRange(node* root,int a,int b){

    if(root==NULL){
        return;
    }

    PrintRange(root->left,a,b);
    if(root->data<=b and root->data>=a){
        cout<<root->data<<" ";
    }
    PrintRange(root->right,a,b);
    return;

}

node* insert(node* root, int value){
	if(root==NULL){
		node *nn = new node(value);
		return nn;
	}
	if(value>root->data){
		root->right=insert(root->right, value);
	}else if(value<root->data){
		root->left=insert(root->left, value);
	}
	return root;
}

node* ArrToBST(int* arr, node* root, int n){
	for(int i=0; i<n; i++){
		root = insert(root,arr[i]);
	}
	return root;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];


        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        node* root=new node(arr[0]);
		root = ArrToBST(arr,root,n);
         int b,c;
         cin>>b>>c;

        cout<<"# Preorder : ";
        preorder(root);        
        cout<<endl<<"# Nodes within range are : ";
        PrintRange(root,b,c);
        cout<<endl;

    }    

}