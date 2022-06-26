/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void palindrome(ListNode *head, bool &flag, ListNode *&temp){//*&temp means listNode* is a pointer && &temp is considered to be an alias of "tem", both tem and temp are pointing to the same address or value.In same way &flag in palindrome function is an alias of flag variable in "isPalindrome function"

        if(head == temp && head->next == temp){//this is for the backtracking part while checking the first and last element is same or not,when temp and head is equalto each other then we return, where temp comes from left side, and head from right side while backtrcaking
            return;
        }
        if(head->next){//until head->next becomes null we will go own calling the function
            palindrome(head->next,flag,temp);
        }
        // head = head->next;
        if(head->val != temp->val){//checking if the head value pointing to the last elemnt and tep value pointing to 1st elemnt of linklist is not equals to same or not, if yes, then flag=false
            flag = false;
                return ;
            }
        temp = temp->next;//here we move the temp by one at every backtracking step to check temp with head
    }
    
    
    bool isPalindrome(ListNode* head) {
        // if (!head || !head->next) return true;
       bool flag = true;
          palindrome(head, flag, head);//if we pass &temp then there is no duplicate variables created, instead the original value of head has an alias name temp, and whenever this temp is changed, the original head value also changes
        return flag;
    }
};