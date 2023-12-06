#include <iostream>
#include <string>
#include <string_view>
#include <array>

using namespace std;

enum game{
    name, adjec, noun, verb, place , animal, 
 adj2, verb2, noun2, color, number 
};

constexpr string_view getvar(game var){
    switch(var){
        case name : return "name";
        case adjec : return "adjec";
        case noun : return "noun" ;
        case  verb : return "verb";
        case place : return "place";
        case animal : return "animal";
        case adj2 : return"adj2";
        case verb2 : return "verb2";
        case noun2 : return "noun2" ;
        case color : return "color";
    }
}
int main(){
 array <string , number> madlib; 
 game var;
 for(int i{0} ; i<number ; i++){
    cout<<"Enter "<<getvar(var) <<"\n";
    cin>>madlib[number];
 }
}