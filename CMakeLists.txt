cmake_minimum_required(VERSION 4.1)
project(cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp FirstProgram/main.cpp
        FirstProgram/first.cpp
        FirstProgram/even.cpp
        basicofcpp/first.cpp
        basicofcpp/typecasting.cpp
        basicofcpp/conditionalStatement.cpp
        basicofcpp/loopStatement.cpp
        basicofcpp/practice1.cpp
        basicofcpp/pattern.cpp
        basicofcpp/functions.cpp
        basicofcpp/practice2.cpp
        basicofcpp/prime_number.cpp
        basicofcpp/binary_number_system.cpp
        basicofcpp/n_prime.cpp
        basicofcpp/practice3.cpp
        basicofcpp/reverse_array.cpp
        basicofcpp/array.cpp
        basicofcpp/vectors.cpp
        basicofcpp/sum_and_product_0fArray.cpp
        basicofcpp/swap_MinMax_array.cpp
        basicofcpp/unique_value_array.cpp
        basicofcpp/intersection_array.cpp
        basicOfcpp/sub_array_sum.cpp
        Algorithms/Kadans_algorithms.cpp
        FirstProgram/max_productOfarray.cpp
        FirstProgram/plus_one.cpp
        Algorithms/Voting_algorithm_with_majority.cpp
        Algorithms/Power_x_n.cpp
        Algorithms/buy_and_sell_stock.cpp
)
