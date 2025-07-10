/* #include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << x;
    return 0;
}*/

/* #include<iostream>
using namespace std;                   
int main(){
    cout << "elon" << endl << "jeff";           \\endl changes line and buffer too \n only changes line
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int x,y;
    cout << "enter a number : ";
    cin >> x;
    cin >> y;
    cout << "product is " << (x*y);
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int *p ;
    {
        int y = 3;
        p = &y ;
    }
    *p = 10;         
    cout << *p;
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << x;
    return 0;
}*/

/* #include<iostream>
using namespace std;                   
int main(){
    cout << "elon" << endl << "jeff";           \\endl changes line and buffer too \n only changes line
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int x,y;
    cout << "enter a number : ";
    cin >> x;
    cin >> y;
    cout << "product is " << (x*y);
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int *p = NULL;
    *p = 20;
    cout << *p;
    return 0;
}*/

// Data types
/* int 
char
long int
long long int
unsigned char
unsigned int
float
double
bool
*/

/* #include<iostream>
using namespace std;
int main(){
    cout <<sizeof(int)<<endl;
    cout <<sizeof(long int)<<endl;
    cout <<sizeof(long long int)<<endl;
    cout <<sizeof(char)<<endl;
    cout <<sizeof(unsigned char)<<endl;
    cout <<sizeof(unsigned int)<<endl;
    return 0;
}*/

/* #include<iostream>
using namespace std;
int main(){
    int x;
    cout << x;              // any random output 
    return 0;
}*/

/* #include<iostream>
using namespace std;
int x;
int main(){                //global variable value is fixed so 0 and local variable ki random 
    cout << x;              
    return 0;
}*/ 

/* #include <iostream>
using namespace std;
int main(){
    int intarray[4];
    int sum = 0;
    for(int i = 0; i<4; i++){
        cin >> intarray[i];
        sum+=intarray[i];
    }
    cout << "sum of elements: " << sum;
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int intarray[n]; 
    for (int i = 0; i < n; i++) {
        cin >> intarray[i];
    }
    int max = intarray[0], min = intarray[0];
    for (int i = 1; i < n; i++) {
        if (intarray[i] > max) {
            max = intarray[i];
        }
        if (intarray[i] < min) {
            min = intarray[i];
        }
    }
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    return 0;
}*/

/* #include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int array[n]; 
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int newarray[n];
    for (int i = 0; i < n; i++) {
        newarray[i] = array[n - i - 1];
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << newarray[i] << " ";
    }
    return 0;
}*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}


