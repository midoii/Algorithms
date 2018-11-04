#ifndef SUBARRAY_H_INCLUDED
#define SUBARRAY_H_INCLUDED


int maxArr(int *arr,int start,int length)
{
    int sum1 = 0,sum2 = 0,max1 = arr[(length +start)/ 2],max2 = arr[(length + start) / 2];
    /*
        求出中点左边到中点的和的最大值
    */
    for(int i = (length + start)/ 2;i >= start;i--)
    {
        sum1 += arr[i];
        if(sum1 > max1)
            max1 = sum1;
    }
    /*
        求出中点右边到中点的和的最大值
    */
    for(int i = (length + start)/ 2;i < length;i++)
    {
        sum2 += arr[i];
        if(sum2 > max2)
            max2 = sum2;
    }
    return max1 + max2 - arr[(length + start) / 2];
}

int subMax(int *arr,int start,int length)
{
    int max1 = maxArr(arr,start,length);
    /*
    求出第一种情况的最大值
    */
    if(((length + start) / 2 - 1) >= start)
        {
            int max2 = subMax(arr,start,(length + start) / 2);
            if(max2 > max1)
                max1 = max2;
        }
        /*
        求出第二种情况的最大值
        */
    if(((length + start) / 2 + 1) < length)
        {
            int max3 = subMax(arr,(length + start) / 2 + 1,length);
            if(max3 > max1)
                max1 = max3;
        }
    return max1;
}

#endif // SUBARRAY_H_INCLUDED
