#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2, dec = 0;
    cout<<"Total number of operand= ";
    cin>>n1;
    cout<<"\nTotal number of operator= ";
    cin>>n2;
    cout << "\nKindly Use space after every number....\n\n";
    char a[n1+n2+5];
    getchar();
    gets(a);
    int s[n1] = {0} , x=0, r, store[5], y = 0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            if ( a[i+1] ==' ')
            {
                if  ( dec > 0 )
                {
                    for  ( int  j = 0; y >= 0; y--, j++ )
                    {
                        if ( j == 0 )
                            store[y] = a[i]-'0';
                        s[x] += store[y]*pow(10,j);
                    }
                }
                else
                {
                    s[x] = a[i]-'0';
                }
                cout << s[x] << endl;
                x++;
                dec = 0;
            }
            else
            {
                store[y] = a[i]-'0';
                dec++;
                y++;
            }
        }
        else
        {
            if(a[i]=='+')
            {
                r=s[x-2]+s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='-')
            {
                r=s[x-2]-s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='*')
            {
                r=s[x-2]*s[x-1];
                s[x-2]=r;
              x=x-1;
            }
            else if(a[i]=='/')
            {
                r=s[x-2]/s[x-1];
                s[x-2]=r;
                x=x-1;
            }
            else if(a[i]=='^')
            {
                r=pow(s[x-2],s[x-1]);
                s[x-2]=r;
                x=x-1;
            }
        }
    }
    cout<<s[0]<<endl;
}
