#include <bits/stdc++.h>
using namespace std;

void pl (){
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
int main(){
    pl();
    float a = 0 , b = 0;
    double x = 0;
    cin>>a>>b;
	x = -b/a;
    if(a == 0){
	    cout << "phương trình vô nghiệm" << endl;
    }
    if(a == 0 && b == 0){
       cout << "phương trình vô số nghiệm" << endl;
    }
    cout<<x;
    return 0;
}