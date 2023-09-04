#include<stdio.h>
#include<iostream>

using namespace std;
int count0(int arr[],int n)
{
    int left = 0;
    int right = n-1;

    while(left <= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] == 1)
        {
            left = mid+1;
        }
        else{

        if(arr[mid-1] == 1 || mid == n-1) //n-1 beacuse if the hole arry is of 0
        {
            return n-mid;
        }
        else
        {
            right = mid - 1;
        }
        }
        
    }
return 0;
}
int main(int argc, char const *argv[])
{
    /* code */
    int a1[] = {1, 1, 1, 1}; //Output: 2
    int a2[] = {0, 0, 0, 0};  //outpu : 4
    cout<< count0(a1,4)<<endl;
    cout<< count0(a2,4)<<endl;
    return 0;
}
