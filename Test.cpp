/**
 * AUTHORS: Mohamad assi, Oday mahamid and zahraa zaid
 * 
 * 
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
    CHECK_THROWS_AS(find(text, "b"), std::exception);
    CHECK_THROWS_AS(find(text, "B"), std::exception);
    CHECK_THROWS_AS(find(text, "p"), std::exception);
    CHECK_THROWS_AS(find(text, "P"), std::exception);
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
    CHECK_THROWS_AS(find(text, "w"), std::exception);
    CHECK_THROWS_AS(find(text, "v"), std::exception);
    CHECK_THROWS_AS(find(text, "W"), std::exception);
    CHECK_THROWS_AS(find(text, "V"), std::exception);
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
    CHECK_THROWS_AS(find(text, "f"), std::exception);
    CHECK_THROWS_AS(find(text, "p"), std::exception);
    CHECK_THROWS_AS(find(text, "F"), std::exception);
    CHECK_THROWS_AS(find(text, "P"), std::exception);
}

TEST_CASE("Test replacement of f and b") {
    string text = "xxx habby yyy";
    CHECK(find(text, "habby") == string("habby"));
    CHECK(find(text, "haffy") == string("habby"));
    CHECK(find(text, "habfy") == string("habby"));
    CHECK(find(text, "hafby") == string("habby"));
    CHECK(find(text, "haBBy") == string("habby"));
    CHECK(find(text, "haFFy") == string("habby"));
    CHECK(find(text, "haFby") == string("habby"));
    CHECK(find(text, "hafBy") == string("habby"));
    CHECK(find(text, "haFBy") == string("habby"));
    CHECK(find(text, "haBFy") == string("habby"));
    CHECK_THROWS_AS(find(text, "f"), std::exception);
    CHECK_THROWS_AS(find(text, "b"), std::exception);
    CHECK_THROWS_AS(find(text, "F"), std::exception);
    CHECK_THROWS_AS(find(text, "B"), std::exception);
}

TEST_CASE("Test replacement of g and j") {
    string text = "xxx jeje yyy";
    CHECK(find(text, "jeje") == string("jeje"));
    CHECK(find(text, "gege") == string("jeje"));
    CHECK(find(text, "jege") == string("jeje"));
    CHECK(find(text, "geje") == string("jeje"));
    CHECK(find(text, "JeJe") == string("jeje"));
    CHECK(find(text, "FeFe") == string("jeje"));
    CHECK(find(text, "Jefe") == string("jeje"));
    CHECK(find(text, "jeFe") == string("jeje"));
    CHECK(find(text, "JeFe") == string("jeje"));
    CHECK(find(text, "FeJe") == string("jeje"));
    CHECK_THROWS_AS(find(text, "g"), std::exception);
    CHECK_THROWS_AS(find(text, "j"), std::exception);
    CHECK_THROWS_AS(find(text, "G"), std::exception);
    CHECK_THROWS_AS(find(text, "J"), std::exception);
}

TEST_CASE("Test replacement of c and k") {
    string text = "xxx keke yyy";
    CHECK(find(text, "keke") == string("keke"));
    CHECK(find(text, "cece") == string("keke"));
    CHECK(find(text, "kece") == string("keke"));
    CHECK(find(text, "ceke") == string("keke"));
    CHECK(find(text, "KeKe") == string("keke"));
    CHECK(find(text, "CeCe") == string("keke"));
    CHECK(find(text, "keCe") == string("keke"));
    CHECK(find(text, "ceKe") == string("keke"));
    CHECK(find(text, "CeKe") == string("keke"));
    CHECK(find(text, "KeCe") == string("keke"));
    CHECK_THROWS_AS(find(text, "c"), std::exception);
    CHECK_THROWS_AS(find(text, "k"), std::exception);
    CHECK_THROWS_AS(find(text, "C"), std::exception);
    CHECK_THROWS_AS(find(text, "K"), std::exception);
}

TEST_CASE("Test replacement of q and k") {
    string text = "xxx keke yyy";
    CHECK(find(text, "keke") == string("keke"));
    CHECK(find(text, "qeqe") == string("keke"));
    CHECK(find(text, "keqe") == string("keke"));
    CHECK(find(text, "qeke") == string("keke"));
    CHECK(find(text, "KeKe") == string("keke"));
    CHECK(find(text, "QeQe") == string("keke"));
    CHECK(find(text, "keQe") == string("keke"));
    CHECK(find(text, "qeKe") == string("keke"));
    CHECK(find(text, "QeKe") == string("keke"));
    CHECK(find(text, "KeQe") == string("keke"));
    CHECK_THROWS_AS(find(text, "q"), std::exception);
    CHECK_THROWS_AS(find(text, "k"), std::exception);
    CHECK_THROWS_AS(find(text, "Q"), std::exception);
    CHECK_THROWS_AS(find(text, "K"), std::exception);
}

TEST_CASE("Test replacement of c and q") {
    string text = "xxx cece yyy";
    CHECK(find(text, "cece") == string("cece"));
    CHECK(find(text, "qeqe") == string("cece"));
    CHECK(find(text, "qece") == string("cece"));
    CHECK(find(text, "ceqe") == string("cece"));
    CHECK(find(text, "CeCe") == string("cece"));
    CHECK(find(text, "QeQe") == string("cece"));
    CHECK(find(text, "Ceqe") == string("cece"));
    CHECK(find(text, "qeCe") == string("cece"));
    CHECK(find(text, "CeQe") == string("cece"));
    CHECK(find(text, "QeCe") == string("cece"));
    CHECK_THROWS_AS(find(text, "c"), std::exception);
    CHECK_THROWS_AS(find(text, "q"), std::exception);
    CHECK_THROWS_AS(find(text, "C"), std::exception);
    CHECK_THROWS_AS(find(text, "Q"), std::exception);
}

TEST_CASE("Test replacement of s and z") {
    string text = "xxx sese yyy";
    CHECK(find(text, "sese") == string("sese"));
    CHECK(find(text, "zeze") == string("sese"));
    CHECK(find(text, "seze") == string("sese"));
    CHECK(find(text, "zese") == string("sese"));
    CHECK(find(text, "SeSe") == string("sese"));
    CHECK(find(text, "ZeZe") == string("sese"));
    CHECK(find(text, "Sese") == string("sese"));
    CHECK(find(text, "seZe") == string("sese"));
    CHECK(find(text, "SeZe") == string("sese"));
    CHECK(find(text, "ZeSe") == string("sese"));
    CHECK_THROWS_AS(find(text, "s"), std::exception);
    CHECK_THROWS_AS(find(text, "z"), std::exception);
    CHECK_THROWS_AS(find(text, "S"), std::exception);
    CHECK_THROWS_AS(find(text, "Z"), std::exception);
}

TEST_CASE("Test replacement of d and t") {
    string text = "xxx dede yyy";
    CHECK(find(text, "dede") == string("dede"));
    CHECK(find(text, "tete") == string("dede"));
    CHECK(find(text, "dete") == string("dede"));
    CHECK(find(text, "tede") == string("dede"));
    CHECK(find(text, "DeDe") == string("dede"));
    CHECK(find(text, "TeTe") == string("dede"));
    CHECK(find(text, "Dete") == string("dede"));
    CHECK(find(text, "deTe") == string("dede"));
    CHECK(find(text, "DeTe") == string("dede"));
    CHECK(find(text, "TeTe") == string("dede"));
    CHECK_THROWS_AS(find(text, "d"), std::exception);
    CHECK_THROWS_AS(find(text, "t"), std::exception);
    CHECK_THROWS_AS(find(text, "D"), std::exception);
    CHECK_THROWS_AS(find(text, "T"), std::exception);
}

TEST_CASE("Test replacement of o and u") {
    string text = "xxx ueue yyy";
    CHECK(find(text, "ueue") == string("ueue"));
    CHECK(find(text, "oeoe") == string("ueue"));
    CHECK(find(text, "ueoe") == string("ueue"));
    CHECK(find(text, "oeue") == string("ueue"));
    CHECK(find(text, "UeUe") == string("ueue"));
    CHECK(find(text, "OeOe") == string("ueue"));
    CHECK(find(text, "ueOe") == string("ueue"));
    CHECK(find(text, "Ueoe") == string("ueue"));
    CHECK(find(text, "UeOe") == string("ueue"));
    CHECK(find(text, "OeUe") == string("ueue"));
    CHECK_THROWS_AS(find(text, "o"), std::exception);
    CHECK_THROWS_AS(find(text, "u"), std::exception);
    CHECK_THROWS_AS(find(text, "O"), std::exception);
    CHECK_THROWS_AS(find(text, "U"), std::exception);
}

TEST_CASE("Test replacement of i and y") {
    string text = "xxx yeye yyy";
    CHECK(find(text, "yeye") == string("yeye"));
    CHECK(find(text, "ieie") == string("yeye"));
    CHECK(find(text, "yeie") == string("yeye"));
    CHECK(find(text, "ieye") == string("yeye"));
    CHECK(find(text, "YeYe") == string("yeye"));
    CHECK(find(text, "IeIe") == string("yeye"));
    CHECK(find(text, "Yeie") == string("yeye"));
    CHECK(find(text, "Ieye") == string("yeye"));
    CHECK(find(text, "YeIe") == string("yeye"));
    CHECK(find(text, "IeYe") == string("yeye"));
    CHECK_THROWS_AS(find(text, "i"), std::exception);
    CHECK_THROWS_AS(find(text, "y"), std::exception);
    CHECK_THROWS_AS(find(text, "I"), std::exception);
    CHECK_THROWS_AS(find(text, "Y"), std::exception);
}