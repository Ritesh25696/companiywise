Given an array in such a way that the elements stored in array are in increasing order initially and then after reaching to a peak element , elements stored are in decreasing order. Find the highest element.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case consists of an integer n. The next line consists of n spaced integers. 

Output:
Print the highest number in the array.

Constraints: 
1<=T<=100
1<=n<=200
1<=a[i]<=105

Example:
Input:
2
11
1 2 3 4 5 6 5 4 3 2 1
9
1 3 4 5 7 8 9 5 2 

Output:
6
9
********************************************************************************************************************

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0 ; i<t ; i++){
	    int n;
	    cin>>n;
	    int k1,k2,ans=INT_MIN;
	    for(int i=0 ; i<n ; i++){
            cin>>k2;
            if(i==0)k1 = k2;
            else{ 
                if(k2<k1 && ans == INT_MIN)ans = k1;
                else{k1 = k2;}
            }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}