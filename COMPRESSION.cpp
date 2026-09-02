#include<iostream>
#include<set>
using namespace std;
int main() {
    int n ; cin>>n;
    set<int> s;
    while(n--) {
        int nums;cin>>nums;
        s.insert(nums);
    }
    cout<<s.size()<<endl;
    for (int v : s) {
        cout<<v<<" ";
    }

}