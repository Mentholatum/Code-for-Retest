/*写一个判断3位数是否为水仙花数的函数，并调用函数输出3位数中所有的水仙花数。

数论中，水仙花数（Narcissistic number），用来描述一个N位非负整数，其各位数字的N次方和等于该数本身。*/


#include<iostream>

using namespace std;

bool Daffodils(int number){
	int a,b,c,result;
	a = number / 100;
	b = (number / 10) % 10;
	c = (number % 100) % 10;
	result = a*a*a + b*b*b + c*c*c;
	if(number == result)
		return true;
	else
		return false;
}

int main(){
	int i;
	for(i = 100; i <1000; i++){
		if(Daffodils(i))
			cout << i << ' ';
	}
	return 0;
}
