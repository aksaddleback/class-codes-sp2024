#include<iostream> 
#include<fstream> 
using namespace std; 

void readArray(int a[], int s1, int b[], int s2, string fn) { 
    ifstream f(fn);
    for(int i = 0; i < s1; i++) { 
        f >> a[i];
    }
    for(int i = 0; i < s2; i++) { 
        f >> b[i];
    }
    f.close();
}

void printArray(int a[], int size) { 
    for(int i = 0; i < size; i++) { 
        cout << a[i] << " ";
    }
    cout << endl; 
}

void merge(int a[], int s1, int b[], int s2, int c[], int s3) { 
    int i = 0, j = 0, k = 0; 
    while(true) { 
        if (i < s1 && j < s2) { 
            if (a[i] < b[j]) { 
                c[k++] = a[i++];
            } else { 
                c[k++] = b[j++];
            }
        } else if (i < s1) { 
            c[k++] = a[i++];
        } else if (j < s2) { 
            c[k++] = b[j++];
        } else { // both i and j got to the end of arrays A and B
            break; 
        }
    }
}

int main() { 
    int a[14], b[10], c[24];
    readArray(a, 14, b, 10, "input_merge.txt");
    printArray(a, 14);
    printArray(b, 10);
    merge(a, 14, b, 10, c, 24); 
    printArray(c, 24);
}
