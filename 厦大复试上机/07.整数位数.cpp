//输入一个正整数，输出这个数的位数

#include<iostream>

using namespace std;

int main(){
	int number;
	int count;
	while(cin >> number){
		count = 0; 
		if(number < 0)
			return 0;
		while(number > 0){
			number /= 10;
			count++;
		}
		cout <<"Number bits is " <<count << endl;
	}
	return 0;
}
