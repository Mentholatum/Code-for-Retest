/*
求一个整型数组，所有子串中元素和最大的子串，输出和是多少，子串是什么。
如 {1,2,3,4,5，-1，-2}最大子串是{1,2,3,4,5}，和是15。
*/

#include<iostream>

using namespace std;

int main(){
	int arr[1000];
	int start,end,temp;
	int max,sub;
	int n,i,j;
	while(cin >> n){
		max = 0; sub = 0;
		start = 0; end = 0; temp = 0;
		for(i = 0 ;i < n; i++)
			cin >> arr[i];
		for(i = 0;i < n; i++){//循环记录最长子串的位置 
			sub += arr[i];
			if(sub < 0){
				sub = 0;
				temp = i + 1;
			}
			if(sub > max){
				max = sub;
				start = temp;
				end = i;
			}
		}
		cout << "Max sum is " << max << endl;
		cout << "Max sub array is ";
		for(i = start;i <= end;i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
