Count the given numbers on your fingers and find the correct finger on which the number ends.

The first number starts from the thumb, second on the index finger, third on the middle finger, fourth on the ring finger and fifth on the little finger.
Again six comes on the ring finger and so on.

Input:
First line consists of T test cases. Only line input, one integer N.

Output:
Single line output, print the number of finger.

Constraints:
1<=T<=5000
1<=N<=5000

Example:
Input:
2
1
2
Output:
1
2

**For More Examples Use Expected Output**

*************************************************************************************************************************************

#include<bits/stdc++.h>

using namespace std;
int findfinger(int n){
    vector<int> fingers(5,0);
    bool clockwise = true;
    int j = 0;
    for(int i=1 ; i<=n ; i++){
        if(clockwise){
            fingers[j] = i;
            if(i == n)return j+1;
            if(j == 4){
                clockwise = false;
                j--;
            }
            else
            j++;
        }
        else{
            fingers[j] = i;
            if(i == n)return j+1;
            if(j== 0){
                clockwise = true;
                j++;
            }
            else
            j--;
        }
    }
}

int main() {
	int t;
	cin>>t;
	for(int i=0 ; i<t ; i++){
	    int n;
	    cin>>n;
	    cout<<findfinger(n)<<endl;
	}
	return 0;
}
