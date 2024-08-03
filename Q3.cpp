//string reversal
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout<<"enter string: \n";
    cin>>str;
    string temp=str;
    reverse(temp.begin(),temp.end());
    cout<<"reversed string : \n"<<temp;

    return 0;
}
