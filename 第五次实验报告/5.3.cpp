//#include<iostream>
//using namespace std;
//class Score
//{
//public:
//	int No;
//	int score;
//	Score()
//	{
//		No = 0;
//		score = 0;
//	}
//	void input(int n, int s)
//	{
//		No = n;
//		score = s;
//	}
//};
//void max(Score*n[5]) {
//	double arr[5];
//	for(int i=0;i<5;i++){
//		arr[i]=n[i]->score;
//	}
//	int index = 0;
//	for (int i = 1; i <= 4; i++) {
//		if (arr[index] < arr[i]) {
//			index = i;
//		}
//	}
//	cout << "No:" << n[index]->No << " score:" << n[index]->score << endl;
//}
//int main()
//{
//	Score* s[5];
//	for (int i = 0; i < 5; i++)
//	{
//		s[i] = new Score;
//		int n, sc;
//		cout << "请输入第" << i + 1 << "个学生的学号和成绩：" << endl;
//		cin >> n >> sc;
//		s[i]->input(n, sc);
//	}
//	max(s);
//	for (int i = 0; i < 5; i++)
//	{
//		delete s[i];
//	}
//	return 0;
//}