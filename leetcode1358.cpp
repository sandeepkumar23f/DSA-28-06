#include <iostream>
using namespace std;
int numberOfSubstrings(string &s)
{
    int n = s.length();
    int lastSeen[3] = {-1, -1, -1};
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        lastSeen[s[i] - 'a'] = i;
        if (lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1)
        {
            cnt = cnt + (1 + min(min(lastSeen[0], lastSeen[1]), lastSeen[2]));
        }
    }
    return cnt;
}
int main(){
    string s="abcdabad";
    cout<<numberOfSubstrings(s);
}