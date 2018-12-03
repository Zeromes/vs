#include "pch.h"
#include<cmath>
#include<iostream>
using namespace std;
int jiecheng(int n)
{
	int r;
	if (n == 1)
		r = 1;
	else
		r = n * jiecheng(n - 1);
	return r;
}
bool check(int m, int n)
{
	if (m >= 0 && n >= 0 && n >= m)
		return true;
	else
		return false;
}
int main()
{
suru:
	int m;
	int n;
	cout << "请先输入m（上）和n（下）：" << endl;
	cin >> m >> n;
	if (check(m, n))
		cout << "结果为：" << jiecheng(n) / (jiecheng(n - m)*jiecheng(m)) << endl;
	else
	{
		cout << "输入数据非法！" << endl;
		goto suru;
	}
	return 0;
}