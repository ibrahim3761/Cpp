/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f=0,i;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            f=1;
        }
    }
    if(f==1) 
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, x, counter = 0;
    string p;
    cin >> p;

    for(i = 0; i < p.size(); i++)
    {
        if(p[i] == 'H'|| p[i] == 'Q'|| p[i] == '9'|| p[i] == '+')
        {
            counter = 1;
            break;
        }
        else
        {
            counter = 0;
        }
    }

    if(counter == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}