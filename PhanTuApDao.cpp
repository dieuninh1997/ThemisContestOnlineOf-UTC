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

int find(vector<int> a, int n)
{
	int maj_i=0, dem=1;
	FOR(i,1,n)
	{
		if(a[maj_i]==a[i])
			dem++;
		else
			dem--;
		if(dem==0)
		{
			maj_i=i;
			dem=1;
		}
	}
	return a[maj_i];
}
bool isMajority(vector<int> a, int n, int ans)
{
	int dem=0;
	FOR(i,0,n)
	{
		if(a[i]==ans)
			dem++;
	}
	if(dem>n/2)
		return true;
	else return false;
}
void xuat(vector<int> a, int n)
{
	int ans=find(a,n);
	if(isMajority(a,n,ans))
		cout<<ans;
	else
		cout<<"khong co phan tu ap dao\n";
}

void solve(){
	int n;
	cin>>n;
	vector<int> a;
	FOR(i,0,n)
	{
		cin>>a[i];
	}
	xuat(a,n);
}

int main(){
	#ifdef NINH
		freopen("input.txt","r",stdin);
	#endif
	solve();
	return 0;
}



