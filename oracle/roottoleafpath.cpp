Given a Binary Tree and a sum s, your task is to check whether there is a root to leaf path in that tree with the following sum . You are required to complete the function hasPathSum. You should not read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Input:
The task is to complete the function hasPathSum which takes 2 arguments, root of the Tree and a value sum. The struct node has a data part which stores the data, pointer to left child and pointer to right child.
There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should return the true if such path exist else return false.

Constraints:
1 <=T<= 30
1 <=Number of nodes<= 100
1 <=Data of a node<= 1000

Example:

Input
2
2
1 2 L 1 3 R
2 
2
1 2 L 1 3 R
4

Output 
0
1

In above example there are two   test case where each represents a  tree with 3 nodes and 2 edges where root is 1, left child of 1 is 2 and right child of 1 is 3.  



Note: The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.

******************************************************************************************************************************************

bool hasPathSum(Node *node, int sum)
{
   if(node == NULL)return false;
   if(node->left == NULL && node->right == NULL){
       if(sum-(node->data) == 0)return true; 
       return false;}
   return hasPathSum(node->left , sum-(node->data))||hasPathSum(node->right , sum-(node->data));
}
