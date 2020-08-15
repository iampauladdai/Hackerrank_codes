#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    //variable and inputs
    int val_a,val_b;
    cin>>val_a;
    cin>>val_b;

    //array
    vector<string> value_names = {"one","two","three","four","five","six","seven","eight","nine"};

    //for loop
    for (int i = val_a; i <= val_b; i++)
    {
        //condition
        if(i <= 9){cout<<value_names[i-1]<<endl;}
        else if(i % 2 == 0) {cout<<"even"<<endl;}
        else{cout<<"old"<<endl;}

    }
    
    return 0;
}