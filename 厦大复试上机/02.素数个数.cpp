//判断a~b之间的素数个数，要求代价尽可能小

#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num){
	int n,m;
	m = (int)sqrt(num) + 1;//减小代价的关键一步 
	if( m  < 2)
		return false;
	for(int i = 2; i < m; i++){
		if(num%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int i,a,b;
	int count;
	while(cin >> a >> b){
		count = 0; 
		if(a > b)
			return 0;
		for( i = a;i < b; i++){
			if(isPrime(i))
			count++;
		}
		cout << count << endl;
	}
	return 0;
} 
