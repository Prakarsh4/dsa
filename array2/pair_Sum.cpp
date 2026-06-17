#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
    vector<int> ans;

    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }

    return ans;
}
int main(){
    int size,target;
    cout<<"enter the size of an array: ";
    cin>>size;
    cout<<"enetr the elements an array";
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the target sum";
    cin>>target;
    vector<int> result= pairSum(arr, target);
    if(result.size() == 0)
    {
        cout << "No pair found that sums to the target." << endl;
    }
    else
    {
        cout << "Pair found: " << result[0] << " and " << result[1] << endl;
    }
    return 0;


}
