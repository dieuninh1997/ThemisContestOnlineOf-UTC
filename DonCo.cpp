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
	int a,b;
	cin>>a>>b;
	//a(x-1)=b(x+1)
	//ng : u
	//co : v
	// u/a=v-1
	//u/b=v+1
	float v,u;
	v=(a+b)*1.0/abs(a-b);
	if(ceil(v)-v)
		cout<<"HUY HON";
	else
	cout<<v<<" "<<a*(v-1);
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



