#include<bits/stdc++.h>
using namespace std;
/*
int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, a, i;
        cin >> x;
        int v[4];
        for(i=0; i<3; i++){
            cin >> v[i];
        }

        if(v[x-1] == 0) {
            cout << "NO" << endl;
        } else {
            int n, count = 1;
            n = v[x-1];
            while(n != 0 && count <= 2) {
                count++;
                if(v[n-1] == 0) {
                    cout << "NO" << endl;
                    break;
                } else {
                    count++;
                    n = v[n-1];
                }
            }
            if(count == 3) {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,ans=0;
        cin >> n;
        vector <int> v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=1;i<n-1;i++)
        {
            ans=max(ans,v[i]-v[0]);
        }
        for(i=0;i<=n-1;i++)
        {
            ans=max(ans,v[n-1]-v[i]);
        }
        for(i=1;i<n;i++)
        {
            ans=max(ans,v[i-1]-v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;
        vector <int> v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v,v+n);
        cout << v[n-1]-v[0] << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i;
    cin >> n >> k;
    if(n%2==0)
    {
        i=n/2;
    }
    else{
        i=(n+1)/2;
    }
    if(k<=i){
        cout << (k*2)-1 <<endl;
    }
    else{
        cout << (k-i)*2 << endl;
    }
    return 0;
}
int main()
{
    int i,n,k,sum=0,count=0,coin=0;
    cin >> n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    for(i=n-1;i>=0;i--)
    {
        coin+=v[i];
        count ++;
        if(coin>(sum/2)){
            break;
        }
    }
    cout << count<< endl;
}
int main()
{
    int n,i;
    cin >> n;
    vector <int> v(n);
    for(i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin()+1,v.end());
    if(n==1){
            cout << 0 << endl;
    }
    else if(v[0] == v[n-1]) {
            cout << 1 << endl;
    }
    else if(v[0] > v[n-1]) {
            cout << 0 << endl;
    }
    else if(v[0] < v[n-1]) {
            cout << v[n-1]-v[0]+1 << endl;
    }
    return 0;
}
int main()
{
    int n,i;
    cin >> n;
    vector <int> v(n);
    for(i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    for(i=0; i<n; i++){
        cout << v[i] <<" ";
    }
    cout << endl;
    return 0;
}
int main ()
{
    int n,i,count=1,count2=1;
    cin >> n;
    vector < int > v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
    }
    if(n==1){
        cout << "1" << endl;
    }
    else{
        for(i=0;i<n-1;i++)
        {
            if(v[i]<=v[i+1]){
                count ++;
                if(count>count2){
                    count2=count;
                }
            }
            else if (v[i]>v[i+1]){
                count=1;
            }
        }
        cout << count2 <<endl;
    }
    return 0;
}
int main ()
{
    string s1,s2;
    cin >> s1;
    for (int i = 0; i < s1.size(); )
    {
        if (s1[i] == 'W' && s1[i + 1] == 'U' && s1[i + 2] == 'B')
        {
            i += 3;
        }
        else
        {
            if (!s2.empty())
            {
                s2 += ' ';
            }
            while (i < s1.size() && !(s1[i] == 'W' && s1[i + 1] == 'U' && s1[i + 2] == 'B'))
            {
                s2 += s1[i];
                i++;
            }
        }
    }
    cout << s2 << endl;
    return 0;
}
int main()
{
    int n,m,i,k,diff;
    cin >> n >> m;
    vector<int>v;
    for ( i=0;i<m;i++)
    {
        cin >>k;
        v.push_back(k);
    }
    sort (v.begin(),v.end());

    diff = v[n-1]-v[0];
    for(i=0;i<=m-n;i++){
        diff=min(diff,v[i+n-1]-v[i]);
    }
    cout << diff << endl;
    return 0;
}
int main()
{
    int m,n,t;
    cin >> m >> n;
    t=min(m,n);
    if(t%2==0){
        cout << "Malvika" <<endl;
    }
    else{
        cout << "Akshat" << endl;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    v.push_back(n);
    v.push_back(n/10);
    v.push_back(n%10+(n/100)*10);
    sort(v.begin(),v.end());
    cout << v[v.size()-1] << endl;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        while(n%2==0){
            n/=2;
        }0
        if(n>1){
            cout << "YES" << endl;
        }
        else {
            cout <<"NO" <<endl;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0;
        cin >> n;

        count=n/2020;

        if(count>=n%2020){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}
int main()
{
    long long t,n,i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=2; i<=33; i++)
        {
            long long x = pow(2,i) -1;
            if(n%x){ 
            continue;
            }
            cout << n/x << endl;
            break;
        }

    }
}
int main()
{
    int n,m,count=0,sum=0;
    cin >> n >> m;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i]<0)
        {
            sum+=abs(v[i]);
            count++;
        }
        if(count==m){
            break;
        }
    }
    cout << sum <<endl;
    return 0;
}
int main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 1; m*i <=n; i++)
    {
        n++;
    }
    cout << n << endl;
    return 0;
}*/
