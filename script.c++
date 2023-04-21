#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;


int largest_element(int n , int input[]) {
    for(int i = 0 ; i < n ; i++) {
        cin >> input[i];
    }

    int max = input[0];
    for(int i = 1 ; i < n ; i++) {
      if(input[i] > max) {
        max = input[i];
      }
    }
    cout << "The largest number of an array is :- " << max << endl;
    return 0;
}



int main() {
    int n;
    cout << "Enter a total number of arrays :- ";
    cin >> n;
    int input[100];
largest_element(n , input);
}

