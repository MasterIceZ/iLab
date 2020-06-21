#include<bits/stdc++.h>
using namespace std;
#include "var.h"
#include "ChessPlay.h"
int main ()
{
    //drawtable();
    settable();
    while(1)
    {
        int pos1,pos2,pos3,pos4;
        scanf("%d %d %d %d",&pos1,&pos2,&pos3,&pos4);
        play(pos1,pos2,pos3,pos4);
    }
    return 0;
}
