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
    bool isPalindrome(ListNode* head) {
        // ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = head;
        ListNode *prev = NULL;
        ListNode *curr = head;
        //here we are moving fast pointer by 2 so that "prev" pointer, our "slow" pointer, can traverse upto the "mid" while reversing the elements, 12321
        while(fast!= NULL && fast->next != NULL){
            
            fast = fast->next->next;
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        // here we are making our new head pointing to prev after reversing
        head = prev;
        //here if our LL length is even, then fast will point directly to null,so tht pointer not exist, but if length is odd, 5, then out fast pointer will point to the last node at the end,ex.1 2 3 2 1, "fast" points to 5 for odd OR "fast" points to null for even,. ex. 1 2 2 1
        //Now when length is odd then, we will move the mid pointer by 1, as the mid elemnt for length=6, will remain in its place, ex. In 1 2 3 2 1, "3" remains in its place, so we move prev, which earlier point to 3, by 1,
        if(fast){
            curr = curr->next;
        }
        //Now we check 1<-2<-3->2->1, upto 3 is reversed, so our new head points to "2" placed at the front-most, now we check if the datas are matching, prev will move from left to right, as it is reversed, and curr moves from right to left.
        while(curr){
            if(prev->val != curr->val){
                return false;
            }
            curr = curr->next;
            prev = prev->next;
        }
        return true;
    }
};