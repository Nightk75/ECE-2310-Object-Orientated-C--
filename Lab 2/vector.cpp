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
    for(int i = 0; i < v.size(); i++){
        printf("Value %i at Memory Location: %p\n", v[i], &v[i]);
    }

}

/**
 * @brief increases value of elements in the vector by 10
 * 
 * @param vector
 */
void incVecBy10(vector<int>& v){
for(int i = 0; i < v.size(); i++){
    v[i] += 10;
}
}

int main(){
    const int SIZE = 5;
    vector<int> v(SIZE);
    for(int i = 0; i < SIZE; i++){
        v[i] = 100 + i;
    }
    
    printf("Before Increment----------\n");
    printMemVec(v);

    incVecBy10(v);
    printf("After Increment----------\n");
    printMemVec(v);

    v.pop_back();
    printf("After Pop----------\n");
    printMemVec(v);

    v.push_back(101);
    v.push_back(102);
    printf("After Push----------\n");
    printMemVec(v);

    return 0;
}