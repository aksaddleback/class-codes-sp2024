#include<iostream> 
#include<fstream> 
using namespace std; 

void genFile(string fn, int size) { 
    srand((unsigned)time(0)); 
    ofstream f(fn);
    int num = 1; 
    for(int i = 0; i < size; i++) { 
        int inc = (rand()%5); 
        num += inc;
        f << num << " ";
    }
    f.close(); 
}

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

int binSearch(int a[], int size, int x) { 
    int left = 0; 
    int right = size - 1; 
    while (left < right) { 
        int middle = (right - left) / 2; 
        if (x > a[middle]) { 
            left = middle - 1;
        } else if (x < a[middle]) { 
            right = middle + 1; 
        } else { 
            return middle; 
        }
    }
    return -1; 
}


int main() { 
    //genFile("binSearch.txt", 20000);
    int a[20000];
    readArray(a, 20000, "binSearch.txt");
    //printArray(a, 20000);
    int x; 
    do { 
        cin >> x; 
        int pos = binSearch(a, 20000, x);
        cout << pos;
    } while (x != -1);
}
