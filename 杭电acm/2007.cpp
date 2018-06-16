#include<iostream>
#include<cmath>

int main(){
	int first, last;
	long evenResult, oddResult;
	while (std::cin >> first >> last){
		evenResult = 0;
		oddResult = 0;
		if (first > last){
			//first = first^last;  
			//last = last^first;
			//first = last^first;
			std::swap(first, last);
		}
		for (int i = first; i <= last; i++)
		{
			if (i % 2 == 0){
				evenResult += i * i;
			}
			else{
				oddResult += i * i * i;
			}
		}
		std::cout << evenResult << " " << oddResult << std::endl;
	}

	system("pause");
	return 0;
}