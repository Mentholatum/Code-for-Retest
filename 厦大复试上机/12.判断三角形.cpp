//输入一个三角形的三条边，判断能否构成一个三角形

#include<iostream>

using namespace std;

void sort(int a, int b, int c){
	int temp;
	if(a < b){
		if(b < c)
			return;
		else{
			temp = b; b = c; c = temp;
		}
	}
	else{
		temp = a; a = b; b = temp;
		if(b < c)
			return;
		else{
			temp = b; b = c; c = temp;
		}
	}
}

int main(){
	int a,b,c;
	while(cin >> a >> b >> c){
		if(a <= 0 || b <= 0 || c <= 0)
			return 0;
		sort(a,b,c);
		if(a + b > c)
			cout << "Yes" << endl;
		else
			cout << "No" <<endl;
	}
	return 0;
}
