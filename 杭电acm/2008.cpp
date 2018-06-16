#include<iostream> 

int main(){
	int n;
	int a, b, c;
	while (std::cin >> n){
		a = 0;
		b = 0;
		c = 0;
		if (n == 0){
			continue;
		}
		double num;
		while (n--){
			std::cin >> num;			
			if (num < 0){
				a++;
			}
			else if (num == 0){
				b++;
			}
			else{
				c++;
			}
		}
		std::cout << a << " " << b << " " << c << std::endl;
	}

	system("pause");
	return 0;
}