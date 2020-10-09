#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,j,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for( j=0;j<n;j++)
    {


        if(a[j]>0)
        {
            p=j;
            break;
        }

    }
    for(int k=p;k<n;k++)
    {
        if(a[k+1]-a[k]>1)
       {cout<<a[k]+1;
       m=1;
       break;
       }
    }
    if(m==0)
        cout<<a[n-1]+1;
    return 0;

}
