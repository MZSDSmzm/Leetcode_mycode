#include<iostream> 
#include<iomanip>

int main(){
	int m, n;
	double result;
	std::cin >> m;
	while (m--){
		result = 0;
		std::cin >> n;
		while (n){
			if (n % 2 == 0){
				result += (-1.0) / n;
			}
			else{
				result += 1.0 / n;
			}
			n--;
		}
		std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << result << std::endl;
	}

	system("pause");
	return 0;
}