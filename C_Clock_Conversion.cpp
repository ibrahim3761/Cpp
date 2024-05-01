#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, time;
        string s, s1;
        cin >> s;
        s1 += s[0];
        s1 += s[1];
        time = stoi(s1);
    
        if (time < 12)
        {
            if (s[0] == '0' && s[1] == '0')
            {
                string t1;
                t1 += s[2];
                t1 += s[3];
                t1 += s[4];
                cout << "12" << t1 << " AM" << endl;
            }

            else if (time < 10)
            {
                string t1;
                t1 = to_string(time);
                t1 += s[2];
                t1 += s[3];
                t1 += s[4];
                cout << "0" << t1 << " AM" << endl;
            }
            else
            {
                string t1;
                t1 = to_string(time);
                t1 += s[2];
                t1 += s[3];
                t1 += s[4];
                cout << t1 << " AM" << endl;
            }
        }
        else
        {
            if (time == 12)
            {
                int ltime;
                ltime = 24 - time;
                string t1;
                t1 = to_string(ltime);
                t1 += s[2];
                t1 += s[3];
                t1 += s[4];
                cout << t1 << " PM" << endl;
            }
            else if (time == 24)
            {
                if (s[3] == '0' && s[4] == '0')
                {
                    cout << "12:00 AM" << endl;
                }
                else
                {
                    int ltime;
                    ltime = 24 - time;
                    string t1;
                    t1 = to_string(ltime);
                    t1 += s[2];
                    t1 += s[3];
                    t1 += s[4];
                    cout << "0" << t1 << " PM" << endl;
                }
            }
            else if (time > 12)
            {
                int ltime;
                ltime = (time + 12) - 24;
                if (ltime < 10)
                {
                    string t1;
                    t1 = to_string(ltime);
                    t1 += s[2];
                    t1 += s[3];
                    t1 += s[4];
                    cout <<"0"<< t1 << " PM" << endl;
                }
                else
                {
                    string t1;
                    t1 = to_string(ltime);
                    t1 += s[2];
                    t1 += s[3];
                    t1 += s[4];
                    cout << t1 << " PM" << endl;
                }
            }
        }
    }
    return 0;
}