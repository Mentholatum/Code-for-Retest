//将一个十进制数转换为二进制数，2进制数存储在数组b中

#include<iostream>

using namespace std;

//数组从最低位开始存储，输出时从最后一位开始输出，即为最终结果 
int main(){
	int number;
	int arr[20],i,j,len;
	while(cin >> number){
		i = 0;
		len = 0;
		while(number){
			arr[i++] = number % 2;
			number /= 2;
			len++; 
		}
		for(j = len - 1;j >= 0;j--){//注意这里的下标范围
			cout<<arr[j];
		}
		cout <<endl;
	}
	return 0;
}
