// thetestforprocess.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

//Determine if the password has at least two of
//uppercase letters, lowercase letters, and numbers

bool judge(string&s)
{
	bool flag1 = false;//check numbers
	bool flag2 = false;//check lowercase letters
	bool flag3 = false;//check uppercase letters
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i]<'9'&&s[i]>'0')
		{
			flag1 = true;
		}
		else if (s[i]<'z'&&s[i]>'a')
		{
			flag2 = true;
		}
		else if (s[i]<'Z'&&s[i]>'A')
		{
			flag3 = true;
		}
	}
	if ((flag1&&flag2) || (flag2&&flag3) || (flag1&&flag3))
	{
		return true;
	}
	return false;
}


int main()
{
	int n;
	string password;
	cout << "please enter the number of times that you want to enter the password:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> password;
		if (password[0]<'9'&&password[0]>'0')
		{
			cout << "wrong" << endl;
			continue;
		}
		if (password.length() < 8)
		{
			cout << "wrong" << endl;
			continue;
		}
		if (!judge(password))
		{
			cout << "wrong" << endl;
			continue;
		}
		cout << "yes" << endl;
	}
	return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
