#include <iostream>
#include <thread>

// Function that will run in a thread
void hello() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    // Create a new thread that runs the 'hello' function
    std::thread t(hello);

    // Wait for the thread to finish before continuing (joining)
    t.join(); 

    return 0;
}