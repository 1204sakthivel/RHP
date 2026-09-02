#include<iostream>
#include<set>
using namespace std;

int main(){
	int L,Q; cin>>L>>Q;
	set<int>st ={0,L};
	while(Q--){
		int qt , x ; cin>>qt>>x;
		if(qt==1){
			st.insert(x);
		}else{
			auto value = st.upper_bound(x);
			auto value_bef = prev(value);
			cout<<*value - *value_bef<<endl;
			
		}
	}
	return 0;
}