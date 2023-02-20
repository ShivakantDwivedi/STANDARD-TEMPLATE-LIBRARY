#include <iostream>
#include <vector>
using namespace std;

void print(vector<string>ans)
{
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<string>ans;
    cout<<"Enter the size "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        ans.push_back(s); 
    }
    print(ans);
}