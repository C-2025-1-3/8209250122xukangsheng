/*3.1*/
//#include<iostream>
//using namespace std;
//int sum1(int a, int b) {
//	int c = 0;
//	for (int i = 1; i < b || i < a; i++) {
//		if (b % i == 0 && a % i == 0) {
//			c = i;
//		}
//	}
//	if (c == 0) {
//		return 1;
//	}
//	else {
//		return c;
//	}
//}
//int sum2(int a,int b) {
//		return (a*b)/sum1(a,b);
//	}
//int main() {
//	int a, b;
//	cout<<"请输入两个正整数"<< endl;
//	cin >> a >> b;
//	cout <<"最大公约数是" << sum1(a, b) <<"最小公倍数是" <<sum2(a,b)<< endl;
//}
/*3.2*/
//#include<iostream>
//using namespace std;
//bool is_prime(int num)
//{
//	if (num <= 1)
//	{
//		return false;
//	}
//	else
//	{
//		for (int j = 2; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//int main()
//{
//	int n = 0;
//	int i = 2;
//	for (; i <= 200; i++)
//	{
//		if (is_prime(i) == true)
//		{
//			n++;
//			cout << i << " ";
//			if (n % 10 == 0)
//			{
//				cout << endl;
//			}
//		}
//	}
//}
/*3.3*/
//#include<iostream>
//#include"mytemperature.h"
//using namespace std;
//int main()
//{
//	double C=40.0,F=105.0;
//	C_to_F(C);
//	F_to_C(F);
//	return 0;
//}
/*3.5*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int day = 10, peach = 1;
//	for (; day >= 1; day--)
//	{
//		cout << day << " " << peach << endl;
//		peach = (peach + 1) * 2;
//	}
//}