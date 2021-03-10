#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>

std::string nospaces(std::string input)
{
    std::erase(input, ' ');
    std::erase(input, '\t');
    std::erase(input, '\n');
    std::erase(input, '\r');
    return input;
}

TEST_CASE("Hat Test")
{
    CHECK(nospaces(snowman(11111111)) == nospaces("     \n_===_\n (.,.) \n<( : )>\n( : )"));
    CHECK(nospaces(snowman(22222222)) == nospaces(" ___ \n.....\n\\(o.o)/\n (] [) \n(\" \")"));
    CHECK(nospaces(snowman(33333333)) == nospaces("  _  \n/_\\\n (O_O) \n/(> <)\\\n(___)"));
    CHECK(nospaces(snowman(44444444)) == nospaces(" ___ \n(_*_)\n (- -) \n (   ) \n(   )"));
}

TEST_CASE("Nose Test")
{
    CHECK(nospaces(snowman(11112222)) == nospaces("     \n_===_\n\\(.,.)/\n (] [) \n(\" \")"));
    CHECK(nospaces(snowman(12121212)) == nospaces("     \n_===_\n (..o)/\n<( : ) \n(\" \")"));
    CHECK(nospaces(snowman(33334444)) == nospaces("  _  \n/_\\\n (O_O) \n (   ) \n (   )"));
    CHECK(nospaces(snowman(24242424)) == nospaces(" ___ \n.....\n\\(o -) \n (] [) \n(   )"));
}

TEST_CASE("Left Eye Test")
{
    CHECK(nospaces(snowman(11114411)) == nospaces("     \n_===_\n (.,.) \n ( : ) \n( : )"));
    CHECK(nospaces(snowman(24242411)) == nospaces(" ___ \n.....\n\\(o -) \n ( : ) \n( : )"));
    CHECK(nospaces(snowman(12344321)) == nospaces("     \n_===_\n (O.-) \n (] [)\\\n( : )"));
    CHECK(nospaces(snowman(44444433)) == nospaces(" ___ \n(_*_)\n (- -) \n (> <) \n(___)"));
}

TEST_CASE("Right Eye Test")
{
    CHECK(nospaces(snowman(11113333)) == nospaces("     \n_===_\n (.,.) \n/(> <)\\\n(___)"));
    CHECK(nospaces(snowman(12121244)) == nospaces("     \n_===_\n (..o)/\n<(   ) \n(   )"));
    CHECK(nospaces(snowman(22334411)) == nospaces(" ___ \n.....\n (O.O) \n ( : ) \n( : )"));
    CHECK(nospaces(snowman(34343412)) == nospaces("  _  \n/_\\\n (O -) \n/( : ) \n(\" \")"));
}

TEST_CASE("Left Arm Test")
{
    CHECK(nospaces(snowman(11441144)) == nospaces("     \n_===_\n (-,-) \n<(   )>\n(   )"));
    CHECK(nospaces(snowman(22332233)) == nospaces(" ___ \n.....\n\\(O.O)/\n (> <) \n(___)"));
    CHECK(nospaces(snowman(11143412)) == nospaces("     \n_===_\n (.,-) \n/( : ) \n(\" \")"));
    CHECK(nospaces(snowman(22334411)) == nospaces(" ___ \n.....\n (O.O) \n ( : ) \n( : )"));
}

TEST_CASE("Right Arm Test")
{
    CHECK(nospaces(snowman(11114111)) == nospaces("     \n_===_\n (.,.) \n ( : )>\n( : )"));
    CHECK(nospaces(snowman(24142211)) == nospaces(" ___ \n.....\n\\(. -)/\n ( : ) \n( : )"));
    CHECK(nospaces(snowman(12144321)) == nospaces("     \n_===_\n (..-) \n (] [)\\\n( : )"));
    CHECK(nospaces(snowman(44144433)) == nospaces(" ___ \n(_*_)\n (. -) \n (> <) \n(___)"));
}

TEST_CASE("Torso Test")
{
    CHECK(nospaces(snowman(11113331)) == nospaces("     \n_===_\n (.,.) \n/(> <)\\\n( : )"));
    CHECK(nospaces(snowman(12121242)) == nospaces("     \n_===_\n (..o)/\n<(   ) \n(\" \")"));
    CHECK(nospaces(snowman(22334413)) == nospaces(" ___ \n.....\n (O.O) \n ( : ) \n(___)"));
    CHECK(nospaces(snowman(34343414)) == nospaces("  _  \n/_\\\n (O -) \n/( : ) \n(   )"));
}

TEST_CASE("Base Test")
{
    CHECK(nospaces(snowman(44444411)) == nospaces(" ___ \n(_*_)\n (- -) \n ( : ) \n( : )"));
    CHECK(nospaces(snowman(11111122)) == nospaces("     \n_===_\n (.,.) \n<(] [)>\n(\" \")"));
    CHECK(nospaces(snowman(22222233)) == nospaces(" ___ \n.....\n\\(o.o)/\n (> <) \n(___)"));
    CHECK(nospaces(snowman(33333344)) == nospaces("  _  \n/_\\\n (O_O) \n/(   )\\\n(   )"));
}

TEST_CASE("Invalid input - Less then 8 digits")
{
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(2));
    CHECK_THROWS(snowman(3));
    CHECK_THROWS(snowman(4));
    CHECK_THROWS(snowman(5));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(223));
    CHECK_THROWS(snowman(4213));
    CHECK_THROWS(snowman(12344));
    CHECK_THROWS(snowman(112233));
    CHECK_THROWS(snowman(1223344));
    CHECK_THROWS(snowman(3344221));
}

TEST_CASE("Invalid input - More then 8 digits")
{
    CHECK_THROWS(snowman(111111111111));
    CHECK_THROWS(snowman(222222222));
    CHECK_THROWS(snowman(3333333333));
    CHECK_THROWS(snowman(44444444444));
}

TEST_CASE("Invalid input - Digits not in range")
{
    CHECK_THROWS(snowman(12341238));
    CHECK_THROWS(snowman(888888));
    CHECK_THROWS(snowman(12111229));
    CHECK_THROWS(snowman(987654321));
    CHECK_THROWS(snowman(99));
    CHECK_THROWS(snowman(5512345));
    CHECK_THROWS(snowman(53277));
    CHECK_THROWS(snowman(764));
    CHECK_THROWS(snowman(77777777));
    CHECK_THROWS(snowman(555));
}

TEST_CASE("Negative Input")
{
    CHECK_THROWS(snowman(-987654321));
    CHECK_THROWS(snowman(-12435));
    CHECK_THROWS(snowman(-11));
    CHECK_THROWS(snowman(-4555));
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(-12211221));
}
