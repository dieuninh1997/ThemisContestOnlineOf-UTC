#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b_=(b); i<_b_;i++)
#define REF(i,a,b) for(int i=(a),_b_=(b); i>_b_;i--)
#define IT(i,v) for(typeof((v).begin()) i=(v).begin(); i!=(v).end();++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))
#define FORIF(i,n,a,v) for (i = 0; i < n; ++i) if (a[i] == v)
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator +=(vector<T>&v, T x){v.push_back(x);return x;}
int ans;
void subArraySum(vector<int>arr,int n, int sum)
{
	map<int,int> m;
	int curr_sum=0;
	int i=0;
	bool check=false;
	while(!check)
	{
		curr_sum+=arr[i];
		if(curr_sum==sum)
		{
		//	cout<<"Found "<<0<<" to "<<i<<endl;
			ans=max(ans,i+1);
			return;
		}
		if(m.find(curr_sum-sum)!=m.end())
		{
			//cout<<"Found "<<m[curr_sum-sum]+1<<" to "<<i<<endl;
			ans=max(ans,i-m[curr_sum-sum]);
			return;
		}
	
		if(i<n)
		{
		
			i++;
			curr_sum=0;
		}
		if(i==n)
			check=true;
		m[curr_sum]=i;
	}
	cout << "No subarray";
}
void solve()
{
	vector<int>arr;
	int n,s;
	cin>>n>>s;
	FOR(i,0,n)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	ans=0;
	subArraySum(arr,n,s);
	cout<<ans;
}
int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



