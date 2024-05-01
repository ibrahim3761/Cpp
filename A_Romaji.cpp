#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i,si=s.size(),f=0;

    for(i=1; i<=si; i++)
    {
        if(s[i-1]=='a' || s[i-1]=='e' || s[i-1]=='i'|| s[i-1]=='o'|| s[i-1]=='u'|| s[i-1]=='n')
            continue;
        else
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u')
                continue;
            else
            {
                f=1;
                break;
            }

        }
    }
    if(f) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}


     		 		 	 					 		 		 		  	