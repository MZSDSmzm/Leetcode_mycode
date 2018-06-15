#include<iostream> 

int main(){
	//使用公式时注意数据溢出
	long long n;
	while (std::cin >> n){
		std::cout << (n + 1) * n / 2 << std::endl << std::endl;
	}

	system("pause");
	return 0;
}
