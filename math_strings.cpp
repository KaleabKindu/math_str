#include <iostream>
#include <string>
using namespace std;
int firnum(int, string);
int secnum(int, string);
int powd(int, int);
int main()
{
  int z,z1,z2,Num1,Num2;
  string str;
  cout<<"write any arithmetic operation for the program to calculate."<<endl;
  getline(cin,str);
  z=str.length()-1;
  for (int i=0; i<=z; i++)
  {
       for (int n=0; n<=z; n++)
      {
          switch(str[n])
          {
            case '0':break;
            case '1':break;
            case '2':break;
            case '3':break;
            case '4':break;
            case '5':break;
            case '6':break;
            case '7':break;
            case '8':break;
            case '9':break;
            case '+':break;
            case '-':break;
            case '/':break;
            case '*':break;
            default: cout<<"wrong operator or operand!!!"<<endl;
                     
          }
      }
      if (str[i]=='+' || str[i]=='*' || str[i]=='/' || str[i]=='-')
      {
          string str1(str,0,i);
          string str2(str,++i);
          --i;
          if (str2 == "0" && str[i]=='/')
          {
            cout<<"can't divide by zero."<<endl;
            cin.get();
          }
          z1=str1.length()-1;
          z2=str2.length()-1;
         Num1=firnum(z1,str1);
         Num2=secnum(z2,str2);
          if (str[i]=='+')
            cout<<"the sum is "<<Num1+Num2;
          else if (str[i]=='*')
            cout<<"the product is "<<Num1*Num2;
          else if (str[i]=='/')
            cout<<"the quotient is "<<Num1/Num2;
          else if (str[i]=='-')
            cout<<"the difference is "<<Num1-Num2;
        }
  }
     
}
int powd(int a, int b)
{
    int num1=a;
    int num2=b;
    int res=1;
    for (int i=1; i<=num2; i++)
    {
      res*=num1;
    }
    return res;
}
int secnum(int v3, string sth)
{
    int res=0;
    int z2=v3;
    int w;
    string str2=sth;
    for (int n=0; n<=z2; n++)
    {
        switch(str2[n])
        {
            case '1': w=1*powd(10, (z2-n));
                     res+=w;
                     break;
           case '2': w=2*powd(10, (z2-n));
                     res+=w;
                     break;
           case '3':w=3*powd(10, (z2-n));
                     res+=w;
                     break;
           case '4': w=4*powd(10, (z2-n));
                     res+=w;
                     break;
           case '5':w=5*powd(10, (z2-n));
                     res+=w;
                     break;
           case '6':w=6*powd(10, (z2-n));
                     res+=w;
                     break;
           case '7': w=7*powd(10, (z2-n));
                     res+=w;
                     break;
           case '8': w=8*powd(10, (z2-n));
                     res+=w;
                     break;
           case '9': w=9*powd(10, (z2-n));
                     res+=w;
        }
    }
    return res;
}
int firnum(int v1, string sth)
{
    int res=0;
    int z1=v1;
    int h;
    string str1=sth;
    for (int b=0; b<=z1; b++)
    {
        switch(str1[b])
          {
           case '1': h=1*powd(10, (z1-b));
                     res+=h;
                     break;
           case '2': h=2*powd(10, (z1-b));
                     res+=h;
                     break;
           case '3': h=3*powd(10, (z1-b));
                     res+=h;
                     break;
           case '4': h=4*powd(10, (z1-b));
                     res+=h;
                     break;
           case '5': h=5*powd(10, (z1-b));
                     res+=h;
                     break;
           case '6': h=6*powd(10, (z1-b));
                     break;
           case '7': h=7*powd(10, (z1-b));
                     res+=h;
                     break;
           case '8': h=8*powd(10, (z1-b));
                     res+=h;
                     break;
           case '9': h=9*powd(10, (z1-b));
                     res+=h;
          }
    }
        return res;

}
