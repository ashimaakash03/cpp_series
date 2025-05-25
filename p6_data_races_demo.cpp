// #include <iostream>
// #include <thread>
// #include <vector>

// static int shared_value = 25;
// void increase_shared_value()
// {
//     for(int i=1; i<=1000; i++){
//         shared_value+=i;
//     }
// }

// int main()
// {

//     std::vector<std::thread> threads;
//     for (int i = 0; i <= 100; i++)
//         threads.push_back(std::thread(increase_shared_value));
//     for (int i = 0; i <= 100; i++)
//         threads[i].join();

//     std::cout << "Final value of shared value is: " << shared_value << std::endl;
//     return 0;
// }