#include <string>
#include <iostream>
#include <array>
#include "snowman.hpp"
using namespace std;

//Hats
string straw_hat = "       \n _===_ ";
string mexican_hat = "  ___  \n ..... ";
string fez_hat = "   _   \n  /_\\  ";
string russian_hat = "  ___  \n(_*_)";

//Torso
string buttons_torso = " : ";
string vest = "] [";
string inward_arms = "> <";
string none_torso = "   ";

//Base
string buttons_base = " : ";
string feet = "\" \"";
string flat = "___";
string none_base = "   ";

namespace ariel
{
    long const MIN = 11111111;
    long const MAX = 44444444;
    array<string, 4> hats = {straw_hat, mexican_hat, fez_hat, russian_hat};
    array<string, 4> nose = {",", ".", "_", " "};
    array<string, 4> left_eyes = {".", "o", "O", "-"};
    array<string, 4> right_eyes = {".", "o", "O", "-"};
    array<string, 4> left_arm_upper = {" ", "\\", " ", " "};
    array<string, 4> left_arm_lower = {"<", " ", "/", " "};
    array<string, 4> right_arm_upper = {" ", "/", " ", " "};
    array<string, 4> right_arm_lower = {">", " ", "\\", " "};
    array<string, 4> torso = {buttons_torso, vest, inward_arms, none_torso};
    array<string, 4> base = {buttons_base, feet, flat, none_base};

    string snowman(long number)
    {
        if (number < MIN || number > MAX)
        {
            throw range_error("Input out of range");
        }
        string number_to_string = to_string(number);
        string my_snowman;

        //Hat
        switch (number_to_string[0])
        {
        case '1':
            my_snowman += hats[0];
            break;
        case '2':
            my_snowman += hats[1];
            break;
        case '3':
            my_snowman += hats[2];
            break;
        case '4':
            my_snowman += hats[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        my_snowman += "\n";

        //Left arm upper
        switch (number_to_string[4])
        {
        case '1':
            my_snowman += left_arm_upper[0];
            break;
        case '2':
            my_snowman += left_arm_upper[1];
            break;
        case '3':
            my_snowman += left_arm_upper[2];
            break;
        case '4':
            my_snowman += left_arm_upper[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        my_snowman += "(";

        //Left eye
        switch (number_to_string[2])
        {
        case '1':
            my_snowman += left_eyes[0];
            break;
        case '2':
            my_snowman += left_eyes[1];
            break;
        case '3':
            my_snowman += left_eyes[2];
            break;
        case '4':
            my_snowman += left_eyes[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        //Nose
        switch (number_to_string[1])
        {
        case '1':
            my_snowman += nose[0];
            break;
        case '2':
            my_snowman += nose[1];
            break;
        case '3':
            my_snowman += nose[2];
            break;
        case '4':
            my_snowman += nose[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        //Right eye
        switch (number_to_string[3])
        {
        case '1':
            my_snowman += right_eyes[0];
            break;
        case '2':
            my_snowman += right_eyes[1];
            break;
        case '3':
            my_snowman += right_eyes[2];
            break;
        case '4':
            my_snowman += right_eyes[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        my_snowman += ")";

        //Right arm upper
        switch (number_to_string[5])
        {
        case '1':
            my_snowman += right_arm_upper[0];
            break;
        case '2':
            my_snowman += right_arm_upper[1];
            break;
        case '3':
            my_snowman += right_arm_upper[2];
            break;
        case '4':
            my_snowman += right_arm_upper[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        my_snowman += "\n";

        //Left arm lower
        switch (number_to_string[4])
        {
        case '1':
            my_snowman += left_arm_lower[0];
            break;
        case '2':
            my_snowman += left_arm_lower[1];
            break;
        case '3':
            my_snowman += left_arm_lower[2];
            break;
        case '4':
            my_snowman += left_arm_lower[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        my_snowman += "(";

        //Torso
        switch (number_to_string[6])
        {
        case '1':
            my_snowman += torso[0];
            break;
        case '2':
            my_snowman += torso[1];
            break;
        case '3':
            my_snowman += torso[2];
            break;
        case '4':
            my_snowman += torso[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        my_snowman += ")";

        //Right arm lower
        switch (number_to_string[5])
        {
        case '1':
            my_snowman += right_arm_lower[0];
            break;
        case '2':
            my_snowman += right_arm_lower[1];
            break;
        case '3':
            my_snowman += right_arm_lower[2];
            break;
        case '4':
            my_snowman += right_arm_lower[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        my_snowman += "\n (";

        //Base
        switch (number_to_string[7])
        {
        case '1':
            my_snowman += base[0];
            break;
        case '2':
            my_snowman += base[1];
            break;
        case '3':
            my_snowman += base[2];
            break;
        case '4':
            my_snowman += base[3];
            break;

        default:
            throw invalid_argument("Invalid input");
            break;
        }

        my_snowman += ") ";

        return my_snowman;
    }

}
