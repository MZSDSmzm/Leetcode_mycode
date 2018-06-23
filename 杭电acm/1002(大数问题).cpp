#include<iostream> 
#include<string>
int main(){
	int n;
	int a[10005], b[10005], c[10005];
	int result;
	std::string s1, s2;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
		std::cin >> s1 >> s2;
		for (int i = 0; i < s1.length(); i++)
		{
			a[s1.length() - i - 1] = s1[i] - '0';
		}
		for (int i = 0; i < s2.length(); i++)
		{
			b[s2.length() - i - 1] = s2[i] - '0';
		}
		
		int add = 0;
		int maxLength = s1.length() > s2.length() ? s1.length() : s2.length();
		for (int i = 0; i < maxLength; i++)
		{
			c[i] = (a[i] + b[i] + add) % 10;
			if ((a[i] + b[i] + add) / 10 == 1){
				add = 1;
			}
			else{
				add = 0;
			}
		}
		if (add == 1){
			c[maxLength] = 1;
		}
		std::cout << "Case " << i << ":" << std::endl;
		std::cout << s1 << " + " << s2 << " = ";
		if (c[maxLength] == 1){
			std::cout << "1";
		}
		for (int i = maxLength - 1; i >= 0; i--)
		{
			std::cout << c[i];
		}
		std::cout << std::endl;
		if (i != n){
			std::cout << std::endl;
		}
	}

	system("pause");
	return 0;
}