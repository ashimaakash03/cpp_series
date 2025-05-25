// #include <iostream>
// #include <thread>
// #include <vector>

// int main()
// {

//     auto lambda = [](int x)
//     {
//         std::cout << "Hello from test function " << std::this_thread::get_id() <<std::endl;
//         std::cout << "Argument passed in " << x << std::endl;
//     };

//     std::vector<std::jthread> threads;
//     for(int i=1; i<=10; i++)    threads.push_back(std::jthread(lambda, i));

//     std::cout << "Hello from main thread... " << std::endl;
//     return 0;
// }