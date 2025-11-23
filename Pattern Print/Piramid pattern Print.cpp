#include<iostream>
using namespace std;
void piramid_pattern_1(int n);
void piramid_pattern_2(int n);
void reverse_piramid_pattern_3(int n);

int main()
{
    int n;
    cin>>n;
    cout<<"-------Piramid_pattern_1--------"<<endl;
    piramid_pattern_1(n);
    cout<<"-------Piramid_pattern_2--------"<<endl;
    piramid_pattern_2(n);
    cout<<"-------reverse Piramid_pattern_3--------"<<endl;
    reverse_piramid_pattern_3(n);
}
void piramid_pattern_1(int n)
{
    int row,col;
    for(row = 1;row<=n;row++)
    {
        //space print
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        for(col=1;col<=2*row-1; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void piramid_pattern_2(int n)
{
    int row,col;
    for(row=1; row<=n; row++)
    {
        ///space print
        for(col=1;col<=n-row; col++)
        {
            cout<<"  ";
        }
        ///1 to row
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        ///row-1 to 1
        for(col=row-1; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void reverse_piramid_pattern_3(int n)
{
    int row ,col;
    for(row=n; row>=1; row--)
    {
        //space print
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=2* row -1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

}


