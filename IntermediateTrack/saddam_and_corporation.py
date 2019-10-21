##hints for solution
#the main idea is to count the number of connected componets 
#i've used the disjoint union data structure
##***** https://www.hackerrank.com/challenges/torque-and-development/problem  
# the link to original problem 
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the roadsAndLibraries function below.
def find(x, parent):
    if not parent[x] == x:
        parent[x] = find(parent[x], parent)
    
    return  parent[x]
#the main function which solves the problem
def roadsAndLibraries(n, c_lib, c_road, cities):
    parent = [i for i in range(n)]
    rank = [0] * n

    treeEdges = 0
    if c_lib < c_road:
        return c_lib * n

    for connection in cities:
        repr1 = find(connection[0] - 1, parent)
        repr2 = find(connection[1] - 1, parent)

        if not repr1 == repr2:
            if(rank[repr1] < rank[repr2]):
                parent[repr1] = repr2
            elif rank[repr1] > rank[repr2]:
                parent[repr2] = repr1
            else: 
                parent[repr1] = repr2
                rank[repr2] += 1

            treeEdges += 1
    
    return ((n) - treeEdges)*c_lib + treeEdges*c_road

if __name__ == '__main__':

    q = int(input())

    for q_itr in range(q):
        nmC_libC_road = input().split()

        n = int(nmC_libC_road[0])

        m = int(nmC_libC_road[1])

        c_lib = int(nmC_libC_road[2])

        c_road = int(nmC_libC_road[3])

        cities = []

        for _ in range(m):
            cities.append(list(map(int, input().rstrip().split())))

        result = roadsAndLibraries(n, c_lib, c_road, cities)

        print(result)

    
