// { Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<stack>
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
        stack<struct Node*> mystack;
        Node* temp = head;
        while(temp){
            mystack.push(temp);
            temp = temp->next;
        }
        head = mystack.top();
        temp = head;
        mystack.pop();
        while(!mystack.empty()){
            temp->next = mystack.top();
            temp = temp->next;
            mystack.pop();
        }
        temp->next = NULL;
        return head;
    }
    
};
    


// { Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       cout << temp->data << "<-";
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
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
    }
    return 0;
}

  // } Driver Code Ends
  cin >> n
  Node *head = null;
  tail = null;
  cin >> firstdata;
  head = new Node(firstdata)
  for(int i=0;i<n;i++){
      cin >> l;
      temp->next = new Node(l);
      temp = temp -> next;
  }