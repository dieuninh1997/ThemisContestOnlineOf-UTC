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
	//qhd
	//tai moi vtri i, tong doan lon nhat ket thuc tai i la: f[i]-min(f[j] | j=0..i)
	//khi do, ta xet lan luot cac vtr i, tai moi vt i, ta giu lai gtri nho nhat cua cac f[j]
	
	int n;
	cin>>n;
	int a[n],f[n];
	FOR(i,1,n+1)
		cin>>a[i];
	f[0]=0;
	FOR(i,1,n+1)
		f[i]=f[i-1]+a[i];
	int maxs=0, f_min=0;
	FOR(i,1,n+1)
	{
		f_min=min(f_min,f[i]);
		maxs=max(maxs,f[i]-f_min);
	}
	cout<<maxs;
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



