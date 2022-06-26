// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
            //string A = aabccb, 
            // i=0 ||(map=a:1)          || q=a                 ||str=a , 
            // i=1 ||(map=a:2)          || q=pop(a)            ||str=a# , 
            // i=2 ||(map=a:2,b:1)      || q=b                 ||str=a#b , 
            // i=3 ||(map=a:2,b:1,c:1)  || q=b,c               ||str=a#bb||f=b , 
            // i=4 ||(map=a:2,b:1,c:2)  || q=b                 ||str=a#bbb , 
            // i=5 ||(map=a:2,b:2,c:2)  || q=pop(b)-->q=pop(c) ||str=a#bbb#, //int his line we pop two times as, we found count of =2,then front points to next index in q,which has c, but c also has count 2, so it pops out "c" also
		    
		    // Code here
		    string str;
		    queue<char> q;
		    unordered_map<char,int> m;
		    for(int i=0;i<A.size();i++){
		        if(m.find(A[i]) != m.end()){
		            m[A[i]]++;
		        }
		        else{//here we come when we dont have have a key with A[i] in hash map, then we insert the new key and also push the value in queue, everytime we encounter a new value, so in our queue we wil have not repeated characters stored, coz when repeated character strives, it falls under if case where map value count increased by 1
		            m.insert({A[i],1});
		            q.push(A[i]);
		        }
while(!q.empty() && m[q.front()] > 1){//checking if queue is not empty and (q.front holds 1st elemnt of queue, m[q.front()] means in map q.front() has a value greater then 1 or not)
		            //if 1st elment of queue have count greater then 1 in map, then pop that elemnt from the queue and q.front() points to the next elemnt.
		            q.pop();
		        }
                //there is a situation when our queue wil b empty
                //a)when we have all repeated elemnts in a string so the repeated elments are popped out from queue when their count becomes greater then 1, and nothing left to point in queue by f
		            if(q.empty()){
		                str.push_back('#');//when empty push #
		            }
		            else{//else we go on adding the non repeating elements, existing in the range from 0 to current index i, to a new string str.
		                str.push_back(q.front());
		            }
		    }return str;
		}
};

// { Driver Code Starts.
int main(){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	return 0;
}  // } Driver Code Ends