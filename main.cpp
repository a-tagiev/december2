#include <iostream>
#include <fstream>
#include <list>
#include<string>
#include<algorithm>

using namespace std;
ifstream inp;

list<string> input() {
    list<string> list1;
    inp.open("/home/anton/CLionProjects/december2/input.txt", ios::in);
    while (!inp.eof()) {
        string a;
        inp >> a;
        list1.push_front(a);
    }
    inp.close();
    return list1;
}

int srav(string string1, string string2) {
    if (string1[0] > string2[0]) {
        return 1;
    } else if (string1[0] < string2[0]) {
        return -1;
    } else { return 0; }
}

int otp(list<string> list1) {
    for (string i: list1) {
        cout << i << " ";
    }
}
int sort(list<string> list1){
    for(int i=0; i<size(list1)-1; i--){
        for(int n=size(list1)-i; n<size(list1); n++){

        }
    }
}
int main() {
    list<string> list1 = input();
    otp(list1);
    time_t begin(time(NULL));
    cout << endl << "Time: " << difftime(time(NULL), begin);

    return 0;
}
