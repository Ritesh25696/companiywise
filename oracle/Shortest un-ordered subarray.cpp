Given an array of n distinct elements. Find the length of shortest unordered (neither increasing nor decreasing) sub array in given array.

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case consists of an integer n.The next line consists of n spaced numbers. 

Output:
Print the required output.

Constraints: 
1<=T<=100
1<=n<=100
1<=a[i]<=105

Example:
Input:
2
5
7 9 10 8 11
4
1 2 3 5

Output:
3
0
*************************************************************************************************************

#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> A;
	    bool done = false;
	    int id  = n ;
	    for(int i=0 ; i<n ; i++){
	        int p;
	        cin>>p;
	        if(i != 0 && p<A[i-1] && !done){id = i-1;done = true;}
	        A.push_back(p);
	    }
	    if(id == n)cout<<0<<endl;
	    else cout<<3<<endl;
	}
	return 0;
}
