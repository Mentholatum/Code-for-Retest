//求两个数的最大公约数

#include<iostream>

using namespace std;

int divisor(int a,int b){
	int temp;
	if(b < a){
		temp = a;
		a = b;
		b = a;
	}
	for(int i = a;i > 0;i--){
		if((a % i == 0) && (b % i == 0))
			return i;
	}
}

int main(){
	int a,b;
	while(cin >> a >> b){
		cout << divisor(a,b) << endl;
	}
	return 0;
}
