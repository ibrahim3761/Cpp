#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define yo cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
//I am Ibrahim
//Yemete kudaisa

using namespace std;

int main()
{
    int t;
    cin >>t;
      while(t--)
    {
        char arr[11][11];
        int i,j, sum=0;
        for(i=1; i<=10; i++)
        {
            for(j=1; j<=10; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(i=1; i<=10; i++)
        {
            for(j=1; j<=10; j++)
            {
                if(arr[i][j] == 'X')
                {
                    if(i<=5)
                    {
                        if(j<=5)
                        {
                            sum+=min(i,j);
                        }
                        else
                        {
                            sum+=min(i,11-j);
                        }
                    }
                    else
                    {
                        if(j<=5)
                        {
                            sum+=min(11-i,j);
                        }
                        else
                        {
                            sum+=min(11-i,11-j);
                        }
                    }

                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}