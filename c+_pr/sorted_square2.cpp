#include<iostream> 
#include<vector>
#include<math.h>
#include<stdlib.h>

using namespace std;
vector<int> sortedSquaredArray(vector<int> arr)
{
    int n = arr.size();
    int k = n - 1;
    int low = 0;
    int high = n - 1;

    vector<int> ans(n); 
        
    while (low <= high)
    {
        if (abs(arr[low]) > abs(arr[high]))
        {
            ans[k--] = arr[low] * arr[low];
            low++;
        }
        else
        {
            ans[k--] = arr[high] * arr[high];
            high--;
        }
    }
    return ans;
}
int main()
{
vector<int> v1,v2;
    v1.push_back(-4);
    v1.push_back(-1);
    v1.push_back(0);
    v1.push_back(3);
    v1.push_back(10);
v2=sortedSquaredArray(v1);
for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

cout << endl;
for (int i = 0; i < v1.size(); i++)
        cout << v2[i] << " ";
         
v1.swap(v2);
cout << endl;
for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

}