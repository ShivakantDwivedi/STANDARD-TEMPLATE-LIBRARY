#include <iostream>
#include <vector>
using namespace std;

void print(vector<pair<int,int>>a)
{
    cout<<"size of vector is"<<endl;
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>>ans;
    cout<<"Enter the size"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        //1 method
     //   ans.push_back(make_pair(x,y));
        //2.method
        ans.push_back({x,y});
    }
    print(ans);
}