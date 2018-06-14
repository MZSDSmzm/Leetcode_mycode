#include<iostream>
#include<iomanip>

 
int main(){
	double input;
	while (std::cin >> input){
		//abs( )主要用于对求整数的绝对值
		//fabs( )主要是求精度要求更高的double，float 型的绝对值
		std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << abs(input) << std::endl;
	}	
	system("pause");
	return 0;
}