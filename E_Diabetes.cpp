#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i;
    cin >> n;
    vector<int> v(n);
    for(i=0;i<n;i++)
        cin >> v[i];
    int left=0,right=n-1;
    int a=v[left],b=v[right],revathi=0,ayush=0;
    while(1)
    {
        if(a>b)
        {
            b+= v[--right];
            ayush++;
        }
        else if(a<=b)
        {
            a+=v[++left];
            revathi++;
        }
        if (left>right)
        {
            break;
        }
        
    } 
    cout << revathi << " " << ayush;

    return 0;
}
