Given a string of character, find the length of longest proper prefix which is also a proper suffix.
Example:
S = abab
lps is 2 because, ab.. is prefix and ..ab is also a suffix.

Input:
First line is T number of test cases. 1<=T<=100.
Each test case has one line denoting the string of length less than 100000.

Expected time compexity is O(N).

Output:
Print length of longest proper prefix which is also a proper suffix.

Example:
Input:
2
abab
aaaa

Output:
2
3
&****************************************************************************************************************************************************************8
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    vector<int> lps(s.length() , 0);
	    int j = 0 , i =1 ;
	    while(i<s.length()){
	        if(s[i] == s[j]){
	            j++;
	            lps[i]=j;
	            i++;
	        }
	        else{
	            if(j == 0){
	                lps[i] = 0;
	                i++;
	            }
	            else j = lps[j-1];
	        }
	       
	    }
	    //for(int i=0 ; i<lps.size() ; i++)cout<<lps[i]<<",";
	    cout<<lps[s.size()-1]<<endl;
	}
	return 0;
}
