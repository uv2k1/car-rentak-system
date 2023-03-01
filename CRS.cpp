#include<iostream>
using namespace std;
class car{
    protected:
    string car_name;
    int number;

};
class hachback:protected car{

};
int main(){
    return 0;
}