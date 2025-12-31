/*4.1.1*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	int num;
//	int arr[10];
//	cout << "Enter ten numbers:";
//	for (int i = 0; i < 10; i++)
//	{
//		cin >>num ;
//		if (i == 0)
//		{
//			arr[i] = num;
//			n += 1;
//		}
//		else
//		{
//			for (int m = 0, j = 0; j < i; j++)
//			{
//				if (num == arr[j])
//					m += 1;
//				if (j == i - 1 && m == 0)
//				{
//					arr[n] = num;
//					if (i != 9)
//					{
//						n += 1;
//					}
//				}
//			}
//		}
//	}
//	cout << "The distinct numbers are:";
//	for (int k = 0; k < n; k++)
//	{
//		cout << arr[k]<<" ";
//	}
//	return 0;
//}
/*4.1.2*/
//#include<iostream>
//using namespace std;
//void bubble_sort(double arr[], int n) {
//	int i, j, temp;
//	for (i = 0; i < n - 1; i++) {
//		for (j = 0; j < n - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main() {
//	double n[10];
//	for (int i = 0; i < 10; i++) {
//		cin >> n[i];
//	}
//	bubble_sort(n, 10);
//	for (int i = 0; i < 10; i++) {
//		cout << n[i] << " ";
//	}
//	return 0;
//}
/*4.1.3*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[100] = { 0};
//	for (int i = 0; i <= 99; i++)
//	{
//		arr[i] = 1;
//	}
//	for (int j = 1; j <= 99; j =j+ 3)
//	{
//		arr[j] = 0;
//	}
//	for (int m = 3; m <= 100; m++)
//	{
//		for (int n = m - 1; n <= 99; n = n + m + 1)
//		{
//			if (arr[n] == 1)
//			{
//				arr[n] = 0;
//			}
//			else
//			{
//				arr[n] = 1;
//			}
//		}
//	}
//	for (int k = 0; k <= 99; k++)
//	{
//		if (arr[k] == 1)
//		{
//			cout << k + 1 << " ";
//		}
//	}
//}
/*4.1.4*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr1[80] = { };
//	int arr2[80] = { };
//	int arr[160] = {};
//	int num1;
//	int num2;
//	int n1 = 1;
//	int n2 = 1;
//	cout << "Enter list1:";
//	for (int i = 0; cin >> num1; i++)
//	{
//		arr1[i] = num1;
//		if(cin.peek() == '\n')
//		{
//			break;
//		}
//		n1 += 1;
//	}
//	cout << "Enter list2:";
//	for (int j = 0; cin >> num2; j++)
//	{
//		arr2[j] = num2;
//		if (cin.peek() == '\n')
//		{
//			break;
//		}
//		n2 += 1;
//	}
//	for (int k = 0; k < n1; k++)
//	{
//		arr[k] = arr1[k];
//	}
//	for (int l = n1; l < (n1 + n2); l++)
//	{
//		arr[l] = arr2[l-n1];
//	}
//	int num = n1 + n2;
//	for (int m = 0; m < num-1; m++)
//	{
//		for (int n = m; n <num-1-m; n++)
//		{
//			if (arr[n] > arr[n + 1])
//			{
//				int t = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = t;
//			}
//		}
//	}
//	for (int m = 0; m < num - 1; m++)
//	{
//		for (int n = m; n < num - 1 - m; n++)
//		{
//			if (arr[n] > arr[n + 1])
//			{
//				int t = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = t;
//			}
//		}
//	}
//	cout << "The merged list is ";
//	for (int q = 0; q < (n1 + n2); q++)
//	{
//		cout << arr[q] << " ";
//	}
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int indexOf(const string& subStr, const string& mainStr) {
//    // find()返回子串首次出现的位置，类型为size_t
//    size_t pos = mainStr.find(subStr);
//    // 判断是否找到：string::npos表示无效位置（未找到）
//    if (pos != string::npos) {
//        return static_cast<int>(pos); // 转换为int类型返回索引
//    }
//    else {
//        return -1; // 未找到返回-1，与常规索引逻辑一致
//    }
//}
//int main()
//{
//    string subStr, mainStr;
//
//    // 读取子串（不含空格，若需含空格可使用getline）
//    cout << "请输入子串：";
//    cin >> subStr;
//
//    // 忽略前一个输入残留的换行符，再读取主串（支持含空格）
//    cin.ignore();
//    cout << "请输入主串（可包含空格）：";
//    getline(cin, mainStr);
//
//    // 调用indexOf函数获取结果
//    int result = indexOf(subStr, mainStr);
//
//    // 输出结果
//    cout << "子串\"" << subStr << "\"在主串\"" << mainStr << "\"中的索引：" << result << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <cctype>  // 用于字符处理函数（如 toupper）
//using namespace std;
//
//// 定义 count 函数，统计字符串中每个字母出现的次数
//void count(const char s[], int counts[]) {
//    // 初始化 counts 数组为 0
//    for (int i = 0; i < 26; ++i) {
//        counts[i] = 0;
//    }
//
//    // 遍历字符串，统计字母出现次数
//    int index;
//    for (int i = 0; s[i] != '\0'; ++i) {
//        // 判断是否为字母
//        if (isalpha(s[i])) {
//            // 转换为大写字母，统一处理大小写
//            char upperChar = toupper(s[i]);
//            // 计算字母在 counts 数组中的索引
//            index = upperChar - 'A';
//            // 对应字母计数加 1
//            counts[index]++;
//        }
//    }
//}
//int main() {
//    // 定义字符数组存储输入字符串，根据需求调整大小
//    char inputStr[1000];
//    // 定义 counts 数组，存储 26 个字母的出现次数
//    int counts[26];
//
//    // 提示用户输入字符串
//    cout << "Enter a string: ";
//    // 读取用户输入的字符串
//    cin.getline(inputStr, sizeof(inputStr));
//
//    // 调用 count 函数统计字母出现次数
//    count(inputStr, counts);
//
//    // 遍历 counts 数组，输出非零的次数
//    for (int i = 0; i < 26; ++i) {
//        if (counts[i] > 0) {
//            // 将索引转换为对应的字母（大写），并输出次数
//            char letter = 'A' + i;
//            cout << letter << ": " << counts[i] << " times" << endl;
//        }
//    }
//    return 0;
//}
/*4.2.1*/
//#include<iostream>
//using namespace std;
//void f(char* st, int i)
//{
//    st[i] = '\0';
//    cout << st;  
//    if (i > 1) f(st, i - 1);
//}
//void main()
//{
//    char st[] = "abcd";
//    f(st, 4);
//}
/*4.2.2*/
//#include<iostream>
//using namespace std;
//int* f()
//{
//	int* list = new int[4];
//	for(int i=0;i<4;i++){
//		list[i] = i+1;
//	}
//	return list;
//}
//void main()
//{
//	int* p = f();
//	cout << p[0] << endl;
//	cout << p[1] << endl;
//	delete[] p;
//}
/*4.2.3*/
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int indexOf(const char s1[], const char s2[])
//{
//    int l1 = strlen(s1);
//    int l2 = strlen(s2);
//    if (l1 > l2) return -1;
//    for (int i = 0; i <= l2 - l1; i++) 
//    {
//        int match = 1;
//        for (int j = 0; j < l1; j++)
//        {
//            if (s2[i + j] != s1[j])
//            {
//                match = 0;
//                break;
//            }
//        }
//        if (match) return i;
//    }
//    return -1;
//}
//
//int main()
//{
//    char a[100], b[100];
//    int num;
//    cout << "Enter the first string: " << endl;
//    cin >> a;
//    cout << "Enter the second string: " << endl;
//    cin >> b;
//    num = indexOf(a, b);
//    if (num == -1)
//        cout << "S1 is not a substring of S2" << endl;
//    else
//        cout << "S1 is a substring of S2! index is: " << num << endl;
//
//    return 0;
//}
/*4.2.4*/

//#include<iostream>
//using namespace std;
//int parseHex(const char*const hexString) {
//	int len = strlen(hexString) - 1;
//	int num = 0;
//	int sum = 0;
//	for (int i = 0; i <=len;i++)
//	{
//		char ch = hexString[i];
//		if (ch >= '0' && ch <= '9') {
//			num = ch - '0';
//		}
//		else if (ch >= 'A' && ch <= 'F') {
//			num = ch - 'A' + 10;
//		}
//		else if (ch >= 'a' && ch <= 'f') {
//			num = ch - 'a' + 10;
//		}
//		sum = sum * 16 + num;
//		num = 0;
//	}
//	return sum;
//}
//int main() {
//	char hexString[1000];
//	cin >> hexString;
//	int a;
//	a= parseHex(hexString);
//	cout << a << endl;
//	return 0;
//}