#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    vector<int>v={1,2,3,4};
    cout<<"Fist time Loop Traverse"<<endl;
    for(int value:v)
    {
        cout<<value<<" ";
    }cout<<endl;


cout<<"Second time after passing referce in the value"<<endl;
     for(int &value:v)
    {
        value++;
    }cout<<endl;

     for(int ans:v)
    {
        cout<<ans<<" ";
    }cout<<endl;

    cout<<"While Taking to the pair"<<endl;
     vector<pair<int,int>>v_pair={{1,2},{4,5},{4,5}};
     for(pair<int,int>ans: v_pair)
     {
        cout<<ans.first<<" "<<ans.second<<endl;
     }


     // BY using AUTO KEYWORD
     vector<int>value={1,2,3,4};
     for(auto it:value )
     {
        cout<<it<<" ";
     }

        cout<<"PAIR BY THE VECTOR"<<endl;
     vector<pair<int,int>>v_pair1={{11,22},{43,58},{49,55}};
     for(auto ans: v_pair1)
     {
        cout<<ans.first<<" "<<ans.second<<endl;
     }


}