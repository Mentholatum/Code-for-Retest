//从键盘输入一个字符，判断是否为大写字符和小写字符或者其他字符。

#include<iostream>

using namespace std;

int main(){
	char a;
	while(cin >> a){
		if((a >= 'a')&&(a <= 'z')){
			cout << "Small" << endl;
		}
		else if((a >= 'A')&&(a <= 'Z')){
			cout << "Big" << endl;
		}
		else{
			cout << "Others" << endl;
		}
	}
	return 0;
}
