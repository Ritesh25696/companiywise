Davis who has number of scanners in his shop select only two scanners to scan the documents of a customer. When a customer comes to his shop he knows three parameters S1, S2 and N.  S1 and S2 are the time taken by scanner 1 and scanner 2 to scan one document respectively And N is the number of documents given by the customer. As he is suppose to entertain a number of customers, he wants to calculate the minimum time to scan all the N documents using those two scanners.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains three space separated integers S1, S2 and N.

Output:
In new line, print the minimum time required.

Constraints:
1<=T<=500
1<=S1,S2,N<=106

Example:
Input:
2
2 4 2
1 2 2
Output:
4
2
***********************************************************************************************************************
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int s1,s2,n;
	    cin>>s1>>s2>>n;
	    int c1 =0 , c2 = 0;
	    for(int i=1 ; i<=n ; i++){
	        if(c1+s1 <= c2+s2)c1 += s1;
	        else c2 += s2;
	    }
	    cout<<max(c1,c2)<<endl;
	}
	return 0;
}
