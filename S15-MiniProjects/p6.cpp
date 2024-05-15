#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a[], int s1, string fn) { 
    ifstream f(fn);
    for(int i = 0; i < s1; i++) { 
        f >> a[i];
    }
    f.close();
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void printUniqueElements(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        bool unique = true; 
        for(int j = 0; j < size; j++) { 
            if (i == j) { 
                continue;
            }
            if (a[i] == a[j]) {
                unique = false;
                break;  
            }
        }
        if (unique) { 
            cout << a[i] << " "; 
        }
    }
    cout << endl; 
}

int main() { 
    int a[20];
    readArray(a, 20, "input_unique.txt");
    printArray(a, 20);
    printUniqueElements(a, 20);
}
