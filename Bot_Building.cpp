#include<bits/stdc++.h>
using namespace std;

void open()
{

	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
}

void displayPathtoPrincess(int n, vector <string> grid)
{
	int mrow, mcolumn, prow, pcolumn;

	if(grid[0][0]=='p')
	{
		prow=0;
		pcolumn=0;
	}
	else if(grid[0][n-1]=='p')
	{
		prow=0;
		pcolumn=n-1;
	}
	else if(grid[n-1][0]=='p')
	{
		prow=n-1;
		pcolumn=0;
	}
	else
	{
		prow=n-1;
		pcolumn=n-1;
	}

	for(int i=0; i<n; i++)
	{
		if(grid[i].find('m')<grid[i].size())
		{
			mrow=i;
			mcolumn=grid[i].find('m');
			break;
		}
	}

	if(prow==0 && pcolumn==0)
	{
		for(int i=n/2; i>0; i--)
			printf("UP\n");
		
		for(int j=n/2; j>0; j--)
			printf("LEFT\n");
	}
	else if(prow==0 && pcolumn==n-1)
	{
		for(int i=n/2; i>0; i--)
			printf("UP\n");
		
		for(int j=n/2; j>0; j--)
			printf("RIGHT\n");
	}
	else if(prow==n-1 && pcolumn==0)
	{
		for(int i=n/2; i>0; i--)
			printf("DOWN\n");
		
		for(int j=n/2; j>0; j--)
			printf("LEFT\n");
	}
	else
	{
		for(int i=n/2; i>0; i--)
			printf("DOWN\n");
		
		for(int j=n/2; j>0; j--)
			printf("RIGHT\n");	
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//open();

	int m;
	vector <string> grid;

	cin >> m;

	for(int i=0; i<m; i++) {
		string s; cin >> s;
		grid.push_back(s);
	}

	displayPathtoPrincess(m,grid);
	
	return 0;
}