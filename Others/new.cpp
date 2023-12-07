#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,r,b;
        cin>>n>>r>>b;

        int x=ceil(r*1.0/(b+1));//1

        int y=(r/x)-b;//-2

        int p=y;//-2

        int cnt=b;//2

        for(int i=1; i<=r; i++)
        {
            cout<<"R";
            if(i%x==0 && cnt>0)
            {
                cout<<"B";
                cnt--;
            }
            if(n>3 && y<0)
            {
                if(i%x==0 && p<0)
                {
                    cout<<"B";
                    p++;
                }
            }
        }

        cout<<endl;
    }
    return 0;
}
