# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int a,b;
	while(cin>>a>>b && a && b){
		cout<<floor(sqrt(b))-ceil(sqrt(a))+1<<endl;
	}
	
	
	return 0;
}
