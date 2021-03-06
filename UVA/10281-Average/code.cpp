#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>

using namespace std;

double tim(string s)
{
	double time = double((s[0] - '0')*10 + (s[1] - '0'));
	time  += double(((s[3] - '0')*10 + (s[4] - '0'))/60.);
	time += ((s[6] - '0')*10 + (s[7] - '0'))/3600.;
	return time;
}

main()
{
	string s;
	double vel;
	double nv;
	double tempo;
	double t;
	double ac = 0;
	while(getline(cin, s))
	{
		stringstream ss(s);
		string p;
		ss >> p;
		t = tim(p);
		ac +=(t - tempo)*vel;
		if (ss >> nv)
			vel = nv;
		else
			printf("%s %.2lf km\n", p.c_str(), ac);
		tempo = t;
	}
}

