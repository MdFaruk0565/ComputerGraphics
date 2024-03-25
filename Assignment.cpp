#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd=DETECT,gm;

    initgraph(&gd,&gm,"");

    int c;
    while(true){
    cout<<"[1] Village Home \n";
    cout<<"[2] President Car \n";
    cout<<"[3] Tajmahal\n";
    cout<<"[4] Football Stadium \n";
    cout<<"[5] AL-AQSHA  \n";
    cout<<"[6] Solar System \n";
    cout<<"[7] Exit \n";

    cout << "\nEnter your choice: ";
    cin >> c;

    switch(c)
    {

    case 1:    //Village Scenerio
    {

     int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    initwindow(800,700,"without Color ",300);

//---------------Middle Line----------
    line(0,300,800,300);
    line(0,301,800,301);


//House
    rectangle(200,300,400,320);

    rectangle(220,200,380,300);

    line(200,200,400,200);
    line(250,150,350,150);
    line(250,150,200,200);
    line(350,150,400,200);


    //Window

    rectangle(230,240,260,260);
    line(245,240,245,260);
    rectangle(330,240,360,260);
    line(345,240,345,260);
//Door
    rectangle(280,250,310,300);



    line(260,320,130,700);
    line(330,320,470,700);
    line(110,700,490,700);

    ellipse(600,450,0,360,170,55);

    ellipse(640,430,0,180,30,5);
    ellipse(580,430,180,0,30,5);
    ellipse(520,430,0,180,30,5);

    ellipse(660,450,0,180,30,5);
    ellipse(600,450,180,0,30,5);
    ellipse(540,450,0,180,30,5);

    ellipse(680,470,0,180,30,5);
    ellipse(620,470,180,0,30,5);
    ellipse(560,470,0,180,30,5);

    line(240,320,110,700);
    line(350,320,490,700);

//Left Tree
    line(100,300,100,200);
    line(130,300,130,200);

    line(100,200,90,160);
    line(130,200,140,160);

    line(115,208,100,145);
    line(115,208,130,145);

    line(90,160,100,145);
    line(140,160,130,145);

    //Leaf of the tree

    ellipse(85,195,180,0,15,10);
    ellipse(55,195,180,0,15,10);
    ellipse(42,175,90,270,15,20);
    ellipse(42,137,90,270,15,20);
    ellipse(85,117,80,180,45,30);
    ellipse(115,112,50,120,45,30);
    ellipse(150,155,240,350,35,45);
    ellipse(140,145,340,135,45,57);



//Right Tree

    line(500,300,500,200);
    line(530,300,530,200);

    line(500,200,490,160);
    line(530,200,540,160);

    line(515,208,500,145);
    line(515,208,530,145);

    line(490,160,500,145);
    line(540,160,530,145);


    //Leaf of the tree

    ellipse(485,195,180,0,15,10);
    ellipse(455,195,180,0,15,10);
    ellipse(442,175,90,270,15,20);
    ellipse(442,137,90,270,15,20);
    ellipse(485,117,80,180,45,30);
    ellipse(515,112,50,120,45,30);
    ellipse(550,155,240,350,35,45);
    ellipse(540,145,340,135,45,57);

//Road side Grass

    circle(50,260,5);
    circle(65,260,5);

    line(0,300,50,260);
    line(50,260,40,280);
    line(40,280,80,250);
    line(80,250,70,280);
    line(70,280,100,250);


//Grass right side of the left Tree

    line(140,300,145,290);
    line(145,290,148,299);
    line(148,299,158,280);
    line(158,280,170,296);
    line(170,296,190,256);
    line(190,256,210,300);

    //Grass right side of the right Tree

    line(560,300,600,250);
    line(600,250,580,290);
    line(580,290,625,230);
    line(625,230,615,285);
    line(615,285,635,255);
    line(635,255,630,295);
    line(630,295,670,245);
    line(670,245,675,265);
    line(675,265,695,235);
    line(695,235,695,275);
    line(695,275,720,225);
    line(720,225,730,295);
    line(730,295,780,215);
    line(780,215,800,300);

//Sun----

    circle(700,100,50);


//Bird

    ellipse(600,100,0,180,10,5);
    ellipse(600,100,0,180,11,6);
    ellipse(620,100,0,180,10,5);
    ellipse(620,100,0,180,11,6);

    ellipse(610,110,0,180,10,5);
    ellipse(630,110,0,180,10,5);


 //--------------------------With Color  --------------------------

    initwindow(800,700,"Colorful Village");

//---------------Middle Line----------
    line(0,300,800,300);
    line(0,301,800,301);


//House
    rectangle(200,300,400,320);

    setfillstyle(1,255);
    rectangle(220,200,380,300);
    floodfill(225,202,WHITE);


    setfillstyle(1,RED);
    line(200,200,400,200);
    line(250,150,350,150);
    line(250,150,200,200);
    line(350,150,400,200);
    floodfill(305,180,WHITE);

    //Window
    setfillstyle(1,LIGHTGRAY);
    rectangle(230,240,260,260);
    line(245,240,245,260);
    rectangle(330,240,360,260);
    line(345,240,345,260);
    floodfill(231,241,WHITE);
    floodfill(246,241,WHITE);

    floodfill(331,241,WHITE);
    floodfill(346,241,WHITE);

    //Door
    setfillstyle(1,LIGHTBLUE);
    rectangle(280,250,310,300);
    floodfill(296,299,WHITE);


    //Road of the House
    setfillstyle(1,LIGHTGRAY);
    line(260,320,130,700);
    line(330,320,470,700);
    line(110,700,490,700);
    floodfill(350,500,WHITE);

    setfillstyle(1,LIGHTCYAN);
    ellipse(600,450,0,360,170,55);

    ellipse(640,430,0,180,30,5);
    ellipse(580,430,180,0,30,5);
    ellipse(520,430,0,180,30,5);

    ellipse(660,450,0,180,30,5);
    ellipse(600,450,180,0,30,5);
    ellipse(540,450,0,180,30,5);

    ellipse(680,470,0,180,30,5);
    ellipse(620,470,180,0,30,5);
    ellipse(560,470,0,180,30,5);
     floodfill(710,450,WHITE);

   floodfill(710,45,WHITE);

    //setcolor(GREEN);
    setfillstyle(1,LIGHTGREEN);
    line(240,320,110,700);
    line(350,320,490,700);
    floodfill(205,325,WHITE);
    floodfill(405,325,WHITE);


setcolor(WHITE);
//Left Tree
    setfillstyle(1,DARKGRAY);
    line(100,300,100,200);
    line(130,300,130,200);

    line(100,200,90,160);
    line(130,200,140,160);

    line(115,208,100,145);
    line(115,208,130,145);

    line(90,160,100,145);
    line(140,160,130,145);
    floodfill(110,250,WHITE);

    //Leaf of the tree
    setfillstyle(1,GREEN);
    ellipse(85,195,180,0,15,10);
    ellipse(55,195,180,0,15,10);
    ellipse(42,175,90,270,15,20);
    ellipse(42,137,90,270,15,20);
    ellipse(85,117,80,180,45,30);
    ellipse(115,112,50,120,45,30);
    ellipse(150,155,240,350,35,45);
    ellipse(140,145,340,135,45,57);
    floodfill(140,150,WHITE);



//Right Tree
    setfillstyle(1,DARKGRAY);
    line(500,300,500,200);
    line(530,300,530,200);

    line(500,200,490,160);
    line(530,200,540,160);

    line(515,208,500,145);
    line(515,208,530,145);

    line(490,160,500,145);
    line(540,160,530,145);
    floodfill(510,250,WHITE);

    //Leaf of the tree
    setfillstyle(1,GREEN);
    ellipse(485,195,180,0,15,10);
    ellipse(455,195,180,0,15,10);
    ellipse(442,175,90,270,15,20);
    ellipse(442,137,90,270,15,20);
    ellipse(485,117,80,180,45,30);
    ellipse(515,112,50,120,45,30);
    ellipse(550,155,240,350,35,45);
    ellipse(540,145,340,135,45,57);
    floodfill(540,150,WHITE);

//Road side Grass

    setcolor(RED);
    setfillstyle(1,YELLOW);
    circle(50,260,5);
    circle(65,260,5);
    floodfill(50,260,RED);
    floodfill(65,260,RED);

    setcolor(WHITE);
    setfillstyle(1,GREEN);
    line(0,300,50,260);
    line(50,260,40,280);
    line(40,280,80,250);
    line(80,250,70,280);
    line(70,280,100,250);
    floodfill(10,299,WHITE);

//Grass right side of the left Tree

    line(140,300,145,290);
    line(145,290,148,299);
    line(148,299,158,280);
    line(158,280,170,296);
    line(170,296,190,256);
    line(190,256,210,300);

    floodfill(185,280,WHITE);
    floodfill(141,299,WHITE);

    //Grass right side of the right Tree

    line(560,300,600,250);
    line(600,250,580,290);
    line(580,290,625,230);
    line(625,230,615,285);
    line(615,285,635,255);
    line(635,255,630,295);
    line(630,295,670,245);
    line(670,245,675,265);
    line(675,265,695,235);
    line(695,235,695,275);
    line(695,275,720,225);
    line(720,225,730,295);
    line(730,295,780,215);
    line(780,215,800,300);
    floodfill(790,290,WHITE);

//Sun----
    setfillstyle(1,YELLOW);
    circle(700,100,50);
    floodfill(700,100,WHITE);

//

    setcolor(BLACK);
    ellipse(600,100,0,180,10,5);
    ellipse(600,100,0,180,11,6);
    ellipse(620,100,0,180,10,5);
    ellipse(620,100,0,180,11,6);

    ellipse(610,110,0,180,10,5);
    ellipse(630,110,0,180,10,5);

    break;

    }
    case 2: //Shaheed Minar
    {

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

//Without Color of President Car
//SUN

    circle( 70, 70, 40);


    //Road
    line(0,280,40,280);
    //divider
    line(70,280,110,280);
    line(140,280,190,280);
    line(220,280,260,280);
    line(290,280,330,280);
    line(610,280,650,280);

    //upper road
    line(250,225,355,225);
    line(485,223,650,223);
    //lower Road
    line(-1,335,650,335);


    //Cars

    //upper part
    line(5,215,30,180);
    line(30,180,150,180);
    line(150,180,195,215);
    line(5,215,195,215);

//Window Parts
    line(65,180,50,215);
    line(120,180,118,215);

    //buttom part of the President Car
    rectangle(5,215,250,250);
    rectangle(5,250,250,260);

    //Back Tyer
    circle(65,250,20);
    circle(65,250,15);
    circle(65,250,5);

    //Front Tyer
    circle(165,250,20);
    circle(165,250,15);
    circle(165,250,5);

    line(250,220,250,250);
    //National Flag
    line(250,220,250,190);
    //National Flag
    rectangle(220,190,250,205);
    circle(238,198,5);



//Car 02 or police van
    //upper part
    line(330,260,360,220);
    line(360,220,480,220);
    line(480,220,520,260);
    line(330,260,600,260);

//Window Parts
     line(400,220,385,260);
    line(450,220,450,260);

//Body Part
    rectangle(330,260,600,300);
    rectangle(330,300,600,310);
//Back Tyer
    circle(390,300,20);
    circle(390,300,15);
    circle(390,300,5);
//Front Tyer
    circle(500,300,20);
    circle(500,300,15);
    circle(500,300,5);


//Sigren
    rectangle(420,210,430,220);

    line(435,210,445,200);
    line(415,210,400,205);
    line(424,208,425,200);

    //Road side building
    //Building 01
    rectangle(245,50,310,190);
    rectangle(260,70,280,80);
    rectangle(260,100,280,110);
    rectangle(260,130,280,140);
    //Building 02
    rectangle(318,80,360,190);
    rectangle(335,100,343,170);
    //Building 03
    rectangle(365,70,420,190);
    rectangle(365,90,420,100);
    rectangle(365,120,420,130);
    rectangle(365,150,420,160);
    //Building 04
    rectangle(440,20,550,190);

    rectangle(450,30,470,40);
    rectangle(480,30,500,40);
    rectangle(510,30,530,40);

    rectangle(450,60,470,70);
    rectangle(480,60,500,70);
    rectangle(510,50,525,170);

    rectangle(450,90,470,100);
    rectangle(480,90,500,100);

    rectangle(450,120,470,130);
    rectangle(480,120,500,130);

    rectangle(450,120,470,130);
    rectangle(480,120,500,130);




//--------------With Color of President Car--------------
    initwindow(700,600,"The President Car",650);

    setcolor(BROWN);
    setfillstyle(1,WHITE);
    rectangle(0,0,700,700);
    floodfill(10,10,BROWN);

    //sun
    setcolor(BLACK);
    setfillstyle(1,YELLOW);
    circle( 70, 70, 40);
    floodfill(80,80,BLACK);

    //Road
    setcolor(BROWN);
    setfillstyle(1,3556687);
   rectangle(0,225,700,335);
   floodfill(300,300,BROWN);
    //divider
    setcolor(WHITE);

    line(70,280,110,280);
    line(140,280,190,280);
    line(220,280,260,280);
    line(290,280,330,280);
    line(610,280,660,280);



    //Cars

    //upper part
    setcolor(8683905);
    setfillstyle(1,1710619);
    line(5,215,30,180);
    line(30,180,150,180);
    line(150,180,195,215);
    line(5,215,195,215);
    floodfill(50,200,8683905);

//Window Parts
    line(65,180,50,215);
    line(120,180,118,215);

    //buttom part of the President Car
    setcolor(14143182);
    setfillstyle(1,14143182);
    rectangle(5,215,250,250);
    floodfill(7,220,14143182);



    setcolor(15130848);
    setfillstyle(1,15130848);
    rectangle(5,250,250,260);
    floodfill(7,255,15130848);

    //Back Tyer

    setcolor(WHITE);
    setfillstyle(1,BLACK);
    circle(65,250,20);
    floodfill(67,255,WHITE);

    circle(65,250,15);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(65,250,5);
    floodfill(70,255,WHITE);

    //Front Tyer

    setcolor(WHITE);
    setfillstyle(1,BLACK);
    circle(165,250,20);
    floodfill(167,255,WHITE);


    circle(165,250,15);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(165,250,5);
    floodfill(170,255,WHITE);


    line(250,220,250,250);

    //National Flag
    setcolor(BLACK);
    line(250,220,250,190);


    //National Flag
    setcolor(BLACK);
    setfillstyle(1,GREEN);
    rectangle(220,190,250,205);
    floodfill(225,200,BLACK);
    setfillstyle(1,255);
    circle(238,198,5);
    floodfill(240,200,BLACK);


//Car 02 or police van
    //upper part
     setcolor(BLACK);
    setfillstyle(1,BLACK);
    line(330,260,360,220);
    line(360,220,480,220);
    line(480,220,520,260);
    line(330,260,600,260);
    floodfill(350,250,BLACK);

//Window Parts
    setcolor(8683905);
     line(400,220,385,260);
    line(450,220,450,260);

    //Body Part
    setcolor(14143182);
    setfillstyle(1,14143182);
    rectangle(330,260,600,300);
    floodfill(340,270,14143182);

    setcolor(15130848);
    setfillstyle(1,15130848);
     rectangle(330,300,600,310);
    floodfill(335,305,15130848);



    //First Tyre

    setcolor(WHITE);
    setfillstyle(1,BLACK);
    circle(390,300,20);
    floodfill(400,300,WHITE);

    setcolor(BROWN);
    setfillstyle(1,WHITE);
    circle(390,300,15);
    floodfill(382,305,BROWN);


    setcolor(RED);
    setfillstyle(1,BLACK);
    circle(390,300,5);
    floodfill(387,300,RED);

    //Second Tyre

    setcolor(WHITE);
    setfillstyle(1,BLACK);
    circle(500,300,20);
    floodfill(510,300,WHITE);

    setcolor(BROWN);
    setfillstyle(1,WHITE);
    circle(500,300,15);
    floodfill(492,305,BROWN);


    setcolor(RED);
    setfillstyle(1,BLACK);
    circle(500,300,5);
    floodfill(497,300,RED);

    //Sigren
    setcolor(255);
    setfillstyle(1,255);
    rectangle(420,210,430,220);
    floodfill(425,215,255);

    line(435,210,445,200);
    line(415,210,400,205);
    line(424,208,425,200);

    setcolor(BLACK);
//Road side building
//Building 01
    setfillstyle(1,CYAN);
    rectangle(245,50,310,190);
    rectangle(260,70,280,80);
    rectangle(260,100,280,110);
    rectangle(260,130,280,140);
    floodfill(250,55,BLACK);
//Building 02
    setfillstyle(1,RED);
    rectangle(318,80,360,190);
    rectangle(335,100,343,170);
    floodfill(320,85,BLACK);
//Building 03
    setfillstyle(1,CYAN);
    rectangle(365,70,420,190);
    floodfill(366,71,BLACK);


    setfillstyle(1,BLACK);
    rectangle(365,90,420,100);
    floodfill(367,91,BLACK);


    setfillstyle(1,BLACK);
    rectangle(365,120,420,130);
    floodfill(367,121,BLACK);

    setfillstyle(1,BLACK);
    rectangle(365,150,420,160);
    floodfill(367,151,BLACK);

//Building 04
    setfillstyle(1,11);
    rectangle(440,20,550,190);

    rectangle(450,30,470,40);
    rectangle(480,30,500,40);
    rectangle(510,30,530,40);

    rectangle(450,60,470,70);
    rectangle(480,60,500,70);
    rectangle(510,50,525,170);

    rectangle(450,90,470,100);
    rectangle(480,90,500,100);

    rectangle(450,120,470,130);
    rectangle(480,120,500,130);

    rectangle(450,120,470,130);
    rectangle(480,120,500,130);
    floodfill(450,25,BLACK);

    break;
    }

    case 3: // Computer
    {
int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    initwindow(1000,800,"Without Color Tajmahal");
    //Field
    line(50,600,950,600);//Front Line -------
    line(50,600,200,70);//Left Line    /
    line(950,600,750,70);//Right Line   \   /
    line(200,70,750,70);// Back Area ---------


//Main Building Area
    //Front Wall

//4 Minar
    //Front Left Minner
    line(200,400,210,100);
    line(250,400,240,100);

    line(200,400,250,400);
    line(210,100,240,100);

    line(215,100,215,85);
    line(225,100,225,85);
    line(235,100,235,85);
    ellipse(225,87,0,180,25,45);
    line(195,85,255,85);

    line(224,40,224,25);
    line(225,40,225,25);
    line(226,41,226,25);

// Divider/Design of the Miner
    ellipse(225,300,0,360,40,3);

    ellipse(225,200,0,360,30,3);

//End Front Left Miner

//---------Start Front Right----------

    line(800,400,810,100);
    line(850,400,840,100);

    line(800,400,850,400);
    line(810,100,840,100);

    ellipse(825,87,0,180,25,45);
    line(795,85,855,85);

    line(815,100,815,85);
    line(825,100,825,85);
    line(835,100,835,85);

    line(824,40,824,25);
    line(825,40,825,25);
    line(826,40,826,25);

// Divider/Design of the Miner

    ellipse(825,300,0,360,40,3);

    ellipse(825,200,0,360,30,3);

//----------End Front Right-------------

// ----------Start Left Back---------
    rectangle(300,100,320,250);

    ellipse(310,90,0,180,15,20);
    line(290,90,330,90);


    line(305,100,305,90);
    line(310,100,310,90);
    line(315,100,315,90);

    line(309,70,309,58);
    line(310,70,310,58);


// Divider/Design of the Miner
    ellipse(310,200,0,360,20,3);

    ellipse(310,130,0,360,15,3);

//----------End Left Back --------------
//----------Start Right Back--------------
    rectangle(700,100,720,250);

    ellipse(710,90,0,180,15,20);
    line(690,90,730,90);

    line(705,100,705,90);
    line(710,100,710,90);
    line(715,100,715,90);

    line(709,70,709,58);
    line(710,70,710,58);
// Divider/Design of the Miner
    ellipse(710,200,0,360,20,3);

    ellipse(710,130,0,360,15,3);


 //------End Right Back------------
//Main Bulding

//------------Start Middle or Main Gombuj-----------------
    circle(500,100,65);

    ellipse(500,37,0,180,6,30);//Top line on the Gombuj

    ellipse(500,100,0,180,45,65);
    ellipse(500,100,0,180,20,65);
//-----------End Middle Gombuj---------

    rectangle(430,100,570,300);//Middle Part


//----------Start Main door or Middle Part Door-----------

    ellipse(500,300,0,180,50,150);

//Left Part  beside the Main Door
    circle(400,120,25);

    setcolor(WHITE);
    line(400,94,400,80);
    line(399,94,399,80);
    rectangle(370,120,430,300);

    line(370,120,370,300);//right
    line(370,300,340,280);//bottom
    line(340,280,340,120);//left
    line(340,120,370,120);//top


//Window 01

    line(380,280,420,280);
    ellipse(400,282,0,180,20,40);


//Window 02

    line(380,200,420,200);
    ellipse(400,202,0,180,20,40);


//Start Right Part beside the Main Door
    circle(600,120,25);

    line(600,94,600,80);
    line(601,94,601,80);

    rectangle(570,120,630,300);

//Window 01

    line(580,280,620,280);
    ellipse(600,282,0,180,20,40);
//Window 02

    line(580,200,620,200);
    ellipse(600,202,0,180,20,40);

    line(630,120,630,300);//left
    line(630,300,660,280);//bottom
    line(660,280,660,120);//right
    line(660,120,630,120);//top

//-----------Water Lane-----------

    line(450,300,550,300);
    line(480,300,420,600);
    line(520,300,580,600);
    line(370,600,630,600);

//Road side, near the water line

    line(450,300,370,600);
    line(550,300,630,600);

//------------------------------------- Tajmahal With Color---------------------
initwindow(1000,800,"Tajmohol",0,50);

//Field
    setfillstyle(1,GREEN);
    line(50,600,950,600);//Front Line -------
    line(50,600,200,70);//Left Line    /
    line(950,600,750,70);//Right Line   \   /
    line(200,70,750,70);// Back Area ---------
    floodfill(150,500,WHITE);

//Main Building Area
    //Front Wall

//4 Minar
    //Front Left Minner
    setfillstyle(1,YELLOW);
    line(200,400,210,100);
    line(250,400,240,100);

    line(200,400,250,400);
    line(210,100,240,100);

    line(215,100,215,85);
    line(225,100,225,85);
    line(235,100,235,85);

    floodfill(205,395,WHITE);

    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(225,87,0,180,25,45);
    line(195,85,255,85);
    floodfill(224,84,RED);
    setcolor(WHITE);
    line(224,40,224,25);
    line(225,40,225,25);
    line(226,41,226,25);

// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(225,300,0,360,40,3);
    floodfill(225,300,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(225,200,0,360,30,3);
    floodfill(225,200,LIGHTGRAY);

//End Front Left Miner

//---------Start Front Right----------
    setcolor(BROWN);
    setfillstyle(1,YELLOW);
    line(800,400,810,100);
    line(850,400,840,100);

    line(800,400,850,400);
    line(810,100,840,100);

    floodfill(805,395,BROWN);

    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(825,87,0,180,25,45);
    line(795,85,855,85);
    floodfill(824,84,RED);
    setcolor(WHITE);

    line(815,100,815,85);
    line(825,100,825,85);
    line(835,100,835,85);

    line(824,40,824,25);
    line(825,40,825,25);
    line(826,40,826,25);

// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(825,300,0,360,40,3);
    floodfill(825,300,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(825,200,0,360,30,3);
    floodfill(825,200,LIGHTGRAY);
//----------End Front Right-------------

// ----------Start Left Back---------
    setcolor(RED);
    setfillstyle(1,YELLOW);
    rectangle(300,100,320,250);
    floodfill(305,105,RED);

    setfillstyle(1,RED);
    ellipse(310,90,0,180,15,20);
    line(290,90,330,90);
    floodfill(315,80,RED);
    setcolor(WHITE);

    line(305,100,305,90);
    line(310,100,310,90);
    line(315,100,315,90);

    line(309,70,309,58);
    line(310,70,310,58);

// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(310,200,0,360,20,3);
    floodfill(300,200,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(310,130,0,360,15,3);
    floodfill(310,130,LIGHTGRAY);

//----------End Left Back --------------
//----------Start Right Back--------------
    setcolor(RED);
    setfillstyle(1,YELLOW);
    rectangle(700,100,720,250);
    floodfill(705,105,RED);

    setfillstyle(1,RED);
    ellipse(710,90,0,180,15,20);
    line(690,90,730,90);
    floodfill(715,80,RED);
    setcolor(WHITE);

    line(705,100,705,90);
    line(710,100,710,90);
    line(715,100,715,90);

    line(709,70,709,58);
    line(710,70,710,58);
// Divider/Design of the Miner
    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(710,200,0,360,20,3);
    floodfill(710,200,LIGHTGRAY);

    setcolor(LIGHTGRAY);
    setfillstyle(1,LIGHTGRAY);
    ellipse(710,130,0,360,15,3);
    floodfill(710,130,LIGHTGRAY);

 //------End Right Back------------
//Main Bulding

//------------Start Middle or Main Gombuj-----------------
    setcolor(BROWN);
    setfillstyle(1,LIGHTGRAY);
    circle(500,100,65);
    floodfill(500,80,BROWN);

    setfillstyle(1,WHITE);
    ellipse(500,37,0,180,6,30);//Top line on the Gombuj
    floodfill(500,30,BROWN);

    setcolor(WHITE);
    ellipse(500,100,0,180,45,65);
    ellipse(500,100,0,180,20,65);
//-----------End Middle Gombuj---------

    setcolor(DARKGRAY);
    setfillstyle(1,WHITE);
    rectangle(430,100,570,300);//Middle Part
    floodfill(455,150,DARKGRAY);//-----------------------------------

//----------Start Main door or Middle Part Door-----------
    setfillstyle(1,15130848);
    ellipse(500,300,0,180,50,150);
    floodfill(455,250,DARKGRAY);


//Left Part  beside the Main Door
    setcolor(BLACK);
    setfillstyle(1,180);
    circle(400,120,25);
    floodfill(400,100,BLACK);

    setcolor(WHITE);
    line(400,94,400,80);
    line(399,94,399,80);
    setcolor(DARKGRAY);
    setfillstyle(1,15130848);
    setcolor(DARKGRAY);
    rectangle(370,120,430,300);
    floodfill(375,180,DARKGRAY);

    line(370,120,370,300);//right
    line(370,300,340,280);//bottom
    line(340,280,340,120);//left
    line(340,120,370,120);//top
    floodfill(345,150,DARKGRAY);

    //Window 01
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(380,280,420,280);
    ellipse(400,282,0,180,20,40);
    floodfill(400,275,WHITE);

    //Window 02
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(380,200,420,200);
    ellipse(400,202,0,180,20,40);
    floodfill(400,175,WHITE);

//Start Right Part beside the Main Door

    setcolor(BLACK);
    setfillstyle(1,180);
    circle(600,120,25);
    floodfill(600,100,BLACK);

    setcolor(WHITE);
    line(600,94,600,80);
    line(601,94,601,80);
    setcolor(DARKGRAY);
    rectangle(570,120,630,300);

    //Window 01
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(580,280,620,280);
    ellipse(600,282,0,180,20,40);
    floodfill(600,275,WHITE);

    //Window 02
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    line(580,200,620,200);
    ellipse(600,202,0,180,20,40);
    floodfill(600,175,WHITE);

    setcolor(DARKGRAY);
    setfillstyle(1,15130848);
    floodfill(575,150,DARKGRAY);
    line(630,120,630,300);//left
    line(630,300,660,280);//bottom
    line(660,280,660,120);//right
    line(660,120,630,120);//top
    floodfill(635,150,DARKGRAY);

//-----------Water Lane-----------
    setcolor(DARKGRAY);
    setfillstyle(1,LIGHTCYAN);
    line(450,300,550,300);
    line(480,300,420,600);
    line(520,300,580,600);
    line(370,600,630,600);
    floodfill(500,400,DARKGRAY);
//Road side, near the water line
    setfillstyle(2,DARKGRAY);
    line(450,300,370,600);
    line(550,300,630,600);
    floodfill(470,310,DARKGRAY);
    floodfill(550,350,DARKGRAY);


    break;
    }

    case 4: //Football Field
    {
        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    //Field
    initwindow(1000,800,"Football");

    setcolor(WHITE);
    setfillstyle(1,GREEN);
    line(200,650,800,650);//Front Line ------
    line(200,650,300,100);//Left Line  /
    line(800,650,700,100);//Right Lane \.
    line(300,100,700,100);//Back Lane -------
    floodfill(400,250,WHITE);

    line(255,340,745,340);//Center line
    ellipse(500,340,0,360,130,80);//Center circle

    //Penalty are of Front

    line(400,650,410,600);
    line(410,600,550,600);
    line(550,600,540,650);
// Boundary of Goalkeeper Area
    line(300,650,325,550);
    line(325,550,660,550);
    line(660,550,645,650);
// Small shape area
    ellipse(500,550,0,180,50,20);

    //First or Front Goal POst
    setcolor(YELLOW);
    line(400,650,402,630);
    line(401,650,403,630);

    line(402,630,540,630);
    line(403,631,540,631);

    line(540,630,540,650);
    line(541,630,541,650);

    setfillstyle(3,RED);
    rectangle(410,650,530,670);
    rectangle(411,651,531,671);


    line(540,650,530,670);
    line(540,630,530,650);

    line(400,630,410,650);
    line(400,650,410,670);


    floodfill(412,645,YELLOW);
    setfillstyle(6,RED);
    floodfill(412,655,YELLOW);

//Second/Back Goal Post Area
    setcolor(WHITE);
    line(450,100,455,140);
    line(455,140,570,140);
    line(570,140,565,100);

    line(370,100,380,170);
    line(380,170,650,170);
    line(650,170,640,100);
//small Shape front of Goalpost
    ellipse(520,170,180,0,50,20);
    //Goal Post
    setcolor(YELLOW);
    rectangle(450,60,560,100);
    rectangle(451,61,559,100);

    line(450,60,460,70);
    line(450,100,460,90);

    line(460,70,460,90);

    line(560,60,550,70);
    line(560,100,550,90);

    line(550,70,550,90);
    setcolor(WHITE);
    setfillstyle(3,RED);
    rectangle(460,70,550,90);
    floodfill(465,75,WHITE);


    break;
    }

        case 5: //AL-Aqsha
    {
        int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    initwindow(1000,900,"AL-Aqsha",100);

    setfillstyle(1,LIGHTCYAN);
    rectangle(0,0,1000,900);
    floodfill(1,1,WHITE);

    setcolor(BLACK);
    setfillstyle(1,GREEN);
    line(0,452,1000,452);
    line(0,453,1000,453);
    floodfill(10,500,BLACK);

//Front Middle Side
    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);

    rectangle(300,300,600,450);
    floodfill(350,445,WHITE);

    setfillstyle(1,BLUE);
    rectangle(300,330,600,380);
    floodfill(305,335,WHITE);


//Front Right side

    setfillstyle(1,DARKGRAY);
    line(600,300,800,310);
    line(600,450,800,445);

    line(800,310,800,445);

    floodfill(610,449,WHITE);

    setfillstyle(1,BLUE);
    line(600,330,800,340);
    line(600,380,800,385);
    floodfill(605,335,WHITE);

//Front Left Side
    //Left Vertical Line
    line(200,320,200,445);

    setfillstyle(1,DARKGRAY);

    //Top
    line(300,300,200,320);

    //2nd top
    line(300,330,200,345);
    floodfill(212,330,WHITE);

    //Bottom
    line(300,450,200,445);
    floodfill(250,400,WHITE);
    //3rd Top
    setfillstyle(1,BLUE);
    line(300,380,200,385);
    floodfill(212,375,WHITE);

//Gombuj Part


//Main Gombuj
    setcolor(BLACK);
    setfillstyle(1,YELLOW);

    ellipse(525,100,0,180,5,70);

    ellipse(525,250,0,180,125,150);
    //ellipse(525,250,180,0,125,150);
    line(445,134,445,135);


    line(400,300,400,250);
    line(650,303,650,250);


    line(600,300,650,303);
    line(400,300,600,300);


    floodfill(525,250,BLACK);
//Sun
    setcolor(255);
    setfillstyle(1,255);
    circle(100,100,40);
    floodfill(100,100,255);

//Bird
setcolor(BLACK);

    ellipse(600,100,0,180,10,5);
    ellipse(600,100,0,180,11,6);
    ellipse(620,100,0,180,10,5);
    ellipse(620,100,0,180,11,6);

    ellipse(610,110,0,180,10,5);
    ellipse(630,110,0,180,10,5);

//Vertically line of Gombuj
    setcolor(WHITE);
    for(int i=10;i<=110;i+=10){
       ellipse(525,250,0,180,i,150);
    }
    //Horizontally Line of Gombu

    ellipse(525,240,0,180,125,15);
    ellipse(525,230,0,180,123,15);
    ellipse(525,220,0,180,123,15);
    ellipse(525,210,0,180,120,15);
    ellipse(525,200,0,180,118,15);
    ellipse(525,190,0,180,115,15);
    ellipse(525,180,0,180,110,15);
    ellipse(525,170,0,180,105,15);
    ellipse(525,160,0,180,100,15);
    ellipse(525,150,0,180,93,15);
    ellipse(525,140,0,180,80,15);
    ellipse(525,130,0,180,72,15);


    setcolor(BLACK);
    setfillstyle(1,RED);
    ellipse(525,250,0,180,125,15);
    ellipse(525,255,0,180,125,15);

    floodfill(525,263,BLACK);

    break;
    }
        case 6: //Solar System
    {
        int gd=DETECT,gm;
initgraph(&gd,&gm,"");
initwindow(1000,700,"without color Solar System",0,50);

    //Sun
    circle(450,350,50);


    //line of the Solar System
    circle(450,350,100);//Marchury
    circle(450,350,140);//Venus
    circle(450,350,200);//Earth
    circle(450,350,260);//Mars
    circle(450,350,350);//Jupiter
    circle(450,350,450);//Satur


    // Marchury
    circle(530,300,30);


    //Venus
    circle(450,490,30);


    //Earth
    circle(255,350,40);


    //Mars
    circle(355,120,40);
    //Jupiter

    circle(755,180,60);

    //Satur

    ellipse(820,610,0,360,20,70);
    ellipse(820,615,0,360,25,75);
    ellipse(820,620,0,360,25,85);

    circle(820,610,45);


initwindow(1000,700,"color Solar System",300,50);

    //Sun
    setfillstyle(1,YELLOW);
    circle(450,350,50);
    floodfill(450,350,WHITE);

    //line of the Solar System
    circle(450,350,100);//Marchury
    circle(450,350,140);//Venus
    circle(450,350,200);//Earth
    circle(450,350,260);//Mars
    circle(450,350,350);//Jupiter
    circle(450,350,450);//Satur


    // Marchury
    setcolor(DARKGRAY);
    setfillstyle(1,255);
    circle(530,300,30);
    floodfill(530,300,DARKGRAY);

    //Venus
    setfillstyle(1,DARKGRAY);
    circle(450,490,30);
    floodfill(450,490,DARKGRAY);

    //Earth
    setfillstyle(1,LIGHTCYAN);
    circle(255,350,40);
    floodfill(255,350,DARKGRAY);

    //Mars
    setfillstyle(1,RED);
    circle(355,120,40);
    floodfill(355,120,DARKGRAY);

    //Jupiter

    setfillstyle(1,LIGHTGRAY);
    circle(755,180,60);
    floodfill(755,180,DARKGRAY);

    //Satur
    setcolor(WHITE);
    ellipse(820,610,0,360,20,70);
    ellipse(820,615,0,360,25,75);
    ellipse(820,620,0,360,25,85);
    setcolor(DARKGRAY);
    setfillstyle(1,CYAN);
    circle(820,610,45);
    floodfill(820,600,DARKGRAY);

    break;
    }

     case 7:{
         closegraph();
     cout<<"Existing........."<<endl;
        return 0;
     }

    default:
           cout << "\nInvalid input, Try again...\n" << endl;
    }

    }

    return 0;
}
