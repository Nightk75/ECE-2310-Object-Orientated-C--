#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief  prints the elements in the vector and their memory locations
 * 
 * @param vector 
 */
void printMemVec(const vector<int> v){
    printf("Vector - Each int is worth %lu bytes\n", sizeof(int));
    for(int i = 0; i < size; i++){
        printf("Value %i at Memory Location: %p\n", v[i], v + i);
    }

}

/**
 * @brief 
 * 
 * @param ... 
 */
void incVecBy10(int v<int>){
for(int i = 0; i < size; i++){
    v[i] += 10;
}
}

int main(){
    const int SIZE = 5;
    vector<int> myvector(5);
    for(int i = 0; i < SIZE; i++){
        myvector[i] = 100 + i;
    }
    
    printf("Before Increment----------\n");
    printMemVec(vector, SIZE);

    incVecBy10(vector, SIZE);
    printf("After Increment----------\n");
    printMemVec(vector, SIZE);

   

    myvector.push_back(8);
    myvector.push_back(9);
    printf("After Push----------\n");
    printMemVec(vector, SIZE);

    return 0;
}