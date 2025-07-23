#!/bin/bash

g++ array_sort_2.cpp -o array_sort_2

expected_1="1, 2, 3, 4, 5"
test_1=$(echo -e "5\n1\n2\n3\n4\n5" | ./array_sort_2)
if echo "$test_1" | grep -q "$expected_1"; then
    echo "Test 1 passed"
else
    echo "Test 1 failed"
    echo "Expected: $expected_1"
    echo "Got: $test_1"
    exit 1
fi

expected_2="1, 1, 1, 1, 1, 1, 1, 1, 1, 1"
test_2=$(echo -e "10\n1\n1\n1\n1\n1\n1\n1\n1\n1\n1" | ./array_sort_2)
if echo "$test_2" | grep -q "$expected_2"; then
    echo "Test 2 passed"
else      
    echo "Test 2 failed"
    echo "Expected: $expected_2"
    echo "Got: $test_2"
    exit 1
fi

expected_3="1, 3, 7, 9, 10, 12, 13, 14, 17, 18, 19, 22, 45, 65, 74, 85, 90, 90, 91, 105, 2000"
test_3=$(echo -e "21\n12\n13\n14\n10\n9\n105\n65\n85\n1\n90\n91\n74\n3\n45\n7\n22\n17\n18\n19\n2000\n90" | ./array_sort_2)
if echo "$test_3" | grep -q "$expected_3"; then
    echo "Test 3 passed"
else
    echo "Test 3 failed"
    echo "Expected: $expected_3"
    echo "Got: $test_3"
    exit 1
fi

echo "All tests passed"
exit 0
