#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val = data;
        left = right = nullptr;
    }
};

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    //root left right
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    //left root right
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    // left right root
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

void itpreorder(Node* root){
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* node = st.top();
        st.pop();
        cout<<node->val<<" ";
        if(node->right) st.push(node->right);
        if(node->left) st.push(node->left);
    }
}
void itinorder(Node* root){
    stack<Node*> st;
    while(true){
        if(root != NULL){
            st.push(root);
            root = root->left;
        }
        else{
            root = st.top();
            st.pop();
            cout<<root->val<<" ";
            root = root->right;
        }
    }
}

bool fun(Node* root, int key, vector<int> &ans) {
    if(root == NULL) return false;
    ans.push_back(root->val);
    if(root->val == key) return true;
    if(fun(root->left,key,ans) || fun(root->right,key,ans)){
        return true;
    }
    ans.pop_back();
    return false;
}
//lc ancestor
Node* lcancestor(Node* root,Node* a, Node* b){
    if(root == NULL || root == a || root == b){
        return root;
    }
    Node* left = lcancestor(root->left,a,b);
    Node* right = lcancestor(root->right,a,b);
    //if both left and right return node then return root
    if(left && right) return root;
    //if any of left or right returns node then return node
    if(left) return left;
    if(right) return right;
    return NULL;
}
int main(){
     Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    vector<int> ans;
    fun(root,5,ans);
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
    
    cout<<lcancestor(root,root->left->left,root->left->right)->val;
    // Tree structure:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5

    return 0;
}