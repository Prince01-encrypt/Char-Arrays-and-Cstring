// Using String

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
  
    while(t--) {
    string arr;
    cin >> arr;
    int length = arr.size();

    if(length <= 10) {
        cout << arr << "\n";
    }
    else {
        cout << arr[0] << length - 2 << arr[length - 1] << "\n";
    }
    }
  
    return 0;
}

// Using Char Array

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
  
    while(t--) {
    char arr[102];
    cin >> arr;
    int length = strlen(arr);
 
    if(length <= 10) {
        cout << arr << "\n";
    }
    else {
        cout << arr[0] << length - 2 << arr[length - 1] << "\n";
    }
    }
  
    return 0;
}
