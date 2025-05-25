#include <iostream>
#include <thread>
#include <vector>
#include <atomic>


//Using std::atomic to omit the use of locks & mutex
static std::atomic<int> shared_value = 25;
void increase_shared_value()
{
    for(int i=1; i<=1000; i++) shared_value++;
    
}

int main()
{

    std::vector<std::thread> threads;
    for (int i = 0; i <= 100; i++)
        threads.push_back(std::thread(increase_shared_value));
    for (int i = 0; i <= 100; i++)
        threads[i].join();

    std::cout << "Final value of shared value is: " << shared_value << " using atomic" <<std::endl;
    return 0;
}