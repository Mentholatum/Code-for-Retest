//从键盘输入一个一维数组，将数组各个元素逆置

#include<iostream>

using namespace std;

int main(){
	int n,i,j,temp;
	while(cin >> n){
		if(n < 0)
			return 0;
		int arr[n];
		for(i = 0;i < n;i++){
			cin >> arr[i];
		}
		cout << "Before reverse:" << endl; 
		for(i = 0;i < n;i++){
			cout << arr[i] << ' ';
		}
		cout<<endl;
		for(i = 0,j = n-1;i < j;i++,j--){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		cout << "After reverse:" << endl;
		for(i = 0;i < n;i++){
			cout << arr[i] << ' ';
		}
		cout<<endl;
	}
	return 0;
}
