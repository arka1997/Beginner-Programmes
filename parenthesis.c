#include<stdio.h>
#include<limits.h>
#include<string.h>
#define ELEMENT 100
int stack[ELEMENT];
int top=-1;
void push(int value)
{  if(top==ELEMENT-1)
    {
        printf("stack overflow\n");
        return;
    }
    // top++;
        stack[++top]=value;
}
 void pop()
 {
     if(top==-1)
     {
         printf("stack underflow\n");
         return;
     }
     top--;
 }
 int  isempty()
 {
     if(top==-1)
     {
         return 1;
     }
     return 0;
 }
 int isfull()
 {
     if(top==ELEMENT-1)
     {
         return 1;
     }
        return 0;
 }
 int peek()
 {
     if(top==-1)
     {
         return INT_MIN;
     }
     return stack[top];
 }
 void validparenthesis(char* str)
 {int len = strlen(str);
     for(int i=0;i<len;i++)
     {
         if(str[i]=='{' || str[i]=='(')
         {  
             push(str[i]);
         }
         else{
             char op1,op2;
             op1=peek();
             if(str[i]=='}' && op1 == '{')
             {
                     pop();
             }
              if(str[i]==')'  && op1 == '('){
                  pop();
              }
         }
     }
     if(top==-1)
     {
         printf("Valid parenthesis\n");
     }
     else{
         printf("invalid parenthesis\n");
     }
 }
void main()  
{
    char str[10];
    scanf("%s[^\n]",str);
    validparenthesis(str);
}