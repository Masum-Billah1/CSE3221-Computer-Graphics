#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void koch(int it,int x1,int y1,int x2,int y2){
    int x3,y3,x4,y4,x5,y5;
    int dx,dy;
    if(it==0){
        line(x1,y1,x2,y2); 
    }
    else{
        dx = (x2-x1)/3;
        dy = (y2-y1)/3;
        x3 = x1+dx;
        y3 = y1+dy;
        x4 = 0.5*(x1+x2)+sqrt(3)*(y1-y2)/6;
        y4 = 0.5*(y1+y2)+sqrt(3)*(x2-x1)/6;
        x5 = 2*dx+x1;
        y5 = 2*dy+y1;
        koch(it-1,x1,y1,x3,y3);
        koch(it-1,x3,y3,x4,y4);
        koch(it-1,x4,y4,x5,y5);
        koch(it-1,x5,y5,x2,y2);
    }
}
int main(){
    int it;
    cout <<"Number of Iteration : ";
    cin >> it;
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,NULL);
    koch(it,150,20,20,280);
    koch(it,280,280,150,20);
    koch(it,20,280,280,280);
    getch();
}
