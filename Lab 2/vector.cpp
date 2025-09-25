#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief  prints the elements in the vector and their memory locations
 * 
 * @param vector 
 */
void printMemVec(const vector<int>& v){
    printf("Vector - Each int is worth %lu bytes\n", sizeof(int));
    for(size_t i = 0; i < v.size(); i++){
        printf("Value %i at Memory Location: %p\n", v[i], &v[i]);
    }

}

/**
 * @brief 
 * 
 * @param ... 
 */
void incVecBy10(vector<int>& v){
for(size_t i = 0; i < v.size(); i++){
    v[i] += 10;
}
}

int main(){
    const int SIZE = 5;
    vector<int> myvector(5);
    for(size_t i = 0; i < SIZE; i++){
        myvector[i] = 100 + i;
    }
    
    printf("Before Increment----------\n");
    printMemVec(myvector);

    incVecBy10(myvector);
    printf("After Increment----------\n");
    printMemVec(myvector);

    myvector.pop_back();
    printf("After Pop----------\n");
    printMemVec(myvector);

    myvector.push_back(101);
    myvector.push_back(102);
    printf("After Push----------\n");
    printMemVec(myvector);

    return 0;
}