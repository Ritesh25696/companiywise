#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> pas(n, 0);
	    pas[0] = 1;
	    for(int i=1 ; i<n ; i++){
	        for(int j=i-1 ; j>=0 ; j--){
	            pas[j+1]+=pas[j];
	        }
	    }
	    for(int i=0 ; i<n ; i++)cout<<pas[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
