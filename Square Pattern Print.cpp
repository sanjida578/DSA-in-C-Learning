#include<iostream>
using namespace std;
void square_1(int n);
void square_2(int n);
void square_3(int n);
void square_4(int n);
void square_5(int n);
void square_6(int n);
void square_7(int n);
void square_8(int n);



int main()
{
    int n;
    cin>>n;
    cout<<"-------Square Pattern 1--------"<<endl;
    square_1(n);
    cout<<"-------Square Pattern 2--------"<<endl;
    square_2(n);
    cout<<"-------Square Pattern 3--------"<<endl;
    square_3(n);
    cout<<"-------Square Pattern 4--------"<<endl;
    square_4(n);
    cout<<"-------Square Pattern 5--------"<<endl;
    square_5(n);
    cout<<"-------Square Pattern 6--------"<<endl;
    square_6(n);
    cout<<"-------Square Pattern 7--------"<<endl;
    square_7(n);
    cout<<"-------Square Pattern 8--------"<<endl;
    square_8(n);


    return 0;
}
void square_1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
}
void square_2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
}


void square_3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void square_4(int n)
{
  int count =1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<count<<" ";
            count ++;
        }
        cout<<endl;
    }
        cout<<endl;
}
void square_5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            char ch='a'+j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
}

void square_6(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch='a'+i;

        for(int j=0;j<n;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
}
void square_7(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch='A'+i;

        for(int j=0;j<n;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
}

///print pattern A-Z
void square_8(int n)
{
    char count='A';
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
     cout<<endl;
}
