#include<iostream> 

int main(){
	int m, n;
	int number[4] = { 153, 370, 371, 407 };
	while (std::cin >> m >> n){
		int count = 0;
		for (int i = 0; i < 4; i++)
		{			
			if (number[i] >= m && number[i] <= n){
				if (count != 0){
					std::cout << " ";
				}
				std::cout << number[i];
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