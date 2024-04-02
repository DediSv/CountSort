//CountSort
//(MAX..MIN)
#include <iostream>
#include <vector>

using namespace std;

int maxxZpole(vector <int> array) {
    int m = 0;
    for (int i = 0; i < array.size(); i++)
        if (m < array[i])
            m = array[i];
    return m;
}
void countMas(vector <int> &count, vector <int> array) {
    for (int i = 0; i < array.size(); i++)
        count[array[i]] += 1;
    return ;
}
void printRes(vector <int> count){
    for (int i = count.size(); i > 0 ; i--){
        while (count[i]){
            cout << i << " ";
            count[i]--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the array size:\n";
    cin >> n;
    vector <int> array(n);
    cout << "Enter your array:\n";
    for (int i = 0; i < n; i++)
        cin >> array[i];
    vector <int> count(maxxZpole(array) + 1);
    countMas(count, array);
    printRes(count);
    return 0;
}
