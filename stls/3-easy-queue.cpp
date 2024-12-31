// Problem Link: https://www.spoj.com/problems/QUEUEEZ/en/

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
	queue<int> que;
	int t;
	cin >> t;
	while (t--)
	{
		int q, n;
		cin >> q;
		if (q == 1)
		{
			cin >> n;
			que.push(n);
		}
		else if (q == 2)
		{
			if (!que.empty())
				que.pop();
		}
		else
		{
			if (que.empty())
				cout << "Empty!" << '\n';
			else
				cout << que.front() << '\n';
		}
	}

	return 0;
}
