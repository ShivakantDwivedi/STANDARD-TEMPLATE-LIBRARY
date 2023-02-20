#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    
        map<pair<string,string>,vector<int>> ans;
        
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string first_name,last_name;
            int count;
            cin>>first_name>>last_name>>count;
            for(int j=0;j<count;j++)
            {
                int x;
                cin>>x; 
                ans[{first_name,last_name}].push_back(x); // abhi ans wala ek vector ban gya hai

            }
        }

        for(auto it:ans)
        {
            auto &list=it.second;
            cout<<it.first.first<<endl;
            cout<<it.first.second<<endl;
            cout<<endl;
            for(auto element :list)
            {
                cout<<element<<" ";
            }
            cout<<endl;
        }




}

