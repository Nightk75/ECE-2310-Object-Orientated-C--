#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief  prints the elements in the vector and their memory locations
 * 
 * @param vector 
 */
void printMemVec(const int vector[], int size){
    printf("Vector - Each int is worth %lu bytes\n", sizeof(vector[0]));
    for(int i = 0; i < size; i++){
        printf("Value %i at Memory Location: %p\n", vector[i], vector + i);
    }

}

/**
 * @brief 
 * 
 * @param ... 
 */
void incVecBy10(int vector[], int size){
for(int i = 0; i < size; i++){
    vector[i] += 10;
}
}

int main(){
    const int SIZE = 5;
    int vector[SIZE];
    for(int i = 0; i < SIZE; i++){
        vector[i] = 100 + i;
    }
    
    printf("Before Increment----------\n");
    printMemVec(vector, SIZE);

    incVecBy10(vector, SIZE);
    printf("After Increment----------\n");
    printMemVec(vector, SIZE);

    while(vector  ){
        int vector += vector back();
        vector .pop_back();
    }
    printf("After Pop----------\n");
    printMemVec(vector, SIZE);

    i.push_back ();
    printf("After Push----------\n");
    printMemVec(vector, SIZE);

    return 0;
}