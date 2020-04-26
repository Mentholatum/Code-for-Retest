/*
求一组数列中出现的最多的次数

大概的思路就是定义两个数组，一个用于存储数字，
另一个用于存该数字出现的次数
*/

#include<iostream>

using namespace std;

int main(){
	int arr[101];
	int count[101] = {0};
	int i,j,n;
	int maxpos,c;//maxpos记录出现次数最多的数的数组位置，c记录出现的次数
	while(cin >> n){
		c = 0; maxpos = 0;
		if(n < 0)
			return 0;
		for(i = 0;i < n; i++){
			cin >> arr[i];
			count[i] ++;
		}
		for(i = 0;i < n; i++){
			for(j = i + 1;j < n;j++){
				if(arr[i] == arr[j])
					count[i]++;
			}
		}
		for(i = 0;i < n;i++){
			if(count[i] > c){
				maxpos = i;
				c = count[i];
			}
				
		}
		cout << "The number showed most time is " << arr[maxpos] << endl;
		cout << "It showed " << c <<" times"<<endl;
	} 
	return 0;
}
