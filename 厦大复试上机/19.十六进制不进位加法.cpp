/*
输入：两个十六进制的数字，不区分大小写
输出：两数之和
*/

#include<iostream>
#include<cstring>

using namespace std;

int str_to_num(char m){				//将字符转化为数字
	int n;
	if(m >= '0' && m <='9')
		n = m -'0';
	else if(m >= 'a' && m <='f')
		n = m - 'a' + 10; 	//mark
	else
		n = m - 'A' + 10; 	//mark
	return n;
}

char num_to_str(int n){				//将数字转化为字符
	char m;
	if(n >= 0 && n <=9)
		m = n + '0';
	else
		m = n - 10 + 'A';			//注意10以上的数字转为字符 
	return m;
}


int main(){
	char a[10],b[10];
	int lena,lenb;
	int i,j,k;
	int x,y,z;
	int index;
	while(cin >> a >> b){
		index = 0;
		lena = strlen(a);
		lenb = strlen(b);
		char c[10];
		for(i = lena - 1,j = lenb - 1; i >= 0 || j >= 0; i--, j--){			//从字符串的最低位开始遍历
			if(i >= 0)
				x = str_to_num(a[i]);
			else
				x = 0;
			if(j >= 0)
				y = str_to_num(b[i]);
			else
				y = 0;
			z = (x + y) % 16;					//十六进制不进位加法
			c[index++] = num_to_str(z);
		}
		for (k = index - 1; k >= 0; k--) {
            if (k == index-1 && c[k] == 0) continue;                    //首位不为0
            cout << c[k];
        }
        cout << endl;
	} 
	return 0;
}
