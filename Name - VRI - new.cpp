#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float DETIK = 0.0;
float DETIK2 = 0.0;

//ini buat menerima input dari user dan apa yang harus dilakukan
// esc -> exit
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE); // close program on ESC key
}

// ini tempat set view, perhitungan segala macem
void setup_viewport(GLFWwindow* window)
{
    // setting viewports size, projection etc
    float ratio;
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    //ratio = width / (float) height;
    glViewport(0, 0, width, height);

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(-10, 10, -10, 10, 1.f, -1.f); // kiri, kanan, bottom, top, depan, belakang
    glOrtho(0, 800, 800, 0, 1.f, -1.f); // kiri, kanan, bottom, top, depan, belakang -> ala ala editor

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}



/*void display()
{
    // your drawing code here, maybe
    //glRotatef((float) glfwGetTime() * 50.f, 0.f, 0.f, 1.f);
    glBegin(GL_QUADS);
    //glColor3f(1.f, 0.f, 0.f);
    glVertex2f(-0.5f, 0.5f);
    //glColor3f(0.f, 1.f, 0.f);
    glVertex2f(0.5f, 0.5f);
    //glColor3f(0.f, 0.f, 1.f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();
}*/


//////////////////////////////FUNGSI BUAT SENDIRI

void grid() {
    int x;
    for(x=0;x<=800;x+=40){

            if(x==400){


                glBegin(GL_LINES);

                glColor3ub(255,0,0);
                glVertex2f(x,800);
                glVertex2f(x,0);

                glEnd();

                glBegin(GL_LINES);

                glColor3ub(255,0,0);
                glVertex2f(800,x);
                glVertex2f(0,x);

                glEnd();

            }
            else{
                glBegin(GL_LINES);

                glColor3ub(255,255,255);
                glVertex2f(x,800);
                glVertex2f(x,0);

                glEnd();

                glBegin(GL_LINES);

                glColor3ub(255,255,255);
                glVertex2f(800,x);
                glVertex2f(0,x);

                glEnd();

            }

        }
}


void background(){

    //main BG
    glBegin(GL_POLYGON);

    glColor3ub(100+255*DETIK2,50+251*DETIK2,10+244*DETIK2);
    glVertex2d(0,0);

    glColor3ub(125+255*DETIK2,75+251*DETIK2,35+244*DETIK2);
    glVertex2d(800,0);

    glColor3ub(150+255*DETIK2,100+251*DETIK2,60+244*DETIK2);
    glVertex2d(800,800);

    glColor3ub(175+255*DETIK2,125+251*DETIK2,85+244*DETIK2);
    glVertex2d(0,800);

    glEnd();

    //Decorative 1
    glBegin(GL_POLYGON);

    glColor4ub(255,190,78,50+255*DETIK2);

    glVertex2d(58,135);
    glVertex2d(211,0);
    glVertex2d(220,0);

    glEnd();

    //Decorative 2
    glBegin(GL_POLYGON);

    glColor4ub(255,190,78, 75+255*DETIK2);

    glVertex2d(116,240);
    glVertex2d(0,344);
    glVertex2d(0,338);

    glEnd();

    //Decorative 3
    glBegin(GL_POLYGON);

    glColor4ub(255,190,78, 90+255*DETIK2);

    glVertex2d(145,675);
    glVertex2d(0,796);
    glVertex2d(0,800);
    glVertex2d(3,800);

    glEnd();

    //Decorative 4
    glBegin(GL_POLYGON);

    glColor4ub(255,190,78,40+255*DETIK2);

    glVertex2d(470,705);
    glVertex2d(363,800);
    glVertex2d(357,800);

    glEnd();

    //Decorative 5
    glBegin(GL_POLYGON);

    glColor4ub(255,190,78,60+255*DETIK2);

    glVertex2d(609,792);
    glVertex2d(800,624);
    glVertex2d(800,633);

    glEnd();

    //Decorative 6
    glBegin(GL_POLYGON);

    glColor4ub(255,190,78,80+255*DETIK2);

    glVertex2d(667,272);
    glVertex2d(800,155);
    glVertex2d(800,161);

    glEnd();

    //Decorative 7
    glBegin(GL_POLYGON);

    glColor4ub(255,190,78,90+255*DETIK2);

    glVertex2d(617,93);
    glVertex2d(722,0);
    glVertex2d(728,0);

    glEnd();

}

void hurufV(){
    //yellow
    glBegin(GL_POLYGON);

    glColor3ub(247,191,18);
    //glColor4f(1,1,1,0);

    glVertex2d(104 + (5*DETIK2),114 - (5*DETIK2));
    glVertex2d(142 + (5*DETIK2),114- (5*DETIK2));
    glVertex2d(117 + (5*DETIK2),146- (5*DETIK2));

    glEnd();

    //big green
    glBegin(GL_POLYGON);

    glColor3ub(29,205,195);

    glVertex2d(123 ,160 );
    glVertex2d(158 ,114 );
    glVertex2d(173 ,114 );
    glVertex2d(193 ,165 );
    glVertex2d(149 ,223 );

    glEnd();

    //strips green 1
    glBegin(GL_POLYGON);

    glColor3ub(0,166,166);

    glVertex2d(151 + (5*DETIK2),225 - (5*DETIK2));
    glVertex2d(195 + (5*DETIK2),168 - (5*DETIK2));
    glVertex2d(199 + (5*DETIK2),178 - (5*DETIK2));
    glVertex2d(155 + (5*DETIK2),235 - (5*DETIK2));

    glEnd();

    //strips green 2
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(166 - (5*DETIK2),225 + (5*DETIK2));
    glVertex2d(210 - (5*DETIK2),168 + (5*DETIK2));
    glVertex2d(214 - (5*DETIK2),178 + (5*DETIK2));
    glVertex2d(170 - (5*DETIK2),235 + (5*DETIK2));

    glEnd();

    //strips green 3
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(161 + (5*DETIK2),251 - (5*DETIK2));
    glVertex2d(205 + (5*DETIK2),194 - (5*DETIK2));
    glVertex2d(209 + (5*DETIK2),204 - (5*DETIK2));
    glVertex2d(166 + (5*DETIK2),261 - (5*DETIK2));

    glEnd();

    //strips orange 4
    glBegin(GL_POLYGON);

    glColor3ub(242,49,6);

    glVertex2d(167 - (5*DETIK2),264 + (5*DETIK2));
    glVertex2d(210 - (5*DETIK2),207 + (5*DETIK2));
    glVertex2d(214 - (5*DETIK2),217 + (5*DETIK2));
    glVertex2d(171 - (5*DETIK2),274 + (5*DETIK2));

    glEnd();

    //big Red
    glBegin(GL_POLYGON);

    glColor3ub(196,1,41);

    glVertex2d(172,277);
    glVertex2d(215,220);
    glVertex2d(232,263);
    glVertex2d(209,360);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(232,263);
    glVertex2d(287,126);
    glVertex2d(296,114);
    glVertex2d(361,114);
    glVertex2d(317,219);
    glVertex2d(209,360);

    glEnd();

    //small red
    glBegin(GL_POLYGON);

    glColor3ub(120,0,27);

    glVertex2d(226 + (5*DETIK2),360 - (5*DETIK2));
    glVertex2d(296 + (5*DETIK2),269 - (5*DETIK2));
    glVertex2d(257 + (5*DETIK2),360 - (5*DETIK2));

    glEnd();

}

void hurufI() {

    //green segitiga
    glBegin(GL_POLYGON);

    glColor3ub(29,205,195);

    glVertex2d(516,111);
    glVertex2d(548,111);
    glVertex2d(516,153);

    glEnd();

    //green stripes 1
    glBegin(GL_POLYGON);

    glColor3ub(0,166,166);

    glVertex2d(516 + (5*DETIK2),157 - (5*DETIK2));
    glVertex2d(551 + (5*DETIK2),111 - (5*DETIK2));
    glVertex2d(563 + (5*DETIK2),111 - (5*DETIK2));
    glVertex2d(516 + (5*DETIK2),173 - (5*DETIK2));

    glEnd();

    //green stripes 2
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(526 - (5*DETIK2),164 + (5*DETIK2));
    glVertex2d(576 - (5*DETIK2),98 + (5*DETIK2));
    glVertex2d(588 - (5*DETIK2),98 + (5*DETIK2));
    glVertex2d(526 - (5*DETIK2),179 + (5*DETIK2));

    glEnd();

    //green stripes 3
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(516 + (5*DETIK2),197 - (5*DETIK2));
    glVertex2d(580 + (5*DETIK2),113 - (5*DETIK2));
    glVertex2d(580 + (5*DETIK2),129 - (5*DETIK2));
    glVertex2d(516 + (5*DETIK2),212 - (5*DETIK2));

    glEnd();

    //orange stripes
    glBegin(GL_POLYGON);

    glColor3ub(242,49,6);

    glVertex2d(516 - (5*DETIK2),217 + (5*DETIK2));
    glVertex2d(580 - (5*DETIK2),133 + (5*DETIK2));
    glVertex2d(580 - (5*DETIK2),149 + (5*DETIK2));
    glVertex2d(516 - (5*DETIK2),232 + (5*DETIK2));

    glEnd();

    //RED big
    glBegin(GL_POLYGON);

    glColor3ub(196,1,41);

    glVertex2d(516,237);
    glVertex2d(580,153);
    glVertex2d(580,285);
    glVertex2d(525,357);
    glVertex2d(516,357);

    glEnd();

    //RED small
    glBegin(GL_POLYGON);

    glColor3ub(120,0,27);

    glVertex2d(542 + (5*DETIK2),357 - (5*DETIK2));
    glVertex2d(580 + (5*DETIK2),306 - (5*DETIK2));
    glVertex2d(580 + (5*DETIK2),357 - (5*DETIK2));

    glEnd();

}

