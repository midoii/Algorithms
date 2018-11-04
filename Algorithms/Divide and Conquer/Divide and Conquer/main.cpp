#include <iostream>
#include "subarray.h"

using namespace std;

int main()
{
    int arr[]={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    int maxval=0;
    maxval=subMax(arr,0,16);
    cout << maxval << endl;
    return 0;
}
