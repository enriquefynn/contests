#include <iostream>

using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;
    for(int i = 0; i < s.size()-1; ++i)
    {
        int maxj = i;
        for(int j = i+1; j <= i+k; ++j)
        {
            if (j > s.size())
                break;
            if (s[j] > s[maxj])
                maxj = j;
        }
        if (s[maxj] == s[i])
            continue;
        if ((maxj - i) <= k)
        {
            for (int k = maxj; k > i; --k)
                swap(s[k], s[k-1]); 
            k-= (maxj - i);
        }
    }
    cout << s << endl;
}
