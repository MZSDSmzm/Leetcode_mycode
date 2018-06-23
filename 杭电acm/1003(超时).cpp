#include<iostream> 

int main(){
	int t;
	int n;
	int a[100005];
	std::cin >> t;
	for (int i = 0; i < t; i++){
		memset(a, 0, sizeof(a));
		std::cin >> n;
		for (int i = 0; i < n;i++){
			std::cin >> a[i];
		}

		__int64 maxResult = 0;
		__int64 result;
		int first = 1, last = 1;
		for (int i = 0; i < n; i++)
		{
			result = a[i];
			for (int j = i + 1; j < n; j++)
			{
				result += a[j];
				if (result > maxResult){
					maxResult = result;
					//std::cout << maxResult << " ";
					first = i + 1;
					last = j + 1;
				}
			}
		}
		std::cout << "Case " << i + 1 << ":" << std::endl;
		std::cout << maxResult << " " << first << " " << last << std::endl;
		if (i != t - 1){
			std::cout << std::endl;
		}
	}

	system("pause");
	return 0;
}