class Solution:
    def preorder(self, root, ans):
        if(root is None):
            return
        
        ans.append(root.val)
        
        self.preorder(root.left, ans)
        self.preorder(root.right, ans)


    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans=[]

        if(root is None):
            return ans
        
        self.preorder(root,ans)
        return ans