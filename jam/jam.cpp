#include "jam.hpp"

void ResetJam (jam *J){
    (*J).HH = 0;
    (*J).MM = 0;
    (*J).SS = 0;
}

void TulisJam (jam J){
    printf("Jam: %2d:%2d:%2d", J.HH, J.MM, J.SS);
}

int JamToDetik (jam J){
    return (J.HH*3600 + J.MM*60 +J.SS);
}

jam DetikToJam (int d){
    jam J;
    int sisa;

    J.HH =d/3600;
    sisa = d %3600;
    J.MM = sisa /60;
    J.SS = sisa %60;
    return J;
}