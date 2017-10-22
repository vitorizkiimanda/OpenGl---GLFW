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

    glVertex2d(104,114);
    glVertex2d(142,114);
    glVertex2d(117,146);

    glEnd();

    //big green
    glBegin(GL_POLYGON);

    glColor3ub(29,205,195);

    glVertex2d(123,160);
    glVertex2d(158,114);
    glVertex2d(173,114);
    glVertex2d(193,165);
    glVertex2d(149,223);

    glEnd();

    //strips green 1
    glBegin(GL_POLYGON);

    glColor3ub(0,166,166);

    glVertex2d(151,225);
    glVertex2d(195,168);
    glVertex2d(199,178);
    glVertex2d(155,235);

    glEnd();

    //strips green 2
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(166,225);
    glVertex2d(210,168);
    glVertex2d(214,178);
    glVertex2d(170,235);

    glEnd();

    //strips green 3
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(161,251);
    glVertex2d(205,194);
    glVertex2d(209,204);
    glVertex2d(166,261);

    glEnd();

    //strips orange 4
    glBegin(GL_POLYGON);

    glColor3ub(242,49,6);

    glVertex2d(167,264);
    glVertex2d(210,207);
    glVertex2d(214,217);
    glVertex2d(171,274);

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

    glVertex2d(226,360);
    glVertex2d(296,269);
    glVertex2d(257,360);

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

    glVertex2d(516,157);
    glVertex2d(551,111);
    glVertex2d(563,111);
    glVertex2d(516,173);

    glEnd();

    //green stripes 2
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(526,164);
    glVertex2d(576,98);
    glVertex2d(588,98);
    glVertex2d(526,179);

    glEnd();

    //green stripes 3
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(516,197);
    glVertex2d(580,113);
    glVertex2d(580,129);
    glVertex2d(516,212);

    glEnd();

    //orange stripes
    glBegin(GL_POLYGON);

    glColor3ub(242,49,6);

    glVertex2d(516,217);
    glVertex2d(580,133);
    glVertex2d(580,149);
    glVertex2d(516,232);

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

    glVertex2d(542,357);
    glVertex2d(580,306);
    glVertex2d(580,357);

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

    glVertex2d(194,481);
    glVertex2d(235,427);
    glVertex2d(247,427);
    glVertex2d(201,481);

    glEnd();


    glBegin(GL_POLYGON);

    glVertex2d(201,481);
    glVertex2d(247,427);
    glVertex2d(201,488);

    glEnd();

    //stripes green 2
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(211,480);
    glVertex2d(260,415);
    glVertex2d(272,415);
    glVertex2d(211,495);

    glEnd();

    //stripes green 3
    glBegin(GL_POLYGON);

    glColor3ub(4,66,87);

    glVertex2d(201,513);
    glVertex2d(266,427);
    glVertex2d(278,427);
    glVertex2d(201,528);

    glEnd();

    //stripes orange
    glBegin(GL_POLYGON);

    glColor3ub(242,49,6);

    glVertex2d(201,532);
    glVertex2d(281,427);
    glVertex2d(293,427);
    glVertex2d(201,548);

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

    glVertex2d(226,672);
    glVertex2d(264,622);
    glVertex2d(264,672);

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

    glVertex2d(426,602);
    glVertex2d(422,592);
    glVertex2d(479,532);
    glVertex2d(426,602);
    glVertex2d(480,529);
    glVertex2d(426,602);
    glVertex2d(481,526);
    glVertex2d(426,602);
    glVertex2d(482,521);
    glVertex2d(426,602);
    glVertex2d(484,518);
    glVertex2d(426,602);
    glVertex2d(486,514);
    glVertex2d(426,602);
    glVertex2d(488,510);
    glVertex2d(426,602);
    glVertex2d(490,507);
    glVertex2d(426,602);
    glVertex2d(493,503);
    glVertex2d(490,502);
    glVertex2d(426,602);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(426,602);
    glVertex2d(422,592);
    glVertex2d(490,502);

    glEnd();

    glBegin(GL_TRIANGLE_STRIP);

    glVertex2d(493,503);
    glVertex2d(490,502);
    glVertex2d(495,500);
    glVertex2d(518,465);
    glVertex2d(498,497);
    glVertex2d(518,465);
    glVertex2d(501,495);
    glVertex2d(518,465);
    glVertex2d(504,492);
    glVertex2d(518,465);
    glVertex2d(507,490);
    glVertex2d(518,465);
    glVertex2d(510,487);
    glVertex2d(518,465);
    glVertex2d(513,486);
    glVertex2d(518,465);
    glVertex2d(516,484);
    glVertex2d(518,465);
    glVertex2d(567,416);
    glVertex2d(518,465);
    glVertex2d(556,415);

    glEnd();

    //stripe green old 1 bottom
    glBegin(GL_TRIANGLE_STRIP);

    glColor3ub(4,66,87);

    glVertex2d(442,601);
    glVertex2d(437,592);
    glVertex2d(489,539);
    glVertex2d(489,524);


    glEnd();
    //top
    glBegin(GL_POLYGON);

    glVertex2d(530,469);
    glVertex2d(580,404);
    glVertex2d(590,406);
    glVertex2d(546,465);

    glEnd();

    //stripes green old 2 bottom
    glBegin(GL_POLYGON);

    glVertex2d(439,625);
    glVertex2d(433,616);
    glVertex2d(480,555);
    glVertex2d(483,567);

    glEnd();

    //top
    glBegin(GL_POLYGON);

    glVertex2d(540,477);
    glVertex2d(584,419);
    glVertex2d(593,422);
    glVertex2d(552,477);

    glEnd();

    //stripe orange bottom
    glBegin(GL_POLYGON);

    glColor3ub(242,49,6);

    glVertex2d(447,634);
    glVertex2d(441,627);
    glVertex2d(484,570);
    glVertex2d(489,579);

    glEnd();

    //top
    glBegin(GL_POLYGON);

    glVertex2d(555,477);
    glVertex2d(596,423);
    glVertex2d(605,427);
    glVertex2d(565,479);

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


    glVertex2d(611,662);
    glVertex2d(651,620);
    glVertex2d(680,571);

    glVertex2d(611,662);
    glVertex2d(651,620);
    glVertex2d(612,661);
    glVertex2d(651,620);
    glVertex2d(614,660);
    glVertex2d(651,620);
    glVertex2d(615,660);
    glVertex2d(651,620);
    glVertex2d(616,659);
    glVertex2d(651,620);
    glVertex2d(618,658);
    glVertex2d(651,620);
    glVertex2d(619,657);
    glVertex2d(651,620);
    glVertex2d(621,656);
    glVertex2d(651,620);
    glVertex2d(624,655);
    glVertex2d(651,620);
    glVertex2d(626,653);
    glVertex2d(651,620);
    glVertex2d(627,652);
    glVertex2d(651,620);
    glVertex2d(629,651);
    glVertex2d(651,620);
    glVertex2d(630,650);
    glVertex2d(651,620);
    glVertex2d(631,649);
    glVertex2d(651,620);
    glVertex2d(633,648);
    glVertex2d(651,620);
    glVertex2d(634,647);
    glVertex2d(651,620);
    glVertex2d(635,646);
    glVertex2d(651,620);
    glVertex2d(637,645);
    glVertex2d(651,620);
    glVertex2d(638,644);
    glVertex2d(651,620);
    glVertex2d(639,643);
    glVertex2d(651,620);
    glVertex2d(641,642);
    glVertex2d(651,620);
    glVertex2d(642,640);
    glVertex2d(651,620);
    glVertex2d(643,639);

    glVertex2d(643,639);
    glVertex2d(651,620);
    glVertex2d(666,609);


    glVertex2d(666,609);
    glVertex2d(651,620);
    glVertex2d(667,608);
    glVertex2d(651,620);
    glVertex2d(668,606);
    glVertex2d(651,620);
    glVertex2d(669,605);
    glVertex2d(651,620);
    glVertex2d(669,603);
    glVertex2d(651,620);
    glVertex2d(670,601);
    glVertex2d(651,620);
    glVertex2d(671,599);
    glVertex2d(651,620);
    glVertex2d(672,596);
    glVertex2d(651,620);
    glVertex2d(673,594);
    glVertex2d(651,620);
    glVertex2d(674,592);
    glVertex2d(651,620);
    glVertex2d(675,590);
    glVertex2d(651,620);
    glVertex2d(675,588);
    glVertex2d(651,620);
    glVertex2d(676,586);
    glVertex2d(651,620);
    glVertex2d(677,585);
    glVertex2d(651,620);
    glVertex2d(677,583);
    glVertex2d(651,620);
    glVertex2d(678,581);
    glVertex2d(651,620);
    glVertex2d(678,579);
    glVertex2d(651,620);
    glVertex2d(678,578);
    glVertex2d(651,620);
    glVertex2d(679,576);
    glVertex2d(651,620);
    glVertex2d(679,575);
    glVertex2d(651,620);
    glVertex2d(679,573);
    glVertex2d(651,620);
    glVertex2d(680,571);

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
