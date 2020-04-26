//思路熟稔于心之后，代码理解起来就很简单了

#include<iostream>

using namespace std;

int partition(int arr[], int low, int high){//枢值确认和划分 
	int p = arr[low];
	while(low < high){
		while(low < high && arr[high] > p)
			--high;
		arr[low] = arr[high];
		while(low < high && arr[low] < p)
			++low;
		arr[high] = arr[low];
	}
	arr[low] = p;
	return low;
}
void quick_sort(int arr[], int low, int high){
	int pos = 0;
	if(low < high){
		pos = partition(arr,low,high);
		quick_sort(arr,low,pos - 1);
		quick_sort(arr,pos + 1,high);
	}
}

int main(){
	int n,i;
	int arr[1001];
	while(cin >> n){
		if(n < 0)
			return 0;
		for(i = 0; i < n; i++)
			cin >> arr[i];
		cout << "Before quick sort: ";
		for(i = 0; i < n; i++)
			cout << arr[i] << ' ';
		quick_sort(arr,0,n - 1);
		cout << endl << "After quick sort: ";
		for(i = 0; i < n; i++)
			cout << arr[i] << ' ';
		cout << endl;
	}
	return 0;
}
