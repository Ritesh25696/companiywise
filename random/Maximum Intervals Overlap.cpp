Consider a big party where a log register for guest’s entry and exit times is maintained. Find the time at which there are maximum guests in the party. Note that entries in register are not in any order.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the entry and exit array. Then the next two line contains the entry and exit array respectively.

Output:
Print the maximum no of guests and the time at which there are maximum guests in the party.

Constraints:
1<=T<=10^5
1<=N<=10^5
1<=entry[i],exit[i]<=10^5

Example:
Input:
2
5
1 2 10 5 5
4 5 12 9 12
7
13 28 29 14 40 17 3 
107 95 111 105 70 127 74 

Output:
3 5
7 40

**For More Examples Use Expected Output**

*******************************************************************************************************************************************************

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0 ; i<t ; i++){
	    int n;
	    cin>>n;
	    int k,l;
	    vector<int> A;
	    vector<int> B;
	    for(int i=0 ; i<n ; i++){
	        cin>>k;
	        A.push_back(k);
	    }
	    for(int i=0 ; i<n ; i++){
	        cin>>l;
	        B.push_back(l);
	    }
	   sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int tim,cnt = 0,j=0, maxcnt = 0;;
	for(int i=0 ; i<n ; i++){
	    if(A[i] <=B[j]){
	        cnt++;
            if(cnt > maxcnt){
                maxcnt = cnt;
                tim = A[i];
            }
	    }
	    else{
	        cnt--;
	        j++;
	        i--;
	    }
	}
	cout<< maxcnt<<" "<<tim<<endl;
	}
}
