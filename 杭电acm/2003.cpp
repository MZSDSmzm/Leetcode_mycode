#include<iostream>
#include<iomanip>

 
int main(){
	double input;
	while (std::cin >> input){
		//abs( )��Ҫ���ڶ��������ľ���ֵ
		//fabs( )��Ҫ���󾫶�Ҫ����ߵ�double��float �͵ľ���ֵ
		std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << abs(input) << std::endl;
	}	
	system("pause");
	return 0;
}