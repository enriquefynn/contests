#include <iostream>

using namespace std;

main()
{
	int n, m;
	cin >> n >> m;
	++n;
	++m;
	int x, y;
	string s;
	char p;
	bool mat[100][100];
	for (int i = 0; i <= n+1; ++i)
		for (int j = 0; j <= m+1; ++j)
			mat[i][j] = false;
	bool err;
	while(cin >> x >> y >> p)
	{
		++x;
		++y;
		cin >> s;
		err = false;
		for (int i = 0; i < s.size(); ++i)
		{
			switch(s[i])
			{
				case 'R':
					if (p == 'N')
						p = 'E';
					else if (p == 'E')
						p = 'S';
					else if (p == 'S')
						p = 'W';
					else
						p = 'N';
					break;
				case 'L':
					if (p == 'N')
						p = 'W';
					else if (p == 'E')
						p = 'N';
					else if (p == 'S')
						p = 'E';
					else
						p = 'S';
					break;
				case 'F':
					if (p == 'N')
					{
						if (mat[x][y+1])
							break;
						else if (y+1 == m+1){err = true;
							mat[x][y+1] = true;
							goto end;}
						else
							++y;
							break;
					}
					else if (p == 'E')
					{
						 if (mat[x+1][y])
                            break;
                        else if (x+1 == n+1){ err = true;
							mat[x+1][y] = true;
                            goto end;}
                        else
                            ++x;
							break;
					}	
					else if (p == 'S')
                    {
                         if (mat[x][y-1])
                            break;
                        else if (y-1 == 0)
						{	
							err = true;
							mat[x][y-1] = true;
                            goto end;
						}
                        else
                            --y;
							break;
                    }
					else if (p == 'W')
                    {
                         if (mat[x-1][y])
                            break;
                        else if (x-1 == 0){ err = true;
							mat[x-1][y] = true;
                            goto end;}
                        else
                            --x;
							break;
                    }
			}
		}
end:
		cout << x-1 << ' ' << y-1 << ' ' << p;
		if (err) cout << " LOST\n";
		else
			cout << endl;
	}
}











