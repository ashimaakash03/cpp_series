#include <iostream>
#include <thread>

int main()
{

    auto lambda = [](int x)
    {
        std::cout << "Hello from test function " << std::endl;
        std::cout << "Argument passed in " << x << std::endl;
    };
    std::cout << "Hello from main thread... " << std::endl;

    std::thread thr1(lambda, 25);
    std::thread thr2(lambda, 26);
    std::thread thr3(lambda, 27);

    thr1.joinable();
    thr1.join();
    thr1.joinable();

    thr2.join();
    thr3.join();
    return 0;
}