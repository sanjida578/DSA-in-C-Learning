#include<iostream>
#include<vector>
using namespace std;

void SubArray(int n,int arr[5]);//for calculate sub array
void Maximum_subarray(int n, int arr[5]);//calculate maximum sub array sum


int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};

    SubArray(n,arr);
    Maximum_subarray(n,arr);
    return 0;
}

//printing sub array
void SubArray(int n,int arr[]){
for(int i=0; i<n;i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k];

            }
                cout<<" ";
        }
        cout<< endl;
    }
}
void Maximum_subarray(int n, int arr[])
{
    int maxSum = 0;//initialize the maxSum is minimum

    for(int i=0; i<n; i++)
    {
        int carrySum=0;
        for(int j=i; j<n; j++)
        {
            carrySum+=arr[j];
            maxSum = max(carrySum,maxSum);//determine the max value
        }
    }

    cout<<"Max subarray sum = "<<maxSum<<endl;//print max subarray sum

}

