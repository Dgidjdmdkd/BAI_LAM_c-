#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);
	
	freopen("BAI1.INP","r",stdin);
	freopen("BAI1.OUT","w",stdout);
	
	int res = 0;
	long long xa,xc,ya,yc,xm,ym,xn,yn;
	cin >> xa >> ya >> xc >> yc >> xm >> ym >> xn >> yn;
	long long xmn,xmx,ymn,ymx;
	xmn = min(xa,xc);
	ymn = min(ya,yc);
	xmx = max(xa,xc);
	ymx = max(ya,yc);

	if(xm < xmx && xm > xmn && ym > ymn && ym < ymx) res++;
	if(xn < xmx && xn > xmn && yn > ymn && yn < ymx) res++;
	
	cout << res;
	return 0;
}