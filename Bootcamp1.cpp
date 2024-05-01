/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    vector<int> p, m, s;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        if (t[i] == 1)
            p.push_back(i);
        else if (t[i] == 2)
            m.push_back(i);
        else
            s.push_back(i);
    }

    int max_teams = min({p.size(), m.size(), s.size()});
    cout << max_teams << endl;
    for (int i = 0; i < max_teams; i++) {
        cout << p[i] + 1 << " " << m[i] + 1 << " " << s[i] + 1 << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,p=0;
    vector<vector<int>> a(5, vector<int>(5, 0));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                p=abs(2-i)+abs(2-j);
            }
        }
    }
    cout << p << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int k,i;
        cin >> k;

        vector<int>like;
        for(i=1;like.size()<k;i++)
        {
            if(i%3==0||i%10==3){
                continue;
            }
            else{
                like.push_back(i);
            }
        }
        cout << like[k-1] << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,i,count=0,sum=0,f=1;
    cin >> n >> k;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        sum+=v[i];

    }
        for(i=0;i<n;i++)
        {
            if(v[i]>=v[k-1]&& v[i]>0){
                count ++;
            }
        }
        cout << count << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int i;
    string s;
    cin >> s;
    vector <int>v;
    for(i=0;i<s.size();i++){
        if(s[i]=='+'){
            continue;
        }
        else{
            v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    cout << v[0];
    for(i=1;i<v.size();i++){
        cout<<"+";
        cout<<v[i];
    }
    cout<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,count =0;
    cin >> n;
    vector <char>v;
    for(i=0;i<n;i++)
    {
        char c;
        cin >> c;
        v.push_back(c);
    }
    for(i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            count ++;
        }
    }
    cout << count << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        vector<int> v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            v[i]= n+1-v[i];
        }
        for(i=0;i<n;i++){
            cout << v[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,tc=0;
        cin >> n;
        vector <int> v(n);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int min= *min_element(v.begin(),v.end());
        for(i=0;i<n;i++){
            tc+= v[i] - min;
        }
        cout << tc << endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin >> n >> t;
    vector <char> v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    for(i=1;i<=t;i++){
        for(j=0;j<n-1;j++){
            if(v[j]=='B'&&v[j+1]=='G'){
                v[j]='G';
                v[j+1]='B';
                j++;
            }
            else{
                continue;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout << v[i];
    }
    cout << endl;
    return 0;
}

