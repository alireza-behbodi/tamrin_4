#include <iostream>
#include <ctime>
#include <time.h> 

using namespace std;

void initialize(int arr[], int size);


int main(){


    const int SIZE = 10;
    int myList[SIZE];

    initialize(myList, SIZE);
    
    return 0;

}

void initialize(int arr[], int size){
    
    srand(time(0));

    int random = (rand() % 9);

    for (int i = 0; i < size; i++) {

        arr[i] = (rand() % 10);
    }

    for(int j = 0; j < size; j++){
        cout<<arr[j]<< endl;
    }
}
 