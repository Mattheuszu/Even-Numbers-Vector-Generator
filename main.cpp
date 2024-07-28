/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

vector <int> Vector(int number){
    
    vector <int > vec;
    
    for(int i = 0; i <= number; i++){
        
        vec.push_back(i*2);
    }
    return vec;
}
int main() {
    
    int Number;
    cout << "Введите число: ";
    cin >> Number;

    vector<int> myVector = Vector(Number);

    cout << "Результат:\n";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;
    
    
    return 0;
}