void hurufT(){
    //green big
    glBegin(GL_POLYGON);

    glColor3ub(29,205,195);

    glVertex2d(148,441);
    glVertex2d(159,427);
    glVertex2d(232,427);
    glVertex2d(191,481);
    glVertex2d(148,481);

    glEnd();

    //stripes green 1
    glBegin(GL_POLYGON);

    glColor3ub(0,166,166);

    glVertex2d(194 + (5*DETIK2),481 - (5*DETIK2));
    glVertex2d(235 + (5*DETIK2),427 - (5*DETIK2));
    glVertex2d(247 + (5*DETIK2),427 - (5*DETIK2));
    glVertex2d(201 + (5*DETIK2),481 - (5*DETIK2));

    glEnd();


    glBegin(GL_POLYGON);

    glVertex2d(201 + (5*DETIK2),481 - (5*DETIK2));
    glVertex2d(247 + (5*DETIK2),427 - (5*DETIK2));
    glVertex2d(201 + (5*DETIK2),488 - (5*DETIK2));

    glEnd();

    //stripes green 2
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(211 - (5*DETIK2),480 + (5*DETIK2));
    glVertex2d(260 - (5*DETIK2),415 + (5*DETIK2));
    glVertex2d(272 - (5*DETIK2),415 + (5*DETIK2));
    glVertex2d(211 - (5*DETIK2),495 + (5*DETIK2));

    glEnd();

    //stripes green 3
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(201 + (5*DETIK2),513 - (5*DETIK2));
    glVertex2d(266 + (5*DETIK2),427 - (5*DETIK2));
    glVertex2d(278 + (5*DETIK2),427 - (5*DETIK2));
    glVertex2d(201 + (5*DETIK2),528 - (5*DETIK2));

    glEnd();

    //stripes orange
    glBegin(GL_POLYGON);

    glColor3ub(242,49,6);

    glVertex2d(201 - (5*DETIK2),532 + (5*DETIK2));
    glVertex2d(281 - (5*DETIK2),427 + (5*DETIK2));
    glVertex2d(293 - (5*DETIK2),427 + (5*DETIK2));
    glVertex2d(201 - (5*DETIK2),548 + (5*DETIK2));

    glEnd();

    //BIG Red
    glBegin(GL_POLYGON);

    glColor3ub(196,1,41);

    glVertex2d(296,427);
    glVertex2d(317,427);
    glVertex2d(317,481);
    glVertex2d(255,481);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(201,552);
    glVertex2d(255,481);
    glVertex2d(265,481);
    glVertex2d(265,600);
    glVertex2d(210,672);
    glVertex2d(201,672);

    glEnd();

    //Red small
    glBegin(GL_POLYGON);

    glColor3ub(120,0,27);

    glVertex2d(226 + (5*DETIK2),672 - (5*DETIK2));
    glVertex2d(264 + (5*DETIK2),622 - (5*DETIK2));
    glVertex2d(264 + (5*DETIK2),672 - (5*DETIK2));

    glEnd();
}

void hurufO(){
    //BIG Green
    glBegin(GL_TRIANGLE_STRIP);

    glColor3ub(29,205,195);

    glVertex2d(420,589);
    glVertex2d(417,578);
    glVertex2d(553,415);
    glVertex2d(419,584);
    glVertex2d(553,415);
    glVertex2d(416,574);
    glVertex2d(553,415);
    glVertex2d(414,562);
    glVertex2d(553,415);
    glVertex2d(413,548);
    glVertex2d(553,415);
    glVertex2d(413,541);
    glVertex2d(553,415);
    glVertex2d(413,532);
    glVertex2d(553,415);
    glVertex2d(414,524);
    glVertex2d(553,415);
    glVertex2d(415,517);
    glVertex2d(553,415);
    glVertex2d(417,509);
    glVertex2d(553,415);
    glVertex2d(419,501);
    glVertex2d(553,415);
    glVertex2d(422,495);
    glVertex2d(553,415);

    glVertex2d(426,486);
    glVertex2d(553,415);

    glVertex2d(452,452);
    glVertex2d(553,415);
    glVertex2d(456,448);
    glVertex2d(553,415);
    glVertex2d(461,444);
    glVertex2d(553,415);
    glVertex2d(467,440);
    glVertex2d(553,415);
    glVertex2d(473,436);
    glVertex2d(553,415);
    glVertex2d(481,432);
    glVertex2d(553,415);
    glVertex2d(488,428);
    glVertex2d(553,415);
    glVertex2d(496,425);
    glVertex2d(553,415);
    glVertex2d(504,422);
    glVertex2d(553,415);
    glVertex2d(512,419);
    glVertex2d(553,415);
    glVertex2d(521,417);
    glVertex2d(553,415);
    glVertex2d(528,416);
    glVertex2d(553,415);
    glVertex2d(534,416);
    glVertex2d(553,415);
    glVertex2d(539,415);
    glVertex2d(553,415);
    glVertex2d(543,415);
    glVertex2d(553,415);
    glVertex2d(548,415);
    glVertex2d(553,415);
    glVertex2d(553,415);
    glVertex2d(553,415);

    glEnd();

    //strip Green young 1
    glBegin(GL_TRIANGLE_STRIP);

    glColor3ub(0,166,166);

    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(422 + (5*DETIK2),592 - (5*DETIK2));
    glVertex2d(479 + (5*DETIK2),532 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(480 + (5*DETIK2),529 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(481 + (5*DETIK2),526 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(482 + (5*DETIK2),521 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(484 + (5*DETIK2),518 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(486 + (5*DETIK2),514 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(488 + (5*DETIK2),510 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(490 + (5*DETIK2),507 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(493 + (5*DETIK2),503 - (5*DETIK2));
    glVertex2d(490 + (5*DETIK2),502 - (5*DETIK2));
    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(426 + (5*DETIK2),602 - (5*DETIK2));
    glVertex2d(422 + (5*DETIK2),592 - (5*DETIK2));
    glVertex2d(490 + (5*DETIK2),502 - (5*DETIK2));

    glEnd();

    glBegin(GL_TRIANGLE_STRIP);

    glVertex2d(493 + (5*DETIK2),503 - (5*DETIK2));
    glVertex2d(490 + (5*DETIK2),502 - (5*DETIK2));
    glVertex2d(495 + (5*DETIK2),500 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(498 + (5*DETIK2),497 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(501 + (5*DETIK2),495 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(504 + (5*DETIK2),492 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(507 + (5*DETIK2),490 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(510 + (5*DETIK2),487 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(513 + (5*DETIK2),486 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(516 + (5*DETIK2),484 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(567 + (5*DETIK2),416 - (5*DETIK2));
    glVertex2d(518 + (5*DETIK2),465 - (5*DETIK2));
    glVertex2d(556 + (5*DETIK2),415 - (5*DETIK2));

    glEnd();

    //stripe green old 1 bottom
    glBegin(GL_TRIANGLE_STRIP);

    glColor3ub(4,66,87);

    glVertex2d(442 - (5*DETIK2),601 + (5*DETIK2));
    glVertex2d(437 - (5*DETIK2),592 + (5*DETIK2));
    glVertex2d(489 - (5*DETIK2),539 + (5*DETIK2));
    glVertex2d(489 - (5*DETIK2),524 + (5*DETIK2));


    glEnd();
    //top
    glBegin(GL_POLYGON);

    glVertex2d(530 - (5*DETIK2),469 + (5*DETIK2));
    glVertex2d(580 - (5*DETIK2),404 + (5*DETIK2));
    glVertex2d(590 - (5*DETIK2),406 + (5*DETIK2));
    glVertex2d(546 - (5*DETIK2),465 + (5*DETIK2));

    glEnd();

    //stripes green old 2 bottom
    glBegin(GL_POLYGON);

    glVertex2d(439 + (5*DETIK2),625 - (5*DETIK2));
    glVertex2d(433 + (5*DETIK2),616 - (5*DETIK2));
    glVertex2d(480 + (5*DETIK2),555 - (5*DETIK2));
    glVertex2d(483 + (5*DETIK2),567 - (5*DETIK2));

    glEnd();

    //top
    glBegin(GL_POLYGON);

    glVertex2d(540 + (5*DETIK2),477 - (5*DETIK2));
    glVertex2d(584 + (5*DETIK2),419 - (5*DETIK2));
    glVertex2d(593 + (5*DETIK2),422 - (5*DETIK2));
    glVertex2d(552 + (5*DETIK2),477 - (5*DETIK2));

    glEnd();

    //stripe orange bottom
    glBegin(GL_POLYGON);

    glColor3ub(242,49,6);

    glVertex2d(447 - (5*DETIK2),634 + (5*DETIK2));
    glVertex2d(441 - (5*DETIK2),627 + (5*DETIK2));
    glVertex2d(484 - (5*DETIK2),570 + (5*DETIK2));
    glVertex2d(489 - (5*DETIK2),579 + (5*DETIK2));

    glEnd();

    //top
    glBegin(GL_POLYGON);

    glVertex2d(555 - (5*DETIK2),477 + (5*DETIK2));
    glVertex2d(596 - (5*DETIK2),423 + (5*DETIK2));
    glVertex2d(605 - (5*DETIK2),427 + (5*DETIK2));
    glVertex2d(565 - (5*DETIK2),479 + (5*DETIK2));

    glEnd();

    //red BIG
    glBegin(GL_TRIANGLE_STRIP);

    glColor3ub(196,1,41);

    glVertex2d(449,636);
    glVertex2d(490,582);
    glVertex2d(500,630);
    glVertex2d(449,636);
    glVertex2d(500,630);
    glVertex2d(450,637);
    glVertex2d(500,630);
    glVertex2d(452,639);
    glVertex2d(500,630);
    glVertex2d(453,640);
    glVertex2d(500,630);
    glVertex2d(455,642);
    glVertex2d(500,630);
    glVertex2d(457,643);
    glVertex2d(500,630);
    glVertex2d(459,645);
    glVertex2d(500,630);
    glVertex2d(461,647);
    glVertex2d(500,630);
    glVertex2d(463,649);
    glVertex2d(500,630);
    glVertex2d(465,650);
    glVertex2d(500,630);
    glVertex2d(467,652);
    glVertex2d(500,630);
    glVertex2d(470,653);
    glVertex2d(500,630);
    glVertex2d(472,655);
    glVertex2d(500,630);
    glVertex2d(474,656);
    glVertex2d(500,630);
    glVertex2d(477,658);
    glVertex2d(500,630);
    glVertex2d(479,659);
    glVertex2d(500,630);
    glVertex2d(482,660);
    glVertex2d(500,630);
    glVertex2d(484,662);
    glVertex2d(500,630);
    glVertex2d(487,663);
    glVertex2d(500,630);
    glVertex2d(490,664);
    glVertex2d(500,630);
    glVertex2d(493,665);
    glVertex2d(500,630);
    glVertex2d(496,666);
    glVertex2d(500,630);
    glVertex2d(499,668);
    glVertex2d(500,630);
    glVertex2d(502,669);
    glVertex2d(500,630);
    glVertex2d(505,670);
    glVertex2d(500,630);
    glVertex2d(508,670);
    glVertex2d(500,630);
    glVertex2d(511,671);
    glVertex2d(500,630);
    glVertex2d(514,672);
    glVertex2d(500,630);
    glVertex2d(517,673);
    glVertex2d(500,630);
    glVertex2d(520,673);

    glVertex2d(520,673);
    glVertex2d(500,630);
    glVertex2d(568,611);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(500,630);
    glVertex2d(492,585);
    glVertex2d(490,582);


    glEnd();

    glBegin(GL_TRIANGLE_STRIP);

    glVertex2d(490,582);
    glVertex2d(500,630);
    glVertex2d(500,630);
    glVertex2d(492,585);
    glVertex2d(500,630);
    glVertex2d(495,588);
    glVertex2d(500,630);
    glVertex2d(497,592);
    glVertex2d(500,630);
    glVertex2d(500,595);
    glVertex2d(500,630);
    glVertex2d(505,599);
    glVertex2d(500,630);
    glVertex2d(509,602);
    glVertex2d(500,630);
    glVertex2d(514,605);
    glVertex2d(500,630);
    glVertex2d(517,607);
    glVertex2d(500,630);
    glVertex2d(521,608);
    glVertex2d(500,630);
    glVertex2d(525,610);
    glVertex2d(500,630);
    glVertex2d(530,612);
    glVertex2d(500,630);
    glVertex2d(533,612);
    glVertex2d(500,630);
    glVertex2d(537,613);
    glVertex2d(500,630);
    glVertex2d(541,614);
    glVertex2d(500,630);
    glVertex2d(545,614);
    glVertex2d(500,630);
    glVertex2d(548,614);
    glVertex2d(500,630);
    glVertex2d(551,614);
    glVertex2d(500,630);
    glVertex2d(554,614);
    glVertex2d(500,630);
    glVertex2d(557,613);
    glVertex2d(500,630);
    glVertex2d(560,613);
    glVertex2d(500,630);
    glVertex2d(563,612);
    glVertex2d(500,630);
    glVertex2d(565,612);
    glVertex2d(500,630);
    glVertex2d(568,611);

    glEnd();

    //top
    glBegin(GL_TRIANGLE_STRIP);

    glVertex2d(568,480);
    glVertex2d(621,477);
    glVertex2d(607,428);
    glVertex2d(621,477);
    glVertex2d(571,481);
    glVertex2d(621,477);
    glVertex2d(574,482);
    glVertex2d(621,477);
    glVertex2d(576,483);
    glVertex2d(621,477);
    glVertex2d(578,484);
    glVertex2d(621,477);
    glVertex2d(581,485);
    glVertex2d(621,477);
    glVertex2d(583,486);
    glVertex2d(621,477);
    glVertex2d(586,488);
    glVertex2d(621,477);
    glVertex2d(588,490);
    glVertex2d(621,477);
    glVertex2d(591,492);
    glVertex2d(621,477);
    glVertex2d(594,494);
    glVertex2d(621,477);
    glVertex2d(597,497);
    glVertex2d(621,477);
    glVertex2d(600,499);
    glVertex2d(621,477);
    glVertex2d(602,502);
    glVertex2d(621,477);
    glVertex2d(604,505);
    glVertex2d(621,477);
    glVertex2d(606,508);
    glVertex2d(621,477);
    glVertex2d(609,511);
    glVertex2d(621,477);
    glVertex2d(610,514);
    glVertex2d(621,477);
    glVertex2d(611,517);
    glVertex2d(621,477);
    glVertex2d(613,520);
    glVertex2d(621,477);
    glVertex2d(614,522);
    glVertex2d(621,477);
    glVertex2d(614,525);
    glVertex2d(621,477);
    glVertex2d(615,527);
    glVertex2d(621,477);
    glVertex2d(616,530);
    glVertex2d(621,477);
    glVertex2d(616,533);
    glVertex2d(621,477);
    glVertex2d(616,535);
    glVertex2d(621,477);
    glVertex2d(617,537);
    glVertex2d(621,477);
    glVertex2d(617,539);
    glVertex2d(621,477);
    glVertex2d(617,541);
    glVertex2d(621,477);
    glVertex2d(617,544);
    glVertex2d(621,477);
    glVertex2d(617,547);


    glVertex2d(617,547);
    glVertex2d(621,477);
    glVertex2d(667,481);

    glVertex2d(667,481);
    glVertex2d(621,477);
    glVertex2d(666,479);
    glVertex2d(621,477);
    glVertex2d(665,477);
    glVertex2d(621,477);
    glVertex2d(663,474);
    glVertex2d(621,477);
    glVertex2d(661,472);
    glVertex2d(621,477);
    glVertex2d(659,469);
    glVertex2d(657,466);
    glVertex2d(621,477);
    glVertex2d(655,464);
    glVertex2d(621,477);
    glVertex2d(654,462);
    glVertex2d(621,477);
    glVertex2d(652,460);
    glVertex2d(621,477);
    glVertex2d(650,458);
    glVertex2d(621,477);
    glVertex2d(648,456);
    glVertex2d(621,477);
    glVertex2d(646,454);
    glVertex2d(621,477);
    glVertex2d(644,452);
    glVertex2d(621,477);
    glVertex2d(642,450);
    glVertex2d(621,477);
    glVertex2d(639,448);
    glVertex2d(621,477);
    glVertex2d(637,446);
    glVertex2d(621,477);
    glVertex2d(634,444);
    glVertex2d(621,477);
    glVertex2d(631,441);
    glVertex2d(621,477);
    glVertex2d(628,440);
    glVertex2d(621,477);
    glVertex2d(626,438);
    glVertex2d(621,477);
    glVertex2d(623,436);
    glVertex2d(621,477);
    glVertex2d(620,435);
    glVertex2d(621,477);
    glVertex2d(617,433);
    glVertex2d(621,477);
    glVertex2d(615,431);
    glVertex2d(621,477);
    glVertex2d(612,430);
    glVertex2d(621,477);
    glVertex2d(610,429);
    glVertex2d(621,477);
    glVertex2d(607,428);
    glVertex2d(621,477);

    glEnd();

    //Red OLD Big
    glBegin(GL_TRIANGLE_STRIP);

    glColor3ub(120,0,27);

    glVertex2d(535,675);
    glVertex2d(622,602);
    glVertex2d(673,494);
    glVertex2d(535,675);
    glVertex2d(622,602);
    glVertex2d(539,675);
    glVertex2d(622,602);
    glVertex2d(542,675);
    glVertex2d(622,602);
    glVertex2d(544,676);
    glVertex2d(622,602);
    glVertex2d(546,676);
    glVertex2d(622,602);
    glVertex2d(548,676);
    glVertex2d(622,602);
    glVertex2d(550,676);
    glVertex2d(622,602);
    glVertex2d(552,676);
    glVertex2d(622,602);
    glVertex2d(554,675);
    glVertex2d(622,602);
    glVertex2d(555,675);
    glVertex2d(622,602);
    glVertex2d(557,675);
    glVertex2d(622,602);
    glVertex2d(559,675);
    glVertex2d(622,602);
    glVertex2d(562,675);
    glVertex2d(622,602);
    glVertex2d(564,675);
    glVertex2d(622,602);
    glVertex2d(565,675);
    glVertex2d(622,602);
    glVertex2d(567,674);
    glVertex2d(622,602);
    glVertex2d(569,674);
    glVertex2d(622,602);
    glVertex2d(571,674);
    glVertex2d(622,602);
    glVertex2d(573,674);
    glVertex2d(622,602);
    glVertex2d(575,673);
    glVertex2d(622,602);
    glVertex2d(577,673);
    glVertex2d(622,602);
    glVertex2d(579,673);
    glVertex2d(622,602);
    glVertex2d(580,672);
    glVertex2d(622,602);
    glVertex2d(582,672);
    glVertex2d(622,602);
    glVertex2d(583,671);
    glVertex2d(622,602);
    glVertex2d(585,671);
    glVertex2d(622,602);
    glVertex2d(587,671);
    glVertex2d(622,602);
    glVertex2d(589,670);
    glVertex2d(622,602);
    glVertex2d(591,669);
    glVertex2d(622,602);
    glVertex2d(593,669);
    glVertex2d(622,602);
    glVertex2d(595,668);
    glVertex2d(622,602);
    glVertex2d(597,668);
    glVertex2d(622,602);
    glVertex2d(599,667);
    glVertex2d(622,602);
    glVertex2d(601,666);
    glVertex2d(622,602);
    glVertex2d(602,665);
    glVertex2d(622,602);
    glVertex2d(604,665);
    glVertex2d(622,602);
    glVertex2d(605,664);
    glVertex2d(622,602);
    glVertex2d(606,664);


    glVertex2d(606,664);
    glVertex2d(622,602);
    glVertex2d(681,566);


    glVertex2d(622,602);
    glVertex2d(681,566);
    glVertex2d(622,602);
    glVertex2d(681,564);
    glVertex2d(622,602);
    glVertex2d(681,562);
    glVertex2d(622,602);
    glVertex2d(682,560);
    glVertex2d(622,602);
    glVertex2d(682,559);
    glVertex2d(622,602);
    glVertex2d(682,555);
    glVertex2d(622,602);
    glVertex2d(682,553);
    glVertex2d(622,602);
    glVertex2d(683,551);
    glVertex2d(622,602);
    glVertex2d(683,538);
    glVertex2d(622,602);
    glVertex2d(683,545);
    glVertex2d(622,602);
    glVertex2d(683,542);
    glVertex2d(622,602);
    glVertex2d(683,540);
    glVertex2d(622,602);
    glVertex2d(683,537);
    glVertex2d(622,602);
    glVertex2d(683,533);
    glVertex2d(622,602);
    glVertex2d(682,530);
    glVertex2d(622,602);
    glVertex2d(682,527);
    glVertex2d(622,602);
    glVertex2d(682,524);
    glVertex2d(622,602);
    glVertex2d(681,522);
    glVertex2d(622,602);
    glVertex2d(681,519);
    glVertex2d(622,602);
    glVertex2d(680,516);
    glVertex2d(622,602);
    glVertex2d(680,514);
    glVertex2d(622,602);
    glVertex2d(680,514);
    glVertex2d(622,602);
    glVertex2d(679,511);
    glVertex2d(622,602);
    glVertex2d(679,509);
    glVertex2d(622,602);
    glVertex2d(678,507);
    glVertex2d(622,602);
    glVertex2d(677,504);
    glVertex2d(622,602);
    glVertex2d(677,502);
    glVertex2d(622,602);
    glVertex2d(676,500);
    glVertex2d(622,602);
    glVertex2d(675,498);
    glVertex2d(622,602);
    glVertex2d(675,497);
    glVertex2d(622,602);
    glVertex2d(674,496);
    glVertex2d(622,602);
    glVertex2d(673,494);

    glEnd();

    //BOTTOM YELLOW

    glBegin(GL_TRIANGLE_STRIP);

    glColor3ub(255,150,0);


    glVertex2d(611 + (5*DETIK2),662 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(680 + (5*DETIK2),571 - (5*DETIK2));

    glVertex2d(611 + (5*DETIK2),662 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(612 + (5*DETIK2),661 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(614 + (5*DETIK2),660 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(615 + (5*DETIK2),660 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(616 + (5*DETIK2),659 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(618 + (5*DETIK2),658 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(619 + (5*DETIK2),657 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(621 + (5*DETIK2),656 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(624 + (5*DETIK2),655 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(626 + (5*DETIK2),653 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(627 + (5*DETIK2),652 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(629 + (5*DETIK2),651 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(630 + (5*DETIK2),650 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(631 + (5*DETIK2),649 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(633 + (5*DETIK2),648 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(634 + (5*DETIK2),647 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(635 + (5*DETIK2),646 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(637 + (5*DETIK2),645 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(638 + (5*DETIK2),644 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(639 + (5*DETIK2),643 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(641 + (5*DETIK2),642 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(642 + (5*DETIK2),640 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(643 + (5*DETIK2),639 - (5*DETIK2));

    glVertex2d(643 + (5*DETIK2),639 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(666 + (5*DETIK2),609 - (5*DETIK2));


    glVertex2d(666 + (5*DETIK2),609 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(667 + (5*DETIK2),608 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(668 + (5*DETIK2),606 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(669 + (5*DETIK2),605 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(669 + (5*DETIK2),603 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(670 + (5*DETIK2),601 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(671 + (5*DETIK2),599 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(672 + (5*DETIK2),596 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(673 + (5*DETIK2),594 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(674 + (5*DETIK2),592 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(675 + (5*DETIK2),590 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(675 + (5*DETIK2),588 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(676 + (5*DETIK2),586 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(677 + (5*DETIK2),585 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(677 + (5*DETIK2),583 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(678 + (5*DETIK2),581 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(678 + (5*DETIK2),579 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(678 + (5*DETIK2),578 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(679 + (5*DETIK2),576 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(679 + (5*DETIK2),575 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(679 + (5*DETIK2),573 - (5*DETIK2));
    glVertex2d(651 + (5*DETIK2),620 - (5*DETIK2));
    glVertex2d(680 + (5*DETIK2),571 - (5*DETIK2));

    glEnd();

}

/////////////////////////////////////////////////
void display()  {
    glClear(GL_COLOR_BUFFER_BIT);

    ////////////////////////////////////////////////////////////
        //grid();

        background();


        hurufV();
        hurufI();
        hurufT();
        hurufO();


        ////////////////////////////////////////////////////////////

    glFlush();
}

int main(void)
{
    GLFWwindow* window;
    if (!glfwInit()) exit(EXIT_FAILURE);

    window = glfwCreateWindow(800, 800, "Grid", NULL, NULL); // ini buat ukuran window nya ,, terus namanya

    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    glfwSetKeyCallback(window, key_callback);

    //anti alias
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_LINE_SMOOTH);
    glEnable(GL_POLYGON_SMOOTH);
    glEnable(GL_POINT_SMOOTH);
    //anti alias

    while (!glfwWindowShouldClose(window))//kecepatan FPS dari while ini tergantung komputer masing masing
    {

        //ambil waktu
        DETIK = glfwGetTime();
        DETIK2 = sin(DETIK);
        //ambil waktu

        setup_viewport(window);

        display();

        glfwSwapBuffers(window);
        glfwPollEvents();



        //y
    }
    glfwDestroyWindow(window);
    glfwTerminate();

    exit(EXIT_SUCCESS);
}
