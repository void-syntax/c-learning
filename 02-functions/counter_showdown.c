#include <stdio.h>

int counter = 0; // we can use this variable anywhere we want despite the scope


int counter_increment() {
    counter++;
}

void local() {
    int counter = 1; // this function is only useable for void function,local scope
    counter++;
}


void stc() {
    
}



int main() {
    int counter = 0; // block scope, this variable is useable only for main function

}