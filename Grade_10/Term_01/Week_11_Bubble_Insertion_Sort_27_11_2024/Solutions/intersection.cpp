#include<iostream>
using namespace std;
int intersection[1024];
int sz = 0;
void func(int nums1[], int sz1, int nums2[], int sz2)
{
    for(int i = 0; i < sz1; i++)
    {
        for(int j = 0; j < sz2; j++)
        {
            if(nums1[i] == nums2[j])
            {
                intersection[i] = nums1[i];
                sz++;
            }
        }
    }
}

void sortIt()
{
    for(int i = 0; i < sz - 1; i++)
    {
        for(int j = 0; j < sz - i - 1; j++)
        {
            if(intersection[j] > intersection[j+1])
            {
                swap(intersection[j], intersection[j+1]);
            }
        }
    }

    for(int i = 0; i < sz - 1; i++)
    {
        if(intersection[i] == intersection[i+1])
        {
            swap(intersection[i], intersection[sz - i - 1]);)
        }
    }
}


int main()
{
    int nums1[] = {1,2,2,1};
    int nums2[] = {2,2};
    func(nums1, 4, nums2, 2);




    return 0;
}
