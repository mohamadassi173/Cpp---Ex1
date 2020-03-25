/**
 * AUTHORS: Mohamad assi, Oday shibli and zahraa zaid
 * 
 * Date: 2020-03
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "haBPy") == string("happy"));
    CHECK(find(text, "haPBy") == string("happy"));
    CHECK(find(text, "haBpy") == string("happy"));
    CHECK(find(text, "haPby") == string("happy"));
}

TEST_CASE("Test replacement of w and v") {
    string text = "xxx wworry yyy";
    CHECK(find(text, "wworry") == string("wworry"));
    CHECK(find(text, "vvorry") == string("wworry"));
    CHECK(find(text, "vworry") == string("wworry"));
    CHECK(find(text, "wvorry") == string("wworry"));
    CHECK(find(text, "VVorry") == string("wworry"));
    CHECK(find(text, "VWorry") == string("wworry"));
    CHECK(find(text, "WVorry") == string("wworry"));
    CHECK(find(text, "wVorry") == string("wworry"));
    CHECK(find(text, "Wvorry") == string("wworry"));
}



TEST_CASE("Test replacement of f and p") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "haPPy") == string("happy"));
    CHECK(find(text, "haFFy") == string("happy"));
    CHECK(find(text, "haPFy") == string("happy"));
    CHECK(find(text, "haFPy") == string("happy"));
    CHECK(find(text, "hafPy") == string("happy"));
    CHECK(find(text, "haFpy") == string("happy"));
}









TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    
}

/* Add more test cases here */
