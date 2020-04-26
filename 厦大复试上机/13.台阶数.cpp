//有一楼梯，若每步跨2阶则剩最后一阶，若每步跨3阶，最后剩2阶。若每步跨4阶，则剩3阶，若每步跨5阶，则剩4阶。问楼梯共有几阶。

#include<iostream>

using namespace std;

int main(){
	int step = 9;
	while(!(step % 2 == 1 && step % 3 == 2 && step % 4 == 3 && step % 5 == 4))
		step++;
	cout << step; 
	return 0;
}
