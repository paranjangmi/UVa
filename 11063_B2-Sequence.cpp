# include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int Case = 1;
	int N;
	while(cin>>N){
		int a[N];
		for(int i=0;i<N;i++){
			cin>>a[i];
		}
		set<int> st;
		st.clear();
		bool flag = true;
		for(int i=0; i<N; i++){
			if(a[i]<1 || (a[i]>a[i+1] && i+1<N)){
				flag = false;
				break;
			}
			for(int j=i; j<N; j++){
				int tmp = a[i]+a[j];
				if(st.count(tmp)){
					flag = false;
					break;
				}
				st.insert(tmp);
			}
			if(!flag) break;
		}
		
		cout<<"Case #"<<Case++;
		if(flag) cout<<": It is a B2-Sequence."<<endl<<endl; 
		else cout<<": It is not a B2-Sequence."<<endl<<endl;
	}
	
    return 0;
}
