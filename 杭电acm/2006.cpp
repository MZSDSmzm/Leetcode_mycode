#include<iostream>
#include<iomanip>
 
int main(){
	int num = 0;
	int n = 0;
	long result;
	while (std::cin >> n){
		result = 1;
		while (n--){
			std::cin >> num;
			if (num % 2 == 1){
				result *= num;
			}			
		}
		std::cout << result << std::endl;
	}
	 
	system("pause");
	return 0;
}