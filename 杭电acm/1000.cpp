#include<iostream> 
#include<iomanip>

int main(){
	int a, b;
	while (std::cin >> a >> b){
		std::cout << a + b << std::endl;
	}

	system("pause");
	return 0;
}