// Problem Link: https://codeforces.com/problemset/problem/300/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	fast_io();
	int n;
	vector<int> neg;
	vector<int> pos;
	vector<int> zero;
	cin >> n;
	vector<int> vec(n);

	int negc = 0;
	for (auto &x : vec)
	{
		cin >> x;
		if (x == 0)
			zero.push_back(x);
		else if (x > 0)
			pos.push_back(x);
		negc += (x < 0);
	}

	if (negc < 3)
	{
		for (int i = 0; i < n; i++)
		{
			if (vec[i] < 0)
			{
				if (neg.empty())
					neg.push_back(vec[i]);
				else
					zero.push_back(vec[i]);
			}
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (vec[i] < 0)
			{
				if (neg.empty())
					neg.push_back(vec[i]);
				else if (pos.size() < 2)
					pos.push_back(vec[i]);
				else
					zero.push_back(vec[i]);
			}
		}
	}

	cout << neg.size() << " ";
	for (auto x : neg)
		cout << x << " ";
	cout << endl;

	cout << pos.size() << " ";
	for (auto x : pos)
		cout << x << " ";
	cout << endl;

	cout << zero.size() << " ";
	for (auto x : zero)
		cout << x << " ";
	cout << endl;
	return 0;
}
