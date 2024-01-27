#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

bool isPrime(ll n) {
    for(int i = 2;i < n/2;i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int minimum(int x, int y) {
    if(x < y) return x;
    return y;
}


struct Employee{
    int Id;
    float salary;
};

int main(){
    init();
    // int a = 5;
    // int* p = &a;

    // cout << *p << endl;

    // int** ptr = &p;
    // cout << **ptr << endl;



    // Employee *emp[100];
    // int n;
    // int sum = 0;
    // cout << "Enter number of Employees from 1 to 100 :" << endl;
    // cin >> n;
    
    // for(int i = 0;i < n;i++){
    //     emp[i] = (Employee *) malloc(sizeof(Employee));
    //     cin >> (*emp[i]).Id; // Or emp[i]->Id
    // }
    // for(int i = 0;i < n;i++){
    //     sum += (*emp[i]).Id;
    // }
    // cout << "Summition of IDs is equal to : " << sum;


    // int length;
    // int sum = 0;
    // cin >> length;
    // int *p = (int *) malloc(length * sizeof(int));
    // for(int i = 0;i < length;i++){
    //     cin >> p[i];
    // }
    // for(int i = 0;i < length;i++){
    //     sum += p[i];
    // }
    // cout << "Summition is equal to : " << sum;

    int row;
    cin >> row;
    int * a[row]; // Or in C: int **arr = (int **) malloc(row * sizeof(int *));
    int col;
    cin >> col;
    
    for(int i = 0;i < row;i++) a[i] = new int[col];  // in C : a[i] = (int *) malloc(col * sizeof(int));
    
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            a[i][j] = j;
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    
    return 0;
}  