// { Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  //here we are creating a ne node
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;//declaring head as null at beginning as doesnot holds any node now, and a varible named tail is taken

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);//here we call the "Node" constructor and create a new node, and send the value of data part of first node to the constructor
        tail = head;//now here we are storing value of head in tail, and when we traverse the node to delte or insert from back, then we move the tail pointer by tail->next, and 
                    //thereby "head" pointer is not modified, it points to first node only, the tail does the work of traversing
        for(i=1;i<n;i++)
        {//here we use a loop, and
            cin>>l;
            tail->next = new Node(l);//tail was also pointaing to a node where head is pointing, now in the tail->next part, we are storing the address of a new Node created by new constructor
            tail = tail->next;//and 
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
}