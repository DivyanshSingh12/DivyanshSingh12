#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE//NOT PART OF CODE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    # endif

    int savings;
    cin>>savings;

    if(savings>70000){
        if (savings>120000){
            cout<<"Buy a Macbook Pro\n";
        } else {
            cout<<"Buy a Macbook Air\n";
        }
    } else if(savings>50000){
        cout<<"Buy a Windows Laptop with SSD also with intel i5 or more and upto 8GB RAM\n";
    } else {
        cout<<"Buy an Ipad Air with keyboard and pencil or pen\n";
    }

    return 0;
}    
        

    
