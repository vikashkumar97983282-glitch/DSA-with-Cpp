#include <iostream>
using namespace std;

int main() {


    char value;
    cout<<"enter your value:-";
    cin>>value;

    // if-else condition
    //
    // if (age>=18) {
    //     cout<<"you can drive the car!"<<endl;
    // } else {
    //     cout<<"you can't drive the car!"<<endl;
    // }



    // if- else if -else condition

    // if (marks>=90) {
    //     cout<<"your grade marks is 'A'"<<endl;
    // } else if (marks>=60) {
    //     cout<<"your grade marks is 'B'"<<endl;
    // } else if (marks>=40) {
    //     cout<<"your grade marks is 'C'"<<endl;
    // } else {
    //     cout<<"Sorry! you are failed!"<<endl;
    // }


    // to check the lowercase and uppercase

    if (value >= 'a' && value <= 'z') {
        cout<<value<<" is lowecase"<<endl;
    } else {
        cout<<value<<" is uppercase"<<endl;
    }






    return 0;
}