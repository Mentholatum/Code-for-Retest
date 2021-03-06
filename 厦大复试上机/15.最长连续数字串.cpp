/*
输入一个字符串，内有数字和非数字字符。请编写一个函数找出其中连续最长的数字串，
返回找到的连续最长数字串及其长度。若连续最长数字串有多个则返回最后一个串。
例如，输入“abcd12845ed12 5ss123?456789”，返回“456789”及6；
又如，输入“abcd12345 ss54321”返回“54321”和5。

思路：
①	采用工作指针p扫描整个数组，用i记录数字序列的起点，j记录数字序列的终点。
找长度的最大值，并记录位置。
②	采用工作指针扫描整个数组，i，j分别记录数字序列起点终点，然后将每个序列存入二维数组中，再在二维数组中找长度最大值，再输出。
*/

#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char arr[1000];
	int high,low;
	int i,j,p, max,len;
	int n;
	while(gets(arr)){
		max = 0, len = 0;
		i = 0,j = 0, p = 0;
		n = strlen(arr);
		for(; p < n; p++){
			while(!(arr[p] >= '0' && arr[p] <= '9'))	//找到第一个数字的位置
				p++;
			i = p;
			while(arr[p] >= '0' && arr[p] <= '9')
				p++;
			j = p;
			len = j - i;
			if(len >= max){
				max = len;
				low = i;
				high = j;
			}
		}
		cout << "Max number string length is " << len <<endl;
		cout << "Max number string is ";
		for(i = low; i < high;i++)
			cout << arr[i];
		cout << endl;
	}
	return 0;
}
