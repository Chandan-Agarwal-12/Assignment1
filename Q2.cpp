// Array Average 
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    vector <int> nums;
    cout<<"enter numbers in array (-1 to end): \n";
    while(true){
        cin>>x;
        if(x==-1)
            break;
        nums.emplace_back(x);
    }
    if(nums.size()==0)
        return -1;
    cout<<"average : "<<accumulate(nums.begin(),nums.end(),0)/(double)nums.size();

    return 0;
}
