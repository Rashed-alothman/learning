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
  }else if (UserResponse == "no"||UserResponse =="The fuck no") {
  cout<<"So What do you fucking want where are you fr ?"<<endl;
  return 0;
  }
}
}
