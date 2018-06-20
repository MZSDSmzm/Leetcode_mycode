#include<iostream> 
#include<iomanip>

int main(){
	double n, m;
	double result;
	while (std::cin >> n >> m){
		result = n;
		while (m-- > 1){
			n = sqrt(n);
			result += n;
		}
		std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << result << std::endl;
	}

	system("pause");
	return 0;
}