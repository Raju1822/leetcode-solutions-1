#include <iostream>
using namespace std;
    int main()
    {

      int t;
      cin>>t;
      while(t--)
      {
          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++)
          {
          cin>>arr[i];
          }
          int c=0;

          if(n==1)
          {
          cout<<"1\n";
          }
          else{
          for(int i=0;i<n;i++)
          {
              if(arr[i]>arr[i+1])
              c++;
          }

              cout<<c<<"\n";
          }




      }



    return 0;
    }
