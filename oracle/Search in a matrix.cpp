Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . The task is to find whether element x is present in the matrix or not.

Expected Time Complexity : O(m + n)

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of three lines.
First line of each test case consist of two space separated integers N and M, denoting the number of element in a row and column respectively.
Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order.
Third line of each test case contains a single integer x, the element to be searched.
Output:

Corresponding to each test case, print in a new line, 1 if the element x is present in the matrix, otherwise simply print 0.

Constraints:
1<=T<=200
1<=N,M<=30

Example:

Input:
2
3 3
3 30 38 44 52 54 57 60 69
62
1 6
18 21 27 38 55 67
55

Output:
0
1

** For More Input/Output Examples Use 'Expected Output' option **

********************************************************************************************************************

#include<iostream>
#include<vector>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n == 0 || m == 0 ){cout<<0<<endl;continue;}
	    vector<vector<int>> A(n , vector<int>(m , 0));
	    for(int i=0 ; i<n ; i++){
	        for(int j=0 ; j<m ; j++){
	            cin>>A[i][j];
	        }
	    }
	    int B;
	    cin>>B;
	   if(B<A[0][0] || B>A[A.size()-1][A[0].size()-1]){cout<<0<<endl;continue;}
	   
         int min = 0 , col = A[0].size()-1;
         int max = A.size()-1;
         bool done = false;
         while(min <= max){
             int mid = (min+max)/2;
             if(A[mid][col] == B){cout<<1<<endl;done = true; break;}
             if(A[mid][col] < B) min = mid+1;
             else max = mid-1;
         }
         
         if(done)continue;
         int k = 0 ;
         if(min >= 0) k = min;
         else k = max;
         
         min = 0 , max = A[0].size()-1;
          while(min <= max){
             int mid = (min+max)/2;
             if(A[k][mid] == B){cout<<1<<endl;
             done = true;
             break;
             }
             if(A[k][mid] < B) min = mid+1;
             else max = mid-1;
         }
         if(!done)cout<<0<<endl;
    	}
    	return 0;
}
