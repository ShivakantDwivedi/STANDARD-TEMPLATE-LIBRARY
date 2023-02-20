#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>ans)
{
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"";
    }
    cout<<endl;
}



int main(){
    cout<<"Enter the Number of vector input"<<endl;
    int N;
    cin>>N;
    vector<int>ans[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cout<<"Enter the size of vector"<<i<<endl;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            // eska matlabh hai ith wale vector ke andar value insert kr rha hai
            ans[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    {
        print(ans[i]);
    }

}