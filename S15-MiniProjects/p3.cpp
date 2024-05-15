#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a[], int size, string fn) { 
    ifstream f(fn);
    for(int i = 0; i < size; i++) { 
        f >> a[i];
    }
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void reverseArray(int a[], int size) { 
    int i = 0, j = size - 1; 
    while (i < j) { 
        int temp = a[i]; 
        a[i] = a[j]; 
        a[j] = temp; 
        i++;
        j--; 
    }
}


int main() { 
    int a[10];
    readArray(a, 10, "input_reverse.txt");
    printArray(a, 10);
    reverseArray(a, 10);
    printArray(a, 10);
}
