cmake_minimum_required(VERSION 3.13)
project(suanfa C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(suanfa
        binaryTree.c
        binaryTree.h
        hashTable.c
        hashTable.h
        leetcode.c
        leetcode.h
        main.c
        redBlackTree.c
        redBlackTree.h
        stack.c
        stack.h dataStructure/NodeTreeMap.c dataStructure/NodeTreeMap.h)
add_executable(main98 98-validate_binary_search_tree/validateBinarySearchTree.c)
