Given number into words. For example, if “1234” is given as input, output should be “one thousand two hundred and thirty four”

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:

Print the number into words (in small letter).

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 9999

Example:

Input:
2
2
142

Output:
two
one hundred and forty two

*************************************************************************************************************************************************************************************

include<iostream>
#include<map>
using namespace std;



int main()
 {
        map<int , string> val;
        map<int , string> v;
        val[1] = "one";
        val[2] = "two";
        val[3] = "three";
        val[4] = "four";
        val[5] = "five";
        val[6] = "six";
        val[7] = "seven";
        val[8] = "eight";
        val[9] = "nine";
        
        v[2] = "twenty";
        v[3] = "thirty";
        v[4] = "forty";
        v[5] = "fifty";
        v[6] = "sixty";
        v[7] = "seventy";
        v[8] = "eighty";
        v[9] = "ninety";
        
        v[10] = "ten";
        v[11] = "eleven";
        v[12] = "twelve";
        v[13] = "thirteen";
        v[14] = "fourteen";
        v[15] = "fifteen";
        v[16] = "sixteen";
        v[17] = "seventeen";
        v[18] = "eighteen";
        v[19] = "nineteen";
        
        v[20] = "twenty";
        v[30]  = "thirty";
        v[40] = "forty";
        v[50] = "fifty";
        v[60] = "sixty";
        v[70] = "seventy";
        v[80] = "eighty";
        v[90] = "ninety";
        
        int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	    int n = m;
	    string res = "";
	    int k = 0;
	    while(n>0){
	        int dig = n%10;
	        
	        if(k == 0 && dig != 0)res+=val[dig];
	        if(k == 0 && dig == 0){
	            n/=10;
	            dig = n%10;
	            dig*=10;
	            k++;
	        }
	        if(k == 1 && dig == 1){
	            res = "";
	            dig = dig*10 + m%10;
	            res+=v[dig];
	            n/=10;
	            k++;
	            continue;
	        }
	        if(k == 1 && dig != 0)res =  v[dig] +" "+ res  ;
	        if(k == 2 && dig != 0)res = val[dig] + " hundred and " + res;
	        if(k == 3)res = val[dig] + " thousand "+ res;
	        n/=10;
	        k++;
	    }
	    if(res.substr(res.length()-5 , 4) == " and" ){
	        res.erase(res.end()-4 , res.end());
	    }
	    cout<<res<<endl;
	    
	}
	return 0;
}
