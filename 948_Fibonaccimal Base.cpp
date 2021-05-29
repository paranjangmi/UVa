# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int N,a,f0=0,f1=1,f2;
	cin>>N;
	vector<int> fib;
	while(f2<=1e8){
		f2=f0+f1;
		fib.push_back(f2);
		f0=f1;
		f1=f2;			
	}
	reverse(fib.begin(),fib.end());
	while(N--){
		cin>>a;
		int x;
		for(int k=0;k<fib.size();k++){
			if(a>=fib[k]){
				x = k;
				break;
			}
		}
		vector<int> ans;
		int a2 = a;
		bool flag = true;
		for(int i=x;i<fib.size();i++){
			if(a2>=fib[i]&&flag){
				ans.push_back(1);
				a2 -= fib[i];
				flag = false;
			}else{
				ans.push_back(0);
				flag = true;
			}
		}
		cout<<a<<" = ";
		for(auto i:ans){
			cout<<i;
		}
		cout<<" (fib)"<<endl;	
		
	}
	
	
	return 0;
}
