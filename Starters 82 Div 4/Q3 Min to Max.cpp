#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    auto it = upper_bound(arr, arr+n, arr[0]);
	    int index = it - arr;
	    cout<<n-index<<endl;
	}
	return 0;
}
