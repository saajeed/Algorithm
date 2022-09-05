#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int value)
	{
      val = value;
      left = NULL;
      right = NULL;


	}
};
class Solution 
{
	public : 
	vector<int> preOderTraverse(TreeNode *root)
	{
		stack<TreeNode*> st;
		st.push(root);
		while(!st.empty())
		{
			TreeNode *x = st.top();
			st.pop();
			ans.push_back(x->val);
			if(x->right!=NULL)
				st.push(x->right);
			if(x->left!=NULL)
				st.push(x->left);
			

		}
		return ans;

	}

};
int main()
{
   TreeNode *node1 = new TreeNode(2);
   TreeNode *node2 = new TreeNode(3);
   TreeNode *node3 = new TreeNode(8);
   TreeNode *node4 = new TreeNode(9);
   TreeNode *node5 = new TreeNode(5);
   node1->left=node2;
   node1->right = node3;
   node2->left = node4;
   node4->right = node5;
   Solution s;
   s.preOderTraverse(node1);
   for(auto el: ans)
   	cout<<el<<" ";
}