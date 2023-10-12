//Farhan_404
//fms-byte
#include <bits/stdc++.h>
using namespace std;
#define INT_BITS 32
#define limit 4294967295

class fms
{

public:
    int leftRotate(unsigned int n, unsigned int d)
    {
        if(n>limit){
            return (1 << d) | (1 >> (INT_BITS - d));
        }
        return (n << d) | (n >> (INT_BITS - d));
    }
    int rightRotate(unsigned int n, unsigned int d)
    {
        return (n >> d) | (n << (INT_BITS - d));
    }
};

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

string DecimalToBinary(int num)
{
    int n = (int)(log2(num));
    string bin= bitset<32>(num).to_string();
    return bin;
}

int main()
{
    fms shift;
    cout<<"Enter the Binary String: ";
    string num;
    cin>>num;
    unsigned int n = binaryToDecimal(num);
    int cnt=0,choice,right,left;
    string rS, lS;
    while(1)
    {
        cnt++;
        cout<<"1. Right Shift"<<endl;
        cout<<"2. Left Shift"<<endl;
        cout<<"3. Terminate"<<endl;
        if(cnt>1)
        {
            cout<<"4. New Binary Input"<<endl;
            cout<<"5. Clear Screen"<<endl;
        }
        cout<<"\nEnter Choice: ";
        cin>>choice;
        if(choice==1)
        {
            right= shift.rightRotate(n,1);
            rS= DecimalToBinary(right);
            n = binaryToDecimal(rS);
            cout<<"\nRight Shifted by 1: "<<rS<<endl;
        }
        else if(choice==2)
        {
            left= shift.leftRotate(n,1);
            lS= DecimalToBinary(left);
            n = binaryToDecimal(lS);
            cout<<"\nLeft Shifted by 1: "<<lS<<endl;
        }
        else if(choice==3)
        {
            cout<<"\nTerminating Execution...\n\n";
            cout<<"\nThank You. Hope You will be back soon!\n"<<endl;
            break;
        }
        else if(choice==4)
        {
            system("cls");
            cout<<"\nEnter the Binary String: ";
            cin>>num;
            n = binaryToDecimal(num);
        }
        else if(choice==5)
        {
            system("cls");
            cout<<"Input String: "<<bitset<32>(n).to_string()<<"\n"<<endl;
        }
        else
        {
            cout<<"\nWrong Input!"<<endl;
            continue;
        }
        cout<<endl;
    }
    return 0;
}
