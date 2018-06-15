#include<iostream> 

int main(){
	int n;
	int result;
	while (std::cin >> n){
		result = 0;
		while (n){
			result += n;
			n--;
		}
		std::cout << result << std::endl << std::endl;
	}

	system("pause");
	return 0;
}