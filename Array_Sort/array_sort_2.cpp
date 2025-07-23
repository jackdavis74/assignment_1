#include <iostream>

int main(){
    //prompt array length
    int len;
    std::cout << "Enter array length: ";
    std::cin >> len;
    //init array
    float* user_array = new float[len];
    //loop to collect user inputs and append array
    for (int i=0; i<len; i++){
        float input;
        std::cout << "Enter float: ";
        std::cin >> input;
        user_array[i] = input;
    }
    //init sorted array
    float* sorted_array = new float[len];
    //if user_array[i] > user_array[j], increase "greater than count" by 1. "greater than count" becomes position of user_array[i] within new array.
    for (int i=0; i<len; i++){
        int gt_count = 0;
        for(int j=0; j<len; j++){
            if (user_array[i] > user_array[j]) gt_count += 1;
            if ((user_array[i] == user_array[j]) && (i>j)) gt_count += 1;
        }
        sorted_array[gt_count] = user_array[i];
    }
    //print result
    for (int i = 0; i < len; i++){
        std::cout << sorted_array[i];
        if (i != len - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    return 0;
}
