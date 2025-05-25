#include <iostream>
#include <thread>
#include <vector>
#include <mutex>


std::mutex a_mutex;


static int shared_value = 25;
void increase_shared_value()
{
    a_mutex.lock();
        shared_value++;
    a_mutex.unlock();
}

int main()
{

    std::vector<std::thread> threads;
    for (int i = 0; i <= 100; i++)
        threads.push_back(std::thread(increase_shared_value));
    for (int i = 0; i <= 100; i++)
        threads[i].join();

    std::cout << "Final value of shared value is: " << shared_value << std::endl;
    return 0;
}