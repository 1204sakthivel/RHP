#include<iostream>
#include<vector>

using namespace std;

int main(){
	int N,M;
	long long int K;
	cin >> N >> M >> K;
	
	vector<int> arr(N);
	vector<bool> vis(N,false);
	
	for(int i = 0;i<N;i++){
		cin >> arr[i];
	} 
	
	long long int curr = 0;
	
	for(int i = 0;i<N;i++){
		if(i >= M && vis[i-M]){
			curr -= arr[i-M];
		}
		if(curr+arr[i] <= K){
			curr += arr[i];
			vis[i] = true;
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}	
}