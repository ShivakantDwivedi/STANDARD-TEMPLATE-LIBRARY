#include<iostream>
#include <vector>

using namespace std;
int main(){

   /* 
    vector<int>v;
    v={1,2,3,4,2};

    // itarate over the vector
    vector<int> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl; 

    */

   vector<pair<int,int>>ans={{1,2},{3,5},{5,0},{9,3}};

    vector<pair<int,int>> :: iterator it;
    for( it=ans.begin(); it!=ans.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }


    // if iterator point to the pair 
    // then syntax is 

     for( it=ans.begin(); it!=ans.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
