#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
    if(a==0)
    {
        return b;
    }
    else
    {
        return a;
    }
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        }
        else
        {
            b = b%a;
        }
    }
}
int main()
{
    vector<int>nums = {1,5,11,9,100};
    sort(nums.begin() , nums.end());
    int a = nums[0];
    int b=  nums[nums.size()-1];
    int result = gcd(a,b);
    cout<<result;
    return 0;
}