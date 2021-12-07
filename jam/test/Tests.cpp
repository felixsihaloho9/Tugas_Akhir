#include <gtest/gtest.h>
#include "../jam.hpp"

TEST (TulisJam_TEST, TulisJam){
    struct jam J;
    J.HH = 10;
    J.MM = 20;
    J.SS = 30;
    char ExpectedJam = "Jam: 10:20:30";
    EXPECT_EQ(ExpectedJam, ResetJam(J));
}

TEST (ResetJam_TEST, ResetJam){
    struct jam J, ExpectedResetJam;
    (*J).HH = 10;
    (*J).MM = 20;
    (*J).SS = 30;
    ResetJam(J);
    (*ExpectedResetJam).HH = 0;
    (*ExpectedResetJam).MM = 0;
    (*ExpectedResetJam).SS = 0;
    EXPECT_EQ(EXpectedResetJam,*J)
}

TEST (JamToDetik_TEST, JamToDetik){
    struct jam J;
    J.HH = 10;
    J.MM = 20;
    J.SS = 30;
    int ExpectedJamToDetik = 10*3600 + 20*60 + 30;
    EXPECT_EQ(ExpectedJamToDetik, JamToDetik(J));
}

TEST (DetikToJam_TEST, DetikToJam){
    struct jam J, ExpectedDetikToJam;
    int sisa;
    int d = 10;
    DetikToJam (d);
    ExpectedDetikToJam.SS = 10;
    EXPECT_EQ(ExpectedDetikToJam.SS, J.SS);
}