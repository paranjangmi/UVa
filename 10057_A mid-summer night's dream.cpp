# include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int n;
	while(cin>>n){
		int a[n], minA, minA2, cnt=0, numA;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);	
		minA = a[(n-1)/2];
		minA2 = a[n/2];
		for(int i=0;i<n;i++){
			if(a[i]==minA || a[i]==minA2) cnt++;
		}
		numA = minA2-minA+1;
		
		cout<<minA<<" "<<cnt<<" "<<numA<<endl;
		
	}
	
	
	return 0;
}
