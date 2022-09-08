class Solution {
public:
    int countNodes(TreeNode* root) {
        int lh = 0;
        int rh = 0;
        TreeNode* temp = root;
        while(temp!=NULL)
        {
            lh++;
            temp=temp->left;
        }
        temp = root;
        while(temp!=NULL)
        {
            rh++;
            temp=temp->right;
        }
        if(lh==rh)
            return pow(2,lh)-1;
        else
            return 1+countNodes(root->left)+countNodes(root->right);
    }
};
