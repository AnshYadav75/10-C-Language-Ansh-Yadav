#include <iostream>
using namespace std;
int binarysearch(int arr[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
        else
        {
            ans = mid;
            return ans;
        }
        mid = start + (end - start) / 2;
    }
}
int main()
{
    int arr[6] = {2, 3, 4, 5, 6, 7};
    int target;
    cout << "enter target";
    cin >> target;
    cout << binarysearch(arr, target, 6);
    return 0;
}