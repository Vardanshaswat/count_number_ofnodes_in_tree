#include<bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode {
	public:
	T data;
	vector<TreeNode<T>*> children;

	TreeNode(T data) {
		this->data = data;
	}

};

int find_number_of_node(Tree<int> * root)
{
    int cout = 1;
    for(int i = 0 ; i<root->children.size(); i++)
    {
        count += find_number_of_node(root->children);
    }
    return ans;
}