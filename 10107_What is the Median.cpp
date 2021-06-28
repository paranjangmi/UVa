//ref:https://yuihuang.com/zj-c010/
# include<bits/stdc++.h>
using namespace std;
int main(){
	int n, cnt=0;
	multiset<int> st;
	while(cin>>n){
		st.insert(n);
		cnt++;
		multiset<int>::iterator it=st.begin();
		advance(it,st.size()/2);
		if(cnt%2==0){
			cout<<(*it+*(--it))/2<<endl;
		}else{
			cout<<*it<<endl;
		}
	}
	
	return 0;
}
//ref:https://yuihuang.com/zj-c010/
