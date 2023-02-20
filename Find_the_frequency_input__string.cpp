#include <iostream>
#include <map>
using namespace std;
int main(){
     map<string,int>ans;
    int n;
    cout<<"Enter the size of string"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      string s;
      cin>>s;
     //  ans[s] =ans[s] +1;
     ans[s]++;
    }
    
    for(auto it:ans)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    
}