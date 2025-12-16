#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string name;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin,name);
    cout<<"?????: ";
    cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name.\n";
    int id;
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cin>>id;
    cin.ignore();
    cout<<name<<": ";
    int gear = (id/10000000)-12;
    cout<<"Fahsai: I think you may be GEAR "<<gear<<". "<<"I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    string movie;
    cout<<name<<": ";
    getline(cin,movie);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    string day;
    cout<<name<<": ";
    getline(cin,day);
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
    string sen;
    cout<<name<<": ";
    getline(cin,sen);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
    return 0;
}
