
#include<iostream>
using namespace std;

//function declaration
void triangle_pattern_1(int n);
void triangle_pattern_2(int n);
void triangle_pattern_3(int n);
void triangle_pattern_4(int n);
void triangle_pattern_5(int n);
void triangle_pattern_6(int n);
void triangle_pattern_7(int n);
void triangle_pattern_8(int n);
void triangle_pattern_9(int n);
void triangle_pattern_10(int n);

int main()
{
    int n;
    cin>>n;

    //function call
    cout<<"-------triangle_pattern_1--------"<<endl;
    triangle_pattern_1(n);
    cout<<"-------triangle_pattern_2--------"<<endl;
    triangle_pattern_2(n);
    cout<<"-------triangle_pattern_3--------"<<endl;
    triangle_pattern_3(n);
    cout<<"-------triangle_pattern_4--------"<<endl;
    triangle_pattern_4(n);
    cout<<"-------triangle_pattern_5--------"<<endl;
    triangle_pattern_5(n);
    cout<<"-------triangle_pattern_6--------"<<endl;
    triangle_pattern_6(n);
    cout<<"-------triangle_pattern_7--------"<<endl;
    triangle_pattern_7(n);
    cout<<"-------triangle_pattern_8--------"<<endl;
    triangle_pattern_8(n);
    cout<<"-------triangle_pattern_9--------"<<endl;
    triangle_pattern_9(n);
    cout<<"-------triangle_pattern_10--------"<<endl;
    triangle_pattern_10(n);
}
void triangle_pattern_1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void triangle_pattern_2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void triangle_pattern_3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void triangle_pattern_4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void triangle_pattern_5(int n)
{
    for(int i=1;i<=n;i++)
    {
        char ch='A'+i-1;
        for(int j=0; j<i; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void triangle_pattern_6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void triangle_pattern_7(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n; j>=n-i; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
///reverse right angle triangle pattern
void triangle_pattern_8(int n)
{
    for(int i=1;i<=n;i++)
    {
        ///for space print
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        ///for star print
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
}
void triangle_pattern_9(int n)
{
    for(int i=1;i<=n;i++)
    {
        ///for space print
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        ///for number print
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
}
void triangle_pattern_10(int n)
{
    char ch='A';
    for(int i=1;i<=n;i++)
    {
        ///for space print
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        ///for charactar print
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;

        }
        cout<<endl;
    }
    cout<<endl;
}


