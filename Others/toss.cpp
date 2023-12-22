// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string ans = "";
    string str;
    
    while(1){
        cout<<"Type \'Enter\' to toss a coin! : ";
        cin>>str;
        
        if(str=="Enter"){
            int number = rand() % 100;
            if(number % 2 == 0){
                ans = "HEAD";
            }else{
                ans = "TAIL";
            }
            cout<<"\n"<<ans<<endl;
            cout<<"\nPress q to quit toss! Press any other key to continue! ";
            char ch;
            cin>>ch;
            if(ch == 'q'){
                break;
            }else{
                continue;
            }
        }else{
            cout<<"Try Again!"<<endl;
        }
    }
    return 0;
}