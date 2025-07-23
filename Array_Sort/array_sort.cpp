#include <iostream>
#include <vector>    //for dynamic update vector
#include <algorithm> //for sort

std::vector <float> get_user_array_input(){
    //prompt array length
    int len;
    std::cout << "Enter array length: ";
    std::cin >> len;
    //init vector
    std::vector <float> user_array;
    //loop to collect user inputs and append array
    for (int i = 0; i < len; i++){
        float input;
        std::cout << "Enter float: ";
        std::cin >> input;
        user_array.push_back(input);
    }
    return user_array;
}

std::vector <float> sort_array(std::vector <float> user_array){
    //use algorithm to sort and return vector
    std::sort(user_array.begin(), user_array.end());
    return user_array;
}


int main(){
    std::vector <float> user_array = get_user_array_input();
    std::vector <float> sorted_array = sort_array(user_array);
    //print results
    for (int i = 0; i < sorted_array.size(); i++){
        std::cout << sorted_array[i];
        if (i != sorted_array.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
}