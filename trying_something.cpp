#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void type_text(const std::string& text) {
    for (std::size_t i = 0; i < text.size(); ++i) {
        std::cout << text[i] << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(60));
    }
}
using namespace std;

int main (){
type_text("Please Enter your Name: ");
string nameoftheuser;
cin>>nameoftheuser;
type_text("Hi how are you\t"+nameoftheuser);
string answer;cin>>answer;if(answer=="doing well how about you" || answer=="Well"||answer=="well"){cout<<"Nice to know that you doing well";cout<<"i am doing well same as you";}else if (answer=="Doing really bad fr"||answer=="Shit"||answer=="shit"||answer=="doing bad"){cout<<"why i know you are strong and you can go past it";}
}
