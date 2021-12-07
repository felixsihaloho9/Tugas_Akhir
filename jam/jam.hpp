#ifndef jam_HPP
#define jam_HPP

typedef struct{
    int HH;
    int MM;
    int SS;
}jam;

void ResetJam (jam*J);
void TulisJam (jam J);
int JamToDetik (jam J);
jam DetikToJam(int d);

#endif