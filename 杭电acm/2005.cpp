#include<iostream>
#include<iomanip>

int main(){
	int year, month, day;
	char lineOne, lineTwo;
	int resultDays;
	while (std::cin >> year >> lineOne >> month >> lineTwo >> day){
		//普通年（不能被100整除的年份）能被4整除的为闰年
		//世纪年（能被100整除的年份）能被400整除的是闰年
		//1  2  3  4  5  6  7  8  9  10 11 12
		//31 28 31 30 31 30 31 31 30 31 30 31
		resultDays = 0;
		int febDays = 28;
		if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0)){
			febDays++;
		}
		switch (month){
		case 2:
			resultDays += 31;
			break;
		case 3:
			resultDays += 31 + febDays;
			break;
		case 4:
			resultDays += 31 + febDays + 31;
			break;
		case 5:
			resultDays += 31 + febDays + 31 + 30;
			break;
		case 6:
			resultDays += 31 + febDays + 31 + 30 + 31;
			break;
		case 7:
			resultDays += 31 + febDays + 31 + 30 + 31 + 30;
			break;
		case 8:
			resultDays += 31 + febDays + 31 + 30 + 31 + 30 + 31;
			break;
		case 9:
			resultDays += 31 + febDays + 31 + 30 + 31 + 30 + 31 + 31;
			break;
		case 10:
			resultDays += 31 + febDays + 31 + 30 + 31 + 30 + 31 + 31 + 30;
			break;
		case 11:
			resultDays += 31 + febDays + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
			break;
		case 12:
			resultDays += 31 + febDays + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
			break;
		}
		resultDays += day;
		std::cout << resultDays << std::endl;
	}

	system("pause");
	return 0;
}