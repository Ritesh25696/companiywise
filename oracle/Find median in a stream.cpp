Given an input stream of n integers the task is to insert integers to stream and print the median of the new stream formed by each insertion of x to the stream.

Example

Flow in stream : 5, 15, 1, 3 
5 goes to stream --> median 5 (5)
15 goes to stream --> median 10 (5, 15)
1 goes to stream --> median 5 (5, 15, 1)
3 goes to stream --> median 4 (5, 15, 1, 3)

Input:
The first line of input contains an integer N denoting the no of elements of the stream. Then the next N lines contains integer x denoting the no to be inserted to the stream.

Output:
For each element added to the stream print the floor of the new median in a new line.

Constraints:
1<=N<=10^5+7
1<=x<=10^5+7

Example:
Input:
4
5
15
1 
3
Output:
5
10
5
4
*********************************************************************************************************************************************

#include<iostream>
#include<queue>
using namespace std;

priority_queue<int> L;
priority_queue<int, vector<int>, greater<int>>R;

void findmed(int n , int& med){
    if(R.size() == L.size()){
        if(n < med){L.push(n);med =L.top();}
        else {R.push(n);med=R.top();}
    }
    else if(L.size() < R.size()){
        if(n> med){
            L.push(R.top());
            R.pop();
            R.push(n);
        }
        else L.push(n);
        med = (L.top()+R.top())/2;
    }
    else{
        if(n<med){
            R.push(L.top());
            L.pop();
            L.push(n);
        }
        else
        R.push(n);
        med = (L.top()+R.top())/2;
    }
}

int main()
 {
	int t;
	cin>>t;
	int med = 0;
	while(t--){
	    int n;
	    cin>>n;
	    
	    findmed(n , med);
	    cout<<med<<endl;
	}
	return 0;
}
