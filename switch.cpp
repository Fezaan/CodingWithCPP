#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter the character: ";
    cin>>button;
    switch(button){
        case 'a': cout<<"Hello";
        break;
        case 'b': cout<<"Salam";
        break;
        case 'c': cout<<"Namaste";
        break;
        case 'd': cout<<"Ciao";
        break;
        case 'e': cout<<"Hola";
        break;
        default: cout<<"Still learning more.";
    }
    return 0;
}