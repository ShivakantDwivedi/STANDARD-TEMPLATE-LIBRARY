#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>a)
{
    cout<<"Size of vector"<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main(){
   // cout<<"Enter the size"<<endl;
   // int n;
   // cin>>n;

   /*
    vector<int>ans(10);
    ans.push_back(7);
    */

// to fill value iin the vector 5
  // vector<int>ans(10,5);
   // ans.push_back(7);

    

    /*
    // input in the vector
    cout<<"Size of vector"<<ans.size()<<endl;

    // loop ke andar n hai eska matlabh n tk loop chale ga

    
     for(int i=0;i<n;i++)
    {
        cout<<"Enter the value"<<endl;
        int x;
        cin>>x;
        print(ans);
        ans.push_back(x);
    }
    */
   vector<int>ans;
   ans.push_back(23);
   ans.push_back(34);
    print(ans);
   // ans.pop_back();
  //  print(ans); 

    vector<int>v2=ans;
     print(ans);
  
}