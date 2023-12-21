#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main(){
	int year;
	int month;
	int days;
	bool flag;//设置一个bool型变量贩毒案是不是闰年，是设为true，不是为false

	cout<<"请输入年份：";
	cin>>year;
	cout<<"请输入月份：";
	cin>>month;

	if(year%400==0){
		flag =true;
	}
	else if(year%4 == 0&&year%100 != 0) {
		flag = true;
	}
	else{
		flag = false;
	}
	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		days = flag?29:28;
		break;
	default:
		days = 30;
	}
	cout <<year<<"年"<<month<<"月"<<"有"<<days<<"天"<<endl;
	cout <<year<<"年"<<month<<"月"<<"有"<<days<<"天"<<endl;
	cout <<year<<"年"<<month<<"月"<<"有"<<days<<"天"<<endl;
	cout <<year<<"年"<<month<<"月"<<"有"<<days<<"天"<<endl;

	system("pause");
	return 0;
}
