#include <iostream>
using namespace std;

int main() {


    // square pattern
    // int num;
    // cout<<"enter the value:-";
    // cin>>num;
    //
    // for (int i=1; i<=num; i++) {
    //     for (int j=1; j<=num; j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // alphabet pattern
    // int num=4;
    //
    // for (int i=1; i<=num; i++) {
    //     char ch = 'A';
    //     for (int j=1; j<=num; j++) {
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }


    // number pattern
    // int num = 2;
    // int sum = 1;
    //
    // for (int i=0; i<=num; i++) {
    //     for (int j=0; j<=num; j++) {
    //         cout<<sum;
    //         sum++;
    //     }
    //     cout<<endl;
    // }



    // alphabet pattern

    // int num=3;
    // char ch = 'A';
    // for (int i=1; i<=num; i++) {
    //     for (int j=1; j<=num; j++) {
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }


    // triangle pattern

    // for (int i=1; i<=5; i++) {
    //     for (int j=1; j<=i; j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //


    // triangle pattern (1,12,123,1234)

    // for (int i=1; i<=4; i++) {
    //     int sum =1;
    //     for (int j=1; j<=i; j++) {
    //         cout<<sum;
    //         sum++;
    //     }
    //     cout<<endl;
    // }


    // for (int i=1; i<=5; i++) {
    //     for (int j=1; j<=i; j++) {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }



    // triangle pattern alphabet

    // char ch='A';
    // for (int i=1; i<=5; i++) {
    //     for (int j=1; j<=i; j++) {
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }


    // traingle pattern (1,21,321,4321) reverse

    // method 1
    // for (int i=1; i<=5; i++) {
    //     int sum =i;
    //     for (int j=1; j<=i; j++) {
    //         cout<<sum;
    //         sum--;
    //
    //     }
    //     cout<<endl;
    // }

    // method 2
    // for (int i=0; i<=4; i++) {
    //     for (int j=i+1; j>0; j--) {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    // int sum=1;
    // for (int i=1; i<=4; i++) {
    //     for (int j=1; j<=i; j++) {
    //         cout<<sum<<" ";
    //         sum++;
    //     }
    //     cout<<endl;
    // }


    // inverted traingle pattern
    // int n=4;
    // for (int i=0; i<n; i++) {
    //     // spaces
    //     for (int j=0; j<i; j++) {
    //         cout<<" ";
    //     }
    //     for (int j=0; j<n-i; j++) {
    //         cout<<(i+1);
    //     }
    //     cout<<endl;
    // }


    // pyramid pattern

    int n=4;
    for (int i=0; i<n; i++) {
        // spaces
        for (int j=0; j<n-i-1; j++) {
            cout<<" ";
        }
        // num1 : i+1
        for (int j=1; j<=i+1; j++) {
            cout<<j;
        }
        // num2
        for (int j=i; j>0; j--) {
            cout<<j;
        }
        cout<<endl;
    }











    return 0;
}