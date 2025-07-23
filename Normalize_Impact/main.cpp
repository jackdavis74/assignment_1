#include <cstdio>
#include <iostream>

void compute_dollar_volume(const double* prices, const int* volumes, double* out, int len){
    for (int i = 0; i < len; i++){
        out[i] = prices[i] * volumes[i];
    }
}

void normalize_impact(double* impacts, int len){
    //get sum of dv
    double sum = 0.0;
    for (int i = 0; i<len; i++){
        sum += *(impacts + i);
    }
    //normalize in place
    for (int i = 0; i<len; i++){
        *(impacts + i) /= sum;
    }
}


int main(){
    //Initialize
    double prices[] = {100,99,98,98.5,101};
    int volumes[] = {50,10,5,20,200};
    int len = sizeof(prices) / sizeof(prices[0]);
    double dollar_volumes[len];
    //Get pointers
    double* prices_pointer = prices;
    int* vol_pointer = volumes;
    double* dv_pointer = dollar_volumes;
    //Calc dollar volumes
    compute_dollar_volume(prices_pointer, vol_pointer, dv_pointer, len);
    //Normalize
    normalize_impact(dv_pointer, len);
    //print output
    std::cout << "Impacts\n";
    for (int i = 0; i<len; i++){
        std::cout << dollar_volumes[i];
        if (i != len - 1) std::cout << ", ";
        else std::cout << "\n";
    }
}