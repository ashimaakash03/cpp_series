#include <iostream>
#include <thread>
#include <vector>

int main()
{

    auto lambda = [](int x)
    {
        std::cout << "Hello from test function " << std::this_thread::get_id() <<std::endl;
        std::cout << "Argument passed in " << x << std::endl;
    };
    std::cout << "Hello from main thread... " << std::endl;

    std::vector<std::thread> threads;
    for(int i=1; i<=10; i++)    threads.push_back(std::thread(lambda, i));
    for(int i=1; i<=10; i++)    threads[i].join();
    return 0;
}