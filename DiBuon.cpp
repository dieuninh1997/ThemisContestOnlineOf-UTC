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
	int n,m;
	cin>>n>>m;
	vector<pair<int, int> > v;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(floor(a*(1+b/100.0))-a,a));
	}
	sort(ALL(v));
	int s=0,ans=0;
	for(int i=n-1;i>=0;i--)
	{
		s+=v[i].second;
		if(s<m)
		{
			
			ans+=v[i].first;
		}else
			break;
	}
	cout<<ans<<endl;
//	for(int i=0;i<n;i++)
		//cout<<v[i].first<<" "<<v[i].second<<endl;
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



