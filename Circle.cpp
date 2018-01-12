#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))
#define fi first
#define se second
#define arrayin(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define arrayout(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<"\n";

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}
const double pi=3.14;
void solve() {
	double r;
	cin>>r;
	//s=r*r*pi
	//c=2*r*pi
	if(r<0)
		cout<<"NO CIRCLE\n";
	else
	{
		printf("%.2f\n%.2f",r*r*pi,2*r*pi);
	}
}
int main(){
	#if NINH
//	freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}

