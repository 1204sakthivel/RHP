#include<iostream>
#include<set>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
	int N ; cin>>N;
	
	vector<pair<int , int >> arr(N);

	for(int i=0 ; i< N ; i++){
		
		int ht , lt ; cin>>ht>>lt;
		arr[i] = make_pair(ht,lt);
		
	}
	sort(arr.begin(),arr.end(),greater<int>());
	
	vector<int>htarr;
	vector<int>ltarr;
	
	int prev = 0;
	 
	 for(auto[ht , lt ] : arr){
	 	if(lt > prev){
	 		prev=lt;
	 		htarr.push_back(ht);
	 		ltarr.push_back(lt);
	 	}
	 }
	 int q ; cin>>q;
	 while(q--){
	 	int time ; cin>>time;
	 	auto it = upper_bound(ltarr.begin().ltarr.end(),time);
	 	int idx = lt-ltarr.begin();
	 	cout<<htarr[idx]<<endl; 
	 }
		int ht , lt ; cin>>ht>>lt;
		
	
}
