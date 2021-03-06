/*某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的加密规则如下：
每位数字都加上5，然后用除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
例如：输入2468，输出3197*/

#include<iostream>

using namespace std;

int main(){
	char arr[4];
	int i;
	char temp;
	while(cin >> arr){
		for(i = 0;i < 4; i++){
			arr[i] -= '0';//根据ASCII码将char转化为int 
			arr[i] += 5; 
			arr[i] %= 10;
			arr[i] += '0';//加密完成后再将int改回char 
		}
		
		temp = arr[0]; arr[0] = arr[3]; arr[3] = temp;
		temp = arr[1]; arr[1] = arr[2]; arr[2] = temp;
		for(i = 0;i < 4; i++)
			cout << arr[i];
		cout << endl;
	}
	return 0;
}
