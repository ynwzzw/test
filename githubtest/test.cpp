#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main(){
	int year;
	int month;
	int days;
	bool flag;//����һ��bool�ͱ����������ǲ������꣬����Ϊtrue������Ϊfalse

	cout<<"��������ݣ�";
	cin>>year;
	cout<<"�������·ݣ�";
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
	cout <<year<<"��"<<month<<"��"<<"��"<<days<<"��"<<endl;
	cout <<year<<"��"<<month<<"��"<<"��"<<days<<"��"<<endl;
	cout <<year<<"��"<<month<<"��"<<"��"<<days<<"��"<<endl;
	cout <<year<<"��"<<month<<"��"<<"��"<<days<<"��"<<endl;

	system("pause");
	return 0;
}
