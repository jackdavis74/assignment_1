#include <cstdio>
#include <iostream>

//Int user input function
int get_user_input(){
    int x;
    std::cout << "Enter an integer";
    std::cin >> x;
    return x;
}

//Add function
int add_two_ints(int x, int y){
    int sum = x + y;
    return sum;
}

int main(){
    //Get user inputs 
    int n1 = get_user_input();
    int n2 = get_user_input();
    //Add and print/return
    int sum = add_two_ints(n1, n2);
    std::cout << "The sum of "<<n1<<" and "<<n2<<" is "<<sum<<"" <<std::endl;
    return sum;
}