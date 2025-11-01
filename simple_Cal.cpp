#include <iostream>
#include <string.h>
using namespace std;

int main (){
cout<<"Do you want to do cal here?: "<<endl;
string UserResponse;
cin >>UserResponse;
if (UserResponse == "Yes" || UserResponse == "y"){
  cout <<"What do you want to cal"<<endl;
  string Userinputforcal;
  cin>>Userinputforcal;
  if (Userinputforcal == "Add" || Userinputforcal == "+"){
    cout <<"Please Share the numbers you want to add"<<endl;
    int firstnumber;
    cin >>firstnumber;
    int secnednumber;
    cin>>secnednumber;
    int output=firstnumber+secnednumber;
    cout<<"the Output for your cal:"<<output<<endl;
  }else if (Userinputforcal == "Muliply" || Userinputforcal == "*"||Userinputforcal =="muliply") {

    cout <<"Please Share the numbers you want to Muliply"<<endl;
    int firstnumber;
    cin >>firstnumber;
    int secnednumber;
    cin>>secnednumber;
    int output=firstnumber*secnednumber;
    cout<<"the Output for your cal:"<<output<<endl;

  }else if (Userinputforcal == "subtract" || Userinputforcal == "-"||Userinputforcal =="Subtract") {

    cout <<"Please Share the numbers you want to subtract"<<endl;
    int firstnumber;
    cin >>firstnumber;
    int secnednumber;
    cin>>secnednumber;
    int output=firstnumber-secnednumber;
    cout<<"the Output for your cal:"<<output<<endl;
}else if (Userinputforcal == "Division" || Userinputforcal == "/"||Userinputforcal =="division") {

    cout <<"Please Share the numbers you want to Muliply"<<endl;
    int firstnumber;
    cin >>firstnumber;
    int secnednumber;
    cin>>secnednumber;
    int output=firstnumber/secnednumber;
    cout<<"the Output for your cal:"<<output<<endl;
}else if (Userinputforcal == "remining" || Userinputforcal == "%"||Userinputforcal =="Remining") {

    cout <<"Please Share the numbers you want to Muliply"<<endl;
    int firstnumber;
    cin >>firstnumber;
    int secnednumber;
    cin>>secnednumber;
    int output=firstnumber%secnednumber;
    cout<<"the Output for your cal:"<<output<<endl;
}
}
}
