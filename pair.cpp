#include <iostream>
using namespace std;
int main(){
    pair<int,string>p;
    // initialization of pair

    //1.
    p=make_pair(2,"abc");
     cout<<p.first<<" "<<p.second<<endl;

    //2.
   // p={3,"Shiva"};
   // cout<<p.first<<" "<<p.second<<endl;

    // copy the pair
    pair<int,string> p1 = p;
    p1.first=3;
    cout<<"Pair P"<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    cout<<"Pair P1"<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;

    cout<<"Printing The Pair Array"<<endl;
    int a[]={2,4,7};
    int b[]={5,1,0};

    pair<int,int>p_array[3];
    p_array[0]={2,5};
    p_array[1]={4,1};
    p_array[2]={7,0};

    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    cout<<"SWAP the pair"<<endl;
    swap(p_array[0],p_array[2]);
      for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    cout<<"Taking INput in the pairs"<<endl;
    cin>>p.first;
    cout<<p.first<<endl;




}