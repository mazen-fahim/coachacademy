// problem link: https://codeforces.com/problemset/problem/343/B

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string str;
	stack<char> s;

	cin >> str;

	int ss = str.size();

	for (int i = 0; i < ss; i++)
	{
		if (s.empty() || s.top() != str[i])
			s.push(str[i]);
		else
			s.pop();
	}

	if (s.empty())
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}