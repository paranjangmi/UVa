# include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n;
	double x;
	while(cin>>n && n){
		int a[n],sum=0,avg,rem;
		for(int i=0;i<n;i++){
			cin>>x;
			a[i] = (int)round(x*100); 
			sum+=a[i];
		}
		avg = sum/n;
		rem = sum-avg*n;
		sort(a,a+n);
		int ans=0;
		for(int i=0;i<n-rem;i++){
			ans+=abs(avg-a[i]);
		}
		for(int i=n-rem;i<n;i++){
			ans+=abs(avg+1-a[i]);
		}
		cout<<"$"<<fixed<<setprecision(2)<<ans/200.0<<endl;
		
		
		
	} 
	 
	
	return 0;
}
