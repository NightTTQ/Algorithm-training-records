#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
inline void mysort(int arr[],int begin,int end)
{
    





}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++)
        cin >> arr[i];
    mysort(arr, 0, n - 1);
    for (int i = 0; i<n; i++)
        cout << arr[i]<<" ";
    system("pause");
    return 0;
}