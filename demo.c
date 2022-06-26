#include<stdio.h>
 void multiplication(int mul[][20], int row, int col,int num)
 {  
     int k=0;
     for(int i=0;i<=col;i++)
     { 
     int s=0;
        for(int j=0;j<=row;j++)
        {
        mul[i][j]= num*(s+1);
        printf("%d x %d = %d \n", num,i+1,mul[i][j]);
        s++;
        }
     }
     for(int i=0;i<row;i++)
     { 
        for(int j=0;j<=col;j++)
        {
            printf("%d",mul[i][j]);
            printf(" ");
        }
        printf("\n");
     }
     
 }
//  2*1 3*1 4*1
//  2*2 3*2 4*2
 void main()
 {  int row,col,num;
    scanf("%d", &row);
    scanf("%d",&col);
    scanf("%d",&num);
    int table[row][col];
    multiplication(table,row,col,num);
    
 }

 struct Node{
    int data;
    Node *next;
   //  creating node containing data and next portion
    Node(int val){
       data = val;
       next = null;
    }
 };