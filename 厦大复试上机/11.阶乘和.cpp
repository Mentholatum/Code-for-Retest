//求k阶乘的累加和

#include<iostream>

using namespace std;

int factorial(int num){
	if(num < 0)
		return 0;
	if(num == 0)
		return 1;
	int result = 1;
	for(int i = num;i > 0;i--){
		result *= i;
	}
	return result;
}




int main(){
	int a,i;
	int result;
	while(cin >> a){
		result = 0;
		if(a < 0)
			return 0;
		for(i = a;i > 0;i--){
			result += factorial(i);
		}
		cout << result <<endl;
	}


	return 0;
}

