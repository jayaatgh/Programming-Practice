#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
     deque<int> deq;
    
    for(int i = 0; i < k; ++i)
        deq.push_back(arr[i]);
    
    int max = *max_element(deq.begin(), deq.end());
    
    for(int i = k; i < n; ++i)
    {
        cout << max << " ";
        
        int front = deq.front();
        deq.pop_front();
        deq.push_back(arr[i]);
        
        if(front == max)
            max = *max_element(deq.begin(), deq.end());
        else 
            max = std::max(max, arr[i]);
    }
    cout << max << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
