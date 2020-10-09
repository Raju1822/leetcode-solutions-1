#include<iostream>
using namespace std;
int main()
/*
{
    int a,b,c,num1,num2;
    cout<<"enter any two no.";
    cin>>a>>b;
    if(a<b)
    {
        b=a+b;
        a=b-a;
        b=b-a;
    }
    num1=a,num2=b;
    while(b>0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    cout<<"hcf="<<c<<"..LCM="<<(num1*num2/c);
    return 0;

}  */

/* ***********pattern*********
A B C D E F G G F E D C B
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A

{
    int p=65;
    for(int i=7;i>0;i--)
    {
        for(int j=0;j<13;j++)
        {
            if(j>=i&&j<13-i)
            printf("  ");
            else
            {
            printf("%c ",p);
            if(j<i-1)
            p++;
            if(j>i-1)
                p--;
            }
        }
        p=65;
        printf("\n");
    }
    return 0;
}

  **********************/

  /* ************pattern********* */

  {
      for(int i=0;i<6;i++)
      {

          for(int j=0;j<9;j++)
          {
           if(j<4||j>5)
                printf(" ");
           else printf("1");
          }
          printf("\n");
      }
      return 0;
  }
