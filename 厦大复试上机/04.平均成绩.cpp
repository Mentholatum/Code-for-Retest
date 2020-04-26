//题目：输入n个学生的成绩，求平均成绩，并统计在平均成绩以上含平均值的学生个数

#include<iostream>

using namespace std;

int main(){
	int number,marks,i;
	int sum,average,count;
	while(cin >> number){
		if(number <= 0)
			return 0;
		int stu[number];
		count = 0;
		sum = 0;
		for(i = 0;i < number; i++){
			cin >> stu[i];
			sum += stu[i];
		}
		average = sum/number;
		for(i = 0;i < number; i++){
			if(stu[i] >= average)
				count++;
			sum += stu[i];
		}
		cout << "The average mark is "<< average << endl;
		cout << "Stundents`number up average mark is "<< count << endl;
	}
	return 0;
} 
