#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solutions
{
public:
    // 1) https://leetcode.com/problems/roman-to-integer/description/
    /*static int RomanToInteger(string romanNumber)
    {
        int total = 0;
        for (int i = 0; i < romanNumber.length(); i++)
        {
            char next = (i == romanNumber.length() - 1) ? ' ' : romanNumber[i + 1];
            switch (romanNumber[i])
            {
            case 'I':
            {
                int value = 1;
                if (next != ' ' && (next == 'V' || next == 'X'))
                    value *= -1;
                total += value;
                break;
            }
            case 'V':
            {
                total += 5;
                break;
            }
            case 'X':
            {
                int value = 10;
                if (next != ' ' && (next == 'L' || next == 'C'))
                    value *= -1;
                total += value;
                break;
            }
            case 'L':
            {
                total += 50;
                break;
            }
            case 'C':
            {
                int value = 100;
                if (next != ' ' && (next == 'D' || next == 'M'))
                    value *= -1;
                total += value;
                break;
            }
            case 'D':
            {
                total += 500;
                break;
            }
            case 'M':
            {
                total += 1000;
                break;
            }
            default:
                break;
            }
        }

        return total;
    }*/
    //----------------------------------------------------------
    // 2) https://leetcode.com/problems/palindrome-number/description/
    /*static bool isPalindrome(int number)
    {
        if (number < 0)
            return false;

        int tmp = number;
        long revert = 0;
        do
        {
            revert *= 10;
            revert += (tmp % 10);
            tmp /= 10;
        } while (tmp > 0);
        return (revert == number);
    }*/
    //----------------------------------------------------------
};