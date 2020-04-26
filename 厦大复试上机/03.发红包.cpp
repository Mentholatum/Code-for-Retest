/*题目：
微信发红包的问题，输入两个数m和n，分别表示要发的钱数以及红包总包数，然后输出每个人发到了多少钱。

输入样例：
5.2
4
输出样例：
0.85 1.74 0.24 2.37*/

#include<iostream>
#include<stdlib.h>//使用rand函数的头文件
using namespace std;

int main(){
	float money,temp = 0.0;
	int n;
	while(cin >> money >> n){
		float a[n];
		for(int i = 0;i < n - 1;i++){
			do{
				temp = rand()%(int)(money*100)*0.01;//钱的单位是元，故精确到小数点后两位
			}while(temp == 0.0);
			a[i] = temp;
			money-=temp;
		}
		a[n - 1] =money;
		for(int i = 0;i < n; i++){
			cout << a[i] << ' ';
		}
	}
	return 0; 
} 
