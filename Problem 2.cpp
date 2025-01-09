#include <bits/stdc++.h>
using namespace std;

int solution(int limit){
	int a=1,b=2,sum=0;
	while(b<limit){
		if(b%2==0){
			sum += b;
		}
		int c = a+b;
		a = b;
		b = c;
	}
	return sum;
}

int main(){
	cout << solution(4000000) << endl;
	return 0;
}
