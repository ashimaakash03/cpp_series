// #include <iostream>
// #include <thread>

// void test(int x){

//     std::cout<<"Hello from test function "<<std::endl;
//     std::cout<<"Argument passed in "<<x<< std::endl;

// }

// int main(){

//     std::cout<<"Hello from main thread... "<<std::endl;

//     std::thread thr1(&test, 25);
//     std::thread thr2(&test, 26);
//     std::thread thr3(&test, 27);

//     thr1.joinable();
//     thr1.join();
//     thr1.joinable();

//     thr2.join();
//     thr3.join();
//     return 0;
// }