#include<iostream>
#include<algorithm>

/*
1��sort����������������Ҳ�������������������ͷ�ļ�#include < algorithm>
2����ʹ�õ����򷽷��������ڿ��ŵķ�����ʱ�临�Ӷ�Ϊn*log2(n)
3��Sort�����������������������������ɲ�д��
��1����һ����Ҫ������������ʼ��ַ��
��2���ڶ����ǽ����ĵ�ַ�����һλҪ����ĵ�ַ��
��3������������������ķ����������ǴӴ�СҲ���Ǵ�С���󣬻����Բ�д��������������ʱĬ�ϵ����򷽷��Ǵ�С��������
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