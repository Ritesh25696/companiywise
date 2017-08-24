Given a linked list of size N, your task is to complete the function countNodesinLoop() that checks whether a given Linked List contains loop or not and if loop is present then return the count of nodes in loop or else return 0.

For Example:
Size of the loop in the below linked list is 4.

Input:
The function takes a single argument as input, the reference pointer to the head of the linked list.
There will be T, test cases and for each test case the function will be called separately.

Output:
For each test case the function must return the size of the loop in the linked list or else 0.

Constraints:
1<=T<=100
1<=N<=500

Example:
Input:
2
10
25 14 19 33 10 21 39 90 58 45
4
2
1 0
1
Output:
6
1
***********************************************************************************************************
Structure of the node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
};
*/
// Your task is to complete the function this function
// function should return the size of the loop
int countnumber(Node * temp){
    int res = 1;
    Node * a = temp;
    while(a->next != temp){
        a = a->next;
        res++;
    }
    return res;
}

int countNodesinLoop(struct Node *head)
{
     Node *slow = head , *fast = head;
     while(slow && fast && fast->next){
         slow = slow->next;
         fast = fast->next->next;
         if(slow == fast){
             return countnumber(slow);
         }
     }
     return 0;
}
