#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node (int d)
    {
        data=d;
        left=right=NULL;
    }
};
node* preIno(int *inorder,int * preorder,int s,int e){
    static int i=0;
    //base case
    if(s>e)
        return NULL ;
    //rec
    node *root=new node(preorder[i]);
    int index=-1;
    for(int j=s;j<=e;j++)
        if(inorder[j]==preorder[i])
        {
            index=j;
            break;
        }
    ++i;//moving ahead in preorder array;
    root->left=preIno(inorder,preorder,s,index-1);
    root->right=preIno(inorder,preorder,index+1,e);
    return root;

}
void printStyle(node *root)
{
    if(root==NULL)
        return ;
    if(root->left==NULL)
        cout<<"END => ";
    else
        cout<<root->left->data<<" => ";
    cout<<root->data;    
    if(root->right==NULL)
        cout<<" <= END"<<endl;
    else
        cout<<" <= "<<root->right->data<<endl;
    printStyle(root->left);
    printStyle(root->right);

}
int main() {
    int n;
    cin>>n;
    int preorder[n];
    for(int i=0;i<n;i++)
        cin>>preorder[i];
    int m;
    cin>>m;
    int inorder[m];
    for(int i=0;i<m;i++)
        cin>>inorder[i];
    node *root=preIno(&inorder[0],&preorder[0],0,n-1);
    printStyle(root);         
	return 0;
}