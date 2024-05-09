#include <iostream>
#include <algorithm>

using namespace std;

string solution(string myString);

int main(){
    string ans;
    cin >> ans; 

    ans = solution(ans);

    cout << ans;

    return 0;
}

string solution(string myString) {
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);

    return myString;
}
