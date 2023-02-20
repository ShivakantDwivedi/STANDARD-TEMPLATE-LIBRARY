#include <iostream>
#include <vector>
using namespace std;


void print(vector<int>ans)
{
    cout<<"Printing the element in the vector"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main(){

    vector<vector<int>>ans;
    cout<<"Enter the size of Outer vector"<<endl;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        vector<int>temp;
        int n;
        cout<<"ENter the size of inner vector element "<<endl;
        cin>>n;
        cout<<"Enter the element"<<endl;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
       ans.push_back(temp);
    }

    for(int i=0;i<ans.size();i++)
    {
        print(ans[i]);
    }
}