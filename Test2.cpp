#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

string bump(string nums, int index) 
{
    return to_string(atoi(nums.substr(0, index + 1).c_str()) + 1).append(nums.substr(index + 1));
}
 
int lazier(int num) 
{
    string nums = to_string(num);
    int bumped = 0;
    int cnt;
    do
    {
        cnt = 0;
        bool flag;
        for (int i = 0; i < nums.length() - 1; i++) 
        {
            flag = false;
            while (nums[i] == nums[i + 1]) 
            {
                ++cnt;
                flag = true;
                //int tmp = nums.length();
                nums = bump(nums, i + 1);
                //i = nums.length() == tmp ? i : i + 1;
            }
            if (flag) 
            {
                bumped = i + 1;
                break;
            }
        }
 
        if (bumped) 
        {
            for (int i = bumped + 1; i < nums.length(); i++) 
            {
                nums[i] = nums[i - 1] == '0' ? '1' : '0';
            }
        }
    }while (cnt);
    return atoi(nums.c_str());
}
 
int main() 
{
    int num;
    while (~scanf("%d", &num)) 
    {
        printf("%d\n", lazier(num));
    }

    return 0;
}