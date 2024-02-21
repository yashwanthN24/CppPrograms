#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 5, 5};
    int i = 0;
    arr[i] = i++;
    cout << arr[0] << "  " << arr[1] << "  " << arr[2] << " " << i;
    return 0;
}
