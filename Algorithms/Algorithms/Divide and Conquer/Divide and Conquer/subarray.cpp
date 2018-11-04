#include <iostream>

using namespace std;

int main()
{
    int arr[]={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    int arr_len=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int thisSum=0;
    for(int i=0;i<arr_len;i++)
    {
        thisSum+=arr[i];
        if(thisSum>sum)
            sum=thisSum;
        else if(thisSum<0)
            thisSum=0;
    }
    cout << sum << endl;
}
//在线算法的时间复杂度为n
