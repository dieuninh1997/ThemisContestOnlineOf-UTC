#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a),_b_=(b); i<_b_;i++)
#define REF(i,a,b) for(int i=(a),_b_=(b); i>_b_;i--)
#define IT(i,v) for(typeof((v).begin()) i=(v).begin(); i!=(v).end();++i)
#define ALL(v) v.begin(), v.end()
#define MS(v) memset(v,0,sizeof(v))
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator +=(vector<T>&v, T x){v.push_back(x);return x;}

void solve(){
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int a[n];
		float ans=0,sum=0;
		for(int i=0; i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(n>2)
		{
			sort(a,a+n);
			float t1=0,t2=0;
			for(int i=0;i<n;i++)
			{
				if(i<n/3)
					t1+=a[i];
				t2+=(a[i]*2.0)/3;
			}
			ans=max(t1,t2);
			
		}else
		{
			ans=sum*0.7;
		}
		LL res=ceil(ans);
		cout<<res<<endl;
	}
	
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



