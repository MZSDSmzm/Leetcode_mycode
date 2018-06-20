#include<iostream> 

int main(){
	int m, n;
	while (std::cin >> m >> n){
		if (m < 100 || n > 999){
			continue;
		}
		int count = 0;
		for (int i = m; i <= n; i++)
		{
			//153£¬370£¬371£¬407
			if (i == (pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100, 3))){
				if (0 != count){
					std::cout << " ";
				}
				std::cout << i;
				count++;
			}
		}
		if (count == 0){
			std::cout << "no";
		}
		std::cout << std::endl;
	}

	system("pause");
	return 0;
}