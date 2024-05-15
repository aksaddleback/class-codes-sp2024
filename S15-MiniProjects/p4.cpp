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

int searchElement(int a[], int size, int x) { 
    for(int i = 0; i < size; i++) { 
        if (a[i] == x) { 
            return i; 
        }
    }
    return -1; 
}


int main() { 
    int a[20];
    readArray(a, 20, "input_search.txt");
    printArray(a, 20);
    int numToFind; 
    do { 
        cout << "Enter a number to look for:"; 
        cin >> numToFind; 
        int pos = searchElement(a, 20, numToFind);
        if (pos == -1) { 
            cout << "Didn't find the number!\n";
        } else { 
            cout << "Found at position " << pos << endl; 
        }
    } while (numToFind != -1);
}
