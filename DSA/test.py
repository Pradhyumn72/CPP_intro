''' Q1]check for the no of continous even count of characters and sum that count....
for ex=aaa=3 ,do not take it 
for ex=bb=2 take it 
a=1 do not take it 
cccc=4 take it 
dd=2 take it
now sum the even counts=2+4+2=8....
'''

# s = "aaabbaccccdd"

# count = 1
# total = 0

# for i in range(1, len(s)):
#     if s[i] == s[i - 1]:
#         count += 1
#     else:
#         if count % 2 == 0:
#             total += count
#         count = 1

# if count % 2 == 0:
#     total += count

# print("Sum = ", total)

''' Q2) A person has N rupees to buy milk.

There are two types of milk bottles available:

Plastic Bottle
Cost = R1 rupees
Cannot be returned after use.
Glass Bottle
Cost = R2 rupees
After consuming the milk, the empty glass bottle can be returned, and the person receives R3 rupees back.

Each bottle contains 1 liter of milk.

Your task is to determine the maximum number of liters of milk the person can buy with N rupees.'''

# def max_liters(n, r1, r2, r3):

#     # we will check for plastic as it will be cheaper
#     if r1 <= r2 - r3:
#         return n // r1

#     liters = 0
#     # here checking for glass bottle
#     while n >= r2:
#         n -= r2      # Buy glass
#         liters += 1
#         n += r3      # Return bottle

#     return liters


# print(max_liters(10, 11, 9, 8))

''' Group Duplicate Characters After Moving Last Character to Front
Problem Statement

Given a string S, perform the following operations:

Move the last character of the string to the beginning.
Rearrange the remaining characters in-place so that all identical characters appear together.
The relative order of different groups is not important unless specified.

Return the modified string'''
def group_duplicates(s):
    if len(s) <= 1:
        return s

    # Step 1: Move last character to the front
    s = s[-1] + s[:-1]

    # Convert to list since strings are immutable
    s = list(s)
    n = len(s)

    # Step 2: Group duplicates
    for i in range(n - 1):
        pos = i + 1

        for j in range(i + 1, n):
            if s[j] == s[i]:
                temp = s.pop(j)
                s.insert(pos, temp)
                pos += 1

    return "".join(s)



print(group_duplicates("apple"))  # eappl


#cpp code 
# #include <iostream>
# #include <string>
# using namespace std;

# int main() {
#     string s;
#     cin >> s;

#     int n = s.length();

#     // Step 1: Move last character to the front
#     s = s[n - 1] + s.substr(0, n - 1);

#     // Step 2: Group duplicate characters together
#     for (int i = 0; i < n - 1; i++) {

#         int pos = i + 1;

#         for (int j = i + 1; j < n; j++) {

#             if (s[j] == s[i]) {
#                 // Bring duplicate next to current group
#                 char temp = s[j];

#                 for (int k = j; k > pos; k--) {
#                     s[k] = s[k - 1];
#                 }

#                 s[pos] = temp;
#                 pos++;
#             }
#         }
#     }

#     cout << s;

#     return 0;
# }

