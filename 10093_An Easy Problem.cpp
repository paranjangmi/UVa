# include<bits/stdc++.h> 
using namespace std;
int main(){
	string n;
	while(cin>>n){
		int max=-1, sum=0, tmp;
		for(int i=0;i<n.size();i++){
			if(n[i]>='0' && n[i]<='9'){
				tmp = n[i]-'0';
			}else if(n[i]>='A' && n[i]<='Z'){
				tmp = n[i]-'A'+10;
			}else if(n[i]>='a' && n[i]<='z'){
				tmp = n[i]-'a'+36;
			}else{
				continue;
			}
			if(tmp>max) max=tmp;
			sum += tmp;
		}
		bool flag = false;
		for(int i=2;i<=62;i++){
			if(i>max){
				if(sum%(i-1)==0){
					cout<<i<<endl;
					flag = true;
					break;
				}
			}			
		}
		if(!flag) cout<<"such number is impossible!"<<endl;
	}
}
