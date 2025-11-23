
#include<iostream>
using namespace std;

void pattern_1(int n);
void pattern_2(int n);


int main()
{
    int n;
    cin>>n;
    cout<<"-------pattern_1--------"<<endl;
    pattern_1(n);
    cout<<"-------pattern_2--------"<<endl;
    pattern_2(n);

}
void pattern_1(int n)
{
    /*
-------pattern_1--------
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

*/
    int row,col;
    for(row=n;row>=1; row--)
    {
        //print*

        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        //space print
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<"  ";
        }
        //print*
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
        for(row=1;row<=n; row++)
    {
        //print*

        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        //space print
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<"  ";
        }
        //print*
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

}
void pattern_2(int n)
{
    /*
-------pattern_2--------
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

*/
    int row,col;
     for(row=1;row<=n; row++)
    {
        //print*

        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        //space print
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<"  ";
        }
        //print*
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=n-1;row>=1; row--)
    {
        //print*

        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        //space print
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<"  ";
        }
        //print*
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}



