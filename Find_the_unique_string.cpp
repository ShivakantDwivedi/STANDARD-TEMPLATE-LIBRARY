#include <iostream>
#include <set>
using namespace std;
int main(){
    set<string>ans;
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        ans.insert(str);
    }
    cout<<"PRINTING THE STRING"<<endl; 

    for(auto it : ans)
    {
        cout<<it<<endl;
    }
}