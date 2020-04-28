#include<iostream>
#include<cstring>
using namespace std;

class node{
    public:
    string data;
    node* left;
    node* right;
    node(int d){
    data=d;
    left=NULL;
    right=NULL;
    }
};
class hbpair{
    public:
    int height;
    bool balance;
};
node*build(string s){
	if(s=="true"){
	int d;
	cin>>d;
	node*root=new node(d);
	string l;
	cin>>l;
	if(l=="true"){
	root->left=build(l);
	}
	string r;
	cin>>r;
	if(r=="true"){
	root->right=build(r);
	}
	return root;
	}
	return NULL;
}
hbpair isbalance(node* root){
    hbpair p;
    if(root==NULL){
        p.height=-1;
        p.balance=1;
        return p;
    }
    hbpair left=isbalance(root->left);
    hbpair right=isbalance(root->right);
    p.height=max(left.height,right.height)+1;
    if(abs(left.height-right.height)<=1&&left.balance&&right.balance)
    p.balance=true;
    else
    p.balance=false;
    return p;
}
int main() {
    node* root=build("true");
    if(isbalance(root).balance)
    cout<<"true";
    else
    cout<<"false";
	return 0;
}