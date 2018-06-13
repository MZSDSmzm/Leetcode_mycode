#include<iostream>
#include<cmath>
#include <iomanip>

int main(){
	double x1, y1, x2, y2;
	double distance = 0;
	while (std::cin >> x1 >> y1 >> x2 >> y2){
		//开方sqrt，次方pow
		distance = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
		//保留小数点后两位，去除std::setiosflags(std::ios::fixed)后4.12会变为4.1
		//C语言，printf("%.2lf\n",distance);  #include <stdio.h>
		std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << distance << std::endl;
	}	
	system("pause");
	return 0;
}
