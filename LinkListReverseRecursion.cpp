// { Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL || head->next== NULL){
            return head;
        } 
            Node* h = reverseList(head->next);
            head->next->next = head;
            head->next = NULL;
            return h;//this head is returned everytime whie backtracking in recursion because, we need to make compiler know that which address is new Node pointing
                    // so that, the head returned to its parent function is stored in variable called "head", in main function, which is later
                    // send to the printList function and print the linklist starting from newhead, and traversing to the null, from left to right 6->5->4->3->2->1
    }

    // ANOTHER WAY
    // struct Node* reverseList(struct Node *head)
    // {
    //     if(head == NULL || head->next== NULL){
    //         return head;
    //     } 
    //     Node *temp = head;
    //     Node *prev = NULL;
    //     Node *curr = NULL;
    //     while(temp){
    //         curr = temp->next;//we store the the address of next node that current node holds, whil wil be used tove "curr" by one
    //         temp->next = prev;//here temp->next will hold the address of previous node, and thus we reverse the pointer
    //         // here we interchange or modify the current and prev pointer, current points to the next node, whereas "prev" points to the previous node of current, adn then we just store addres of "prev" in curr->next node, thus we change the pointer
    //         prev = temp;
    //         temp = curr;
    //     }
    //     head = prev;//at last prev is the one which points to the last node, whereas curr moves to null position at the time before loop ends
    //                 // so we store prev in head and make the last node now head
    // return head;
    // }
};
    


// { Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int n,l,firstdata;
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    return 0;
}

  // } Driver Code Ends