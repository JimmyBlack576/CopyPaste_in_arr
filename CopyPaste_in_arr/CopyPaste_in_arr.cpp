#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    const  size_t first = 10;
    const size_t two = 5;
    int arr[first];
    int arr1[two], arr2[two];

    for (int i = 0; i < first; i++) {
        arr[i] = rand()%1000;
    }
    for (int i = 0; i < first; i++) {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < two; i++) {
        arr1[i] = arr[i];
        arr2[i] = arr[i + 5];
    }
    cout << endl << endl;
    for (int i = 0; i < two; i++) {
        if (i == 0) cout << "1st  2nd\n\n";
       cout << arr1[i] << "  " << arr2[i] << endl;
    }

}

