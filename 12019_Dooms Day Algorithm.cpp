# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int T,m,d;
	int dooms[13] = {-1,10,21,7,4,9,6,11,8,5,10,7,12};
	string days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	cin>>T;
	while(T--){
		cin>>m>>d;
		int idx;
//		if(d>=dooms[m]){
//			idx = (d-dooms[m])%7;
//		}else{
//			idx = (7-(dooms[m]-d)%7)%7;
//		}
//		cout<<days[idx]<<endl;
		idx = (d-dooms[m])%7;
		if(idx>=0){
			cout<<days[idx]<<endl;
		}else{
			cout<<days[7+idx]<<endl;
		}
		
	}
	
	
	return 0;
}
