#include<iostream>
#include<cmath>
#include <iomanip>

int main(){
	double x1, y1, x2, y2;
	double distance = 0;
	while (std::cin >> x1 >> y1 >> x2 >> y2){
		//����sqrt���η�pow
		distance = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
		//����С�������λ
		std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << distance << std::endl;
		//C���ԣ�printf("%.2lf\n",distance);  #include <stdio.h>
	}	
	system("pause");
	return 0;
}