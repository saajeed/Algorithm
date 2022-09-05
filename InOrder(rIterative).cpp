#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int data)
  {
  	val = data;
  	left = NULL;
  	right = NULL;

  }
};
class Solution
{
	public:
		void inOrderTraverse(TreeNode *root)
		{
 			stack<TreeNode *> st;
 		    TreeNode *curr = root;
 			while(curr != NULL || !st.empty())
 			{
              while(curr != NULL)
              {
              	st.push(curr);
              	curr = curr->left;
              }
              curr = st.top();
              st.pop();
              ans.push_back(curr->val);

              curr=curr->right;
 			}
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
   node2->right = node5;
   Solution s;
   s.inOrderTraverse(node1);
   for(auto &el : ans)
   	cout<<el<<" ";
   cout<<endl;


}