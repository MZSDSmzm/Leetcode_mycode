#include<iostream>
#include<algorithm>

/*
1、sort函数可以三个参数也可以两个参数，必须的头文件#include < algorithm>
2、它使用的排序方法是类似于快排的方法，时间复杂度为n*log2(n)
3、Sort函数有三个参数：（第三个参数可不写）
（1）第一个是要排序的数组的起始地址。
（2）第二个是结束的地址（最后一位要排序的地址）
（3）第三个参数是排序的方法，可以是从大到小也可是从小到大，还可以不写第三个参数，此时默认的排序方法是从小到大排序。
*/

int main(){
	char input[3];
	while (std::cin >> input[0] >> input[1] >> input[2]){
		std::sort(input, input + 3);
		std::cout << input[0] << " " << input[1] << " " << input[2] << std::endl;
	}	
	system("pause");
	return 0;
}