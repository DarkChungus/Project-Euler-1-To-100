#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll sum1 = 0;
	for(int i=1; i<=100; i++){
		sum1 += i*i;	
	}
	ll sum2 = (100*(101)/2)*(100*(101)/2);
	cout << (sum1-sum2)*(-1) << endl;
	return 0;
}
