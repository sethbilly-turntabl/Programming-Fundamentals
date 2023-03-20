#include <iostream>

int get_num(){
    std::cout << "Enter a number :";
    int a;
    std::cin >> a;
    return a;
}

int main() {
    int counter = 1;
    int num = get_num();
    if(num % 2 == 0) {
        while(counter <= 20){
            std::cout << counter << " x " << num << " = "  << (counter * num) << std::endl;
            counter ++;
        }
    }else {
        while(counter <= 30) {
            if(counter % num != 0) {
                std::cout << counter << std::endl; 
            }
            counter++;
                
        }
    }
}