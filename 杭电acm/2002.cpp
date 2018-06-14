#include<iostream>
#include<cmath>
#include<iomanip>

#define PI 3.1415927;
int main(){
	double r;
	double V;
	while (std::cin >> r){
		V = 4.0 / 3 * pow(r, 3) * PI;
		std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3) << V << std::endl;
	}	
	system("pause");
	return 0;
}