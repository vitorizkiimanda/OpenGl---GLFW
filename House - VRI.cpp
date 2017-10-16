#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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
void Background(){

    //main BG
    glBegin(GL_POLYGON);

    glColor3ub(255,255,255);

    glVertex2d(0,0);
    glVertex2d(800,0);
    glVertex2d(800,800);
    glVertex2d(0,800);

    glEnd();

}

void Land()
{
    //top green
    glBegin(GL_POLYGON);

    glColor3ub(141,200,58);

    glVertex2d(9,484);
    glVertex2d(384,264);
    glVertex2d(791,503);
    glVertex2d(415,723);

    glEnd();

    //left green
    glBegin(GL_POLYGON);

    glColor3ub(179,224,108);

    glVertex2d(9,484);
    glVertex2d(415,723);
    glVertex2d(415,759);
    glVertex2d(9,521);

    glEnd();

    //right green
    glBegin(GL_POLYGON);

    glColor3ub(104,153,17);

    glVertex2d(415,723);
    glVertex2d(791,503);
    glVertex2d(791,539);
    glVertex2d(415,759);

    glEnd();

    //left brown
    glBegin(GL_POLYGON);

    glColor3ub(219,163,117);

    glVertex2d(9,521);
    glVertex2d(415,759);
    glVertex2d(415,796);
    glVertex2d(9,558);

    glEnd();

    //right brown
    glBegin(GL_POLYGON);

    glColor3ub(161,110,64);

    glVertex2d(415,759);
    glVertex2d(791,539);
    glVertex2d(791,576);
    glVertex2d(415,796);

    glEnd();
}

void Tree()
{
    ////left
    //left leaf
    glBegin(GL_POLYGON);

    glColor3ub(149,179,94);

    glVertex2d(6,417);
    glVertex2d(51,321);
    glVertex2d(51,444);

    glEnd();

    //left leaf
    glBegin(GL_POLYGON);

    glColor3ub(124,151,80);

    glVertex2d(51,321);
    glVertex2d(97,417);
    glVertex2d(51,444);

    glEnd();

    //left stem
    glBegin(GL_POLYGON);

    glColor3ub(123,101,64);

    glVertex2d(33,487);
    glVertex2d(33,433);
    glVertex2d(51,444);
    glVertex2d(51,498);

    glEnd();

    //right stem
    glBegin(GL_POLYGON);

    glColor3ub(89,68,35);

    glVertex2d(51,498);
    glVertex2d(51,444);
    glVertex2d(70,432);
    glVertex2d(70,486);

    glEnd();

    ////Middle
    //left leaf
    glBegin(GL_POLYGON);

    glColor3ub(149,179,94);

    glVertex2d(371,627);
    glVertex2d(417,531);
    glVertex2d(417,654);

    glEnd();

    //left leaf
    glBegin(GL_POLYGON);

    glColor3ub(124,151,80);

    glVertex2d(417,654);
    glVertex2d(417,531);
    glVertex2d(462,627);

    glEnd();

    //left stem
    glBegin(GL_POLYGON);

    glColor3ub(123,101,64);

    glVertex2d(398,697);
    glVertex2d(398,643);
    glVertex2d(417,654);
    glVertex2d(417,708);

    glEnd();

    //right stem
    glBegin(GL_POLYGON);

    glColor3ub(89,68,35);

    glVertex2d(417,708);
    glVertex2d(417,654);
    glVertex2d(436,643);
    glVertex2d(436,697);

    glEnd();

    ////right
    //left leaf
    glBegin(GL_POLYGON);

    glColor3ub(149,179,94);

    glVertex2d(700,437);
    glVertex2d(746,341);
    glVertex2d(746,464);

    glEnd();

    //left leaf
    glBegin(GL_POLYGON);

    glColor3ub(124,151,80);

    glVertex2d(746,464);
    glVertex2d(746,341);
    glVertex2d(792,437);

    glEnd();

    //left stem
    glBegin(GL_POLYGON);

    glColor3ub(123,101,64);

    glVertex2d(727,507);
    glVertex2d(727,453);
    glVertex2d(746,464);
    glVertex2d(746,518);

    glEnd();

    //right stem
    glBegin(GL_POLYGON);

    glColor3ub(89,68,35);

    glVertex2d(746,518);
    glVertex2d(746,464);
    glVertex2d(765,453);
    glVertex2d(765,506);

    glEnd();

}

void Fondasi()
{
    //top
    glBegin(GL_POLYGON);

    glColor3ub(224,224,224);

    glVertex2d(101,470);
    glVertex2d(172,428);
    glVertex2d(461,538);
    glVertex2d(487,553);
    glVertex2d(461,568);
    glVertex2d(365,624);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(487,553);
    glVertex2d(641,470);
    glVertex2d(706,508);
    glVertex2d(532,609);
    glVertex2d(461,568);

    glEnd();

    //side1

    glBegin(GL_POLYGON);

    glColor3ub(184,184,184);

    glVertex2d(101,477);
    glVertex2d(101,470);
    glVertex2d(365,624);
    glVertex2d(365,631);

    glEnd();

    //side2
    glBegin(GL_POLYGON);

    glColor3ub(145,145,145);

    glVertex2d(365,631);
    glVertex2d(365,624);
    glVertex2d(461,568);
    glVertex2d(461,575);

    glEnd();

    //side3
    glBegin(GL_POLYGON);

    glColor3ub(184,184,184);

    glVertex2d(461,575);
    glVertex2d(461,568);
    glVertex2d(532,609);
    glVertex2d(532,616);

    glEnd();

    //side4
    glBegin(GL_POLYGON);

    glColor3ub(145,145,145);

    glVertex2d(532,616);
    glVertex2d(532,609);
    glVertex2d(706,508);
    glVertex2d(706,514);

    glEnd();

}

void Fondasi2()
{
    ////Left
    //brown left
    glBegin(GL_POLYGON);

    glColor3ub(209,199,191);

    glVertex2d(159,466);
    glVertex2d(159,451);
    glVertex2d(185,466);
    glVertex2d(185,481);

    glEnd();

    //brown right
    glBegin(GL_POLYGON);

    glColor3ub(194,181,168);

    glVertex2d(185,481);
    glVertex2d(185,466);
    glVertex2d(191,462);
    glVertex2d(191,477);

    glEnd();

    //brown top 1
    glBegin(GL_POLYGON);

    glColor3ub(240,232,217);

    glVertex2d(159,451);
    glVertex2d(172,451);
    glVertex2d(191,462);
    glVertex2d(185,466);

    glEnd();

    //brown top 2
    glBegin(GL_POLYGON);

    glColor3ub(245,237,232);

    glVertex2d(159,451);
    glVertex2d(172,444);
    glVertex2d(172,451);

    glEnd();

    //////Right
    ////section 1
    //bottom
    glBegin(GL_POLYGON);

    glColor3ub(209,199,191);

    glVertex2d(243,515);
    glVertex2d(243,500);
    glVertex2d(371,575);
    glVertex2d(371,591);

    glEnd();

    //top
    glBegin(GL_POLYGON);

    glColor3ub(240,232,217);

    glVertex2d(243,500);
    glVertex2d(249,496);
    glVertex2d(371,568);
    glVertex2d(371,575);

    glEnd();

    ////section 2
    //bottom
    glBegin(GL_POLYGON);

    glColor3ub(163,153,145);

    glVertex2d(371,591);
    glVertex2d(371,575);
    glVertex2d(461,523);
    glVertex2d(461,538);

    glEnd();

    //top
    glBegin(GL_POLYGON);

    glColor3ub(189,176,163);

    glVertex2d(371,575);
    glVertex2d(371,568);
    glVertex2d(461,515);
    glVertex2d(461,523);

    glEnd();

    ////section 3
    //bottom
    glBegin(GL_POLYGON);

    glColor3ub(209,199,191);

    glVertex2d(461,538);
    glVertex2d(461,523);
    glVertex2d(532,564);
    glVertex2d(532,579);

    glEnd();

    //top
    glBegin(GL_POLYGON);

    glColor3ub(240,232,217);

    glVertex2d(461,523);
    glVertex2d(461,515);
    glVertex2d(532,557);
    glVertex2d(532,564);

    glEnd();

    ////section 4
    //bottom
    glBegin(GL_POLYGON);

    glColor3ub(163,153,145);

    glVertex2d(532,579);
    glVertex2d(532,564);
    glVertex2d(654,493);
    glVertex2d(654,508);

    glEnd();

    //top
    glBegin(GL_POLYGON);

    glColor3ub(189,176,163);

    glVertex2d(532,564);
    glVertex2d(532,557);
    glVertex2d(641,493);
    glVertex2d(654,493);

    glEnd();

    //top2
    glBegin(GL_POLYGON);

    glColor3ub(140,133,122);

    glVertex2d(641,493);
    glVertex2d(641,485);
    glVertex2d(654,493);

    glEnd();

}

void Stairs()
{
    ////bluewall
    glBegin(GL_POLYGON);

    glColor3ub(84,107,130);

    glVertex2d(410,70);
    glVertex2d(455,97);
    glVertex2d(436,108);
    glVertex2d(436,101);
    glVertex2d(423,93);
    glVertex2d(423,85);
    glVertex2d(410,78);

    glEnd();


    ////bottom
    //muda1
    glBegin(GL_POLYGON);

    glColor3ub(184,176,178);

    glVertex2d(191,477);
    glVertex2d(204,470);
    glVertex2d(249,496);
    glVertex2d(243,500);
    glVertex2d(243,508);

    glEnd();

    //muda2
    glBegin(GL_POLYGON);

    glColor3ub(184,176,178);

    glVertex2d(204,462);
    glVertex2d(217,455);
    glVertex2d(249,474);
    glVertex2d(249,489);

    glEnd();

    //muda3
    glBegin(GL_POLYGON);

    glColor3ub(184,176,178);

    glVertex2d(217,447);
    glVertex2d(230,440);
    glVertex2d(249,451);
    glVertex2d(249,466);

    glEnd();

    //muda4
    glBegin(GL_POLYGON);

    glColor3ub(184,176,178);

    glVertex2d(230,432);
    glVertex2d(243,425);
    glVertex2d(249,428);
    glVertex2d(249,444);

    glEnd();

    //muda5
    glBegin(GL_POLYGON);

    glColor3ub(184,176,178);

    glVertex2d(243,417);
    glVertex2d(249,413);
    glVertex2d(249,421);

    glEnd();

    //tua1
    glBegin(GL_POLYGON);

    glColor3ub(125,117,112);

    glVertex2d(204,470);
    glVertex2d(204,462);
    glVertex2d(249,489);
    glVertex2d(249,496);

    glEnd();

    //tua2
    glBegin(GL_POLYGON);

    glColor3ub(125,117,112);

    glVertex2d(217,455);
    glVertex2d(217,447);
    glVertex2d(249,466);
    glVertex2d(249,474);

    glEnd();

    //tua3
    glBegin(GL_POLYGON);

    glColor3ub(125,117,112);

    glVertex2d(230,440);
    glVertex2d(230,432);
    glVertex2d(249,444);
    glVertex2d(249,451);

    glEnd();

    //tua4
    glBegin(GL_POLYGON);

    glColor3ub(125,117,112);

    glVertex2d(243,425);
    glVertex2d(243,417);
    glVertex2d(249,421);
    glVertex2d(249,428);

    glEnd();

    ////top
    //tua1
    glBegin(GL_POLYGON);

    glColor3ub(184,176,178);

    glVertex2d(410,123);
    glVertex2d(403,119);
    glVertex2d(436,101);
    glVertex2d(436,108);

    glEnd();

    //tua2
    glBegin(GL_POLYGON);

    glColor3ub(184,176,178);

    glVertex2d(391,112);
    glVertex2d(384,108);
    glVertex2d(423,85);
    glVertex2d(423,93);

    glEnd();

    //tua3
    glBegin(GL_POLYGON);

    glColor3ub(184,176,178);

    glVertex2d(371,101);
    glVertex2d(365,97);
    glVertex2d(410,70);
    glVertex2d(410,78);

    glEnd();

    //muda1
    glBegin(GL_POLYGON);

    glColor3ub(209,207,207);

    glVertex2d(403,119);
    glVertex2d(391,112);
    glVertex2d(423,93);
    glVertex2d(436,101);

    glEnd();

    //muda2
    glBegin(GL_POLYGON);

    glColor3ub(209,207,207);

    glVertex2d(384,108);
    glVertex2d(371,101);
    glVertex2d(410,78);
    glVertex2d(423,85);

    glEnd();

}

void SideStairs()
{
    ////mainwall
    glBegin(GL_POLYGON);

    glColor3ub(217,201,178);

    glVertex2d(191,477);
    glVertex2d(191,334);
    glVertex2d(204,342);
    glVertex2d(204,395);
    glVertex2d(249,368);
    glVertex2d(249,413);
    glVertex2d(243,417);
    glVertex2d(243,425);
    glVertex2d(230,432);
    glVertex2d(230,440);
    glVertex2d(217,447);
    glVertex2d(217,455);
    glVertex2d(204,462);
    glVertex2d(204,470);

    glEnd();

    ////youngwall
    glBegin(GL_POLYGON);

    glColor3ub(227,219,207);

    glVertex2d(204,395);
    glVertex2d(204,387);
    glVertex2d(243,364);
    glVertex2d(249,368);

    glEnd();

    ////HOLES to background
    glBegin(GL_POLYGON);

    glColor3ub(141,200,58);

    glVertex2d(204,370);
    glVertex2d(228,356);
    glVertex2d(243,364);
    glVertex2d(204,387);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(255,255,255);

    glVertex2d(204,370);
    glVertex2d(228,356);
    glVertex2d(204,342);


    glEnd();

    ////holes
    //light 1
    glBegin(GL_POLYGON);

    glColor3ub(227,219,207);

    glVertex2d(210,421);
    glVertex2d(210,413);
    glVertex2d(217,417);

    glEnd();

    //light 2
    glBegin(GL_POLYGON);

    glColor3ub(227,219,207);

    glVertex2d(223,413);
    glVertex2d(223,406);
    glVertex2d(230,410);

    glEnd();

    //light 3
    glBegin(GL_POLYGON);

    glColor3ub(227,219,207);

    glVertex2d(236,406);
    glVertex2d(236,398);
    glVertex2d(243,402);

    glEnd();

    //dark 1
    glBegin(GL_POLYGON);

    glColor3ub(153,140,125);

    glVertex2d(210,413);
    glVertex2d(210,398);
    glVertex2d(217,395);
    glVertex2d(217,417);

    glEnd();

    //dark 2
    glBegin(GL_POLYGON);

    glColor3ub(153,140,125);

    glVertex2d(223,406);
    glVertex2d(223,391);
    glVertex2d(230,387);
    glVertex2d(230,410);

    glEnd();

    //dark 3
    glBegin(GL_POLYGON);

    glColor3ub(153,140,125);

    glVertex2d(236,398);
    glVertex2d(236,383);
    glVertex2d(243,379);
    glVertex2d(243,402);

    glEnd();

}

void Walls()
{
    //1
    glBegin(GL_POLYGON);

    glColor3ub(232,214,191);

    glVertex2d(172,466);
    glVertex2d(172,119);
    glVertex2d(371,236);
    glVertex2d(371,575);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glColor3ub(222,204,181);

    glVertex2d(371,583);
    glVertex2d(371,236);
    glVertex2d(571,119);
    glVertex2d(571,466);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glColor3ub(250,242,227);

    glVertex2d(172,119);
    glVertex2d(371,2);
    glVertex2d(571,119);
    glVertex2d(371,236);

    glEnd();

    //3 dark main
    glBegin(GL_POLYGON);

    glColor3ub(242,224,199);

    glVertex2d(371,221);
    glVertex2d(198,119);
    glVertex2d(371,17);
    glVertex2d(545,119);

    glEnd();

    //3 dark top
    glBegin(GL_POLYGON);

    glColor3ub(163,150,130);

    glVertex2d(198,119);
    glVertex2d(371,17);
    glVertex2d(371,32);
    glVertex2d(211,127);

    glEnd();

    //3 dark right
    glBegin(GL_POLYGON);

    glColor3ub(217,201,178);

    glVertex2d(371,32);
    glVertex2d(371,17);
    glVertex2d(545,119);
    glVertex2d(532,127);

    glEnd();

    //////door
    //frame
    glBegin(GL_POLYGON);

    glColor3ub(135,125,107);

    glVertex2d(506,338);
    glVertex2d(506,248);
    glVertex2d(551,221);
    glVertex2d(551,312);

    glEnd();

    //dark blue
    glBegin(GL_POLYGON);

    glColor3ub(135,209,212);

    glVertex2d(513,289);
    glVertex2d(513,251);
    glVertex2d(545,232);
    glVertex2d(545,270);

    glEnd();

    //light blue
    glBegin(GL_POLYGON);

    glColor3ub(181,252,255);

    glVertex2d(513,334);
    glVertex2d(513,289);
    glVertex2d(545,270);
    glVertex2d(545,315);

    glEnd();

    ////blue floor on balcony
    glBegin(GL_POLYGON);

    glColor3ub(84,107,130);

    glVertex2d(461,364);
    glVertex2d(564,304);
    glVertex2d(641,342);
    glVertex2d(532,406);

    glEnd();


    //3 shadow
    glBegin(GL_POLYGON);

    glColor3ub(196,173,140);

    glVertex2d(249,150);
    glVertex2d(211,127);
    glVertex2d(371,32);
    glVertex2d(410,55);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glColor3ub(242,224,199);

    glVertex2d(461,530);
    glVertex2d(461,312);
    glVertex2d(532,353);
    glVertex2d(532,572);

    glEnd();

    //6 dark
    glBegin(GL_POLYGON);

    glColor3ub(199,181,156);

    glVertex2d(564,304);
    glVertex2d(564,251);
    glVertex2d(635,293);
    glVertex2d(635,346);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glColor3ub(224,209,186);

    glVertex2d(532,572);
    glVertex2d(532,353);
    glVertex2d(641,289);
    glVertex2d(641,508);

    glEnd();

    //6 light
    glBegin(GL_POLYGON);

    glColor3ub(250,242,227);

    glVertex2d(461,312);
    glVertex2d(468,308);
    glVertex2d(532,346);
    glVertex2d(525,349);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(525,349);
    glVertex2d(532,346);
    glVertex2d(629,289);
    glVertex2d(634,284);
    glVertex2d(641,289);
    glVertex2d(532,353);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(629,289);
    glVertex2d(564,251);
    glVertex2d(571,248);
    glVertex2d(634,284);

    glEnd();


}

void Balcony()
{
    ////fondasi
    //left dark
    glBegin(GL_POLYGON);

    glColor3ub(209,199,191);

    glVertex2d(455,376);
    glVertex2d(455,368);
    glVertex2d(532,413);
    glVertex2d(532,421);

    glEnd();

    //left bright
    glBegin(GL_POLYGON);

    glColor3ub(240,232,217);

    glVertex2d(455,368);
    glVertex2d(461,364);
    glVertex2d(532,406);
    glVertex2d(532,413);

    glEnd();

    //shadow
    glBegin(GL_POLYGON);

    glColor3ub(196,173,140);

    glVertex2d(532,436);
    glVertex2d(532,421);
    glVertex2d(641,357);
    glVertex2d(641,372);

    glEnd();

    //middle dark
    glBegin(GL_POLYGON);

    glColor3ub(163,153,145);

    glVertex2d(532,421);
    glVertex2d(532,413);
    glVertex2d(654,342);
    glVertex2d(654,349);

    glEnd();

    //middle light
    glBegin(GL_POLYGON);

    glColor3ub(189,176,163);

    glVertex2d(532,413);
    glVertex2d(532,406);
    glVertex2d(641,342);
    glVertex2d(654,342);

    glEnd();

    //right dark
    glBegin(GL_POLYGON);

    glColor3ub(140,133,122);

    glVertex2d(641,342);
    glVertex2d(641,334);
    glVertex2d(654,342);

    glEnd();

    //////decorative holes
    ////bright
    //1
    glBegin(GL_POLYGON);

    glColor3ub(232,219,201);

    glVertex2d(539,395);
    glVertex2d(539,387);
    glVertex2d(545,383);
    glVertex2d(551,387);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(559,382);
    glVertex2d(559,375);
    glVertex2d(566,371);
    glVertex2d(572,375);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(580,370);
    glVertex2d(580,362);
    glVertex2d(587,359);
    glVertex2d(593,362);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(601,358);
    glVertex2d(601,350);
    glVertex2d(608,346);
    glVertex2d(614,350);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(622,345);
    glVertex2d(622,338);
    glVertex2d(629,334);
    glVertex2d(635,338);

    glEnd();

    ////dark
    //1
    glBegin(GL_POLYGON);

    glColor3ub(189,168,135);

    glVertex2d(545,383);
    glVertex2d(545,353);
    glVertex2d(551,349);
    glVertex2d(551,387);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(566,371);
    glVertex2d(566,341);
    glVertex2d(572,337);
    glVertex2d(572,375);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(587,359);
    glVertex2d(587,329);
    glVertex2d(593,325);
    glVertex2d(593,362);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(608,346);
    glVertex2d(608,316);
    glVertex2d(614,312);
    glVertex2d(614,350);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(629,334);
    glVertex2d(629,304);
    glVertex2d(635,300);
    glVertex2d(635,338);

    glEnd();

    ////blue
    //1
    glBegin(GL_POLYGON);

    glColor3ub(84,107,130);

    glVertex2d(539,387);
    glVertex2d(539,357);
    glVertex2d(545,353);
    glVertex2d(545,383);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(559,375);
    glVertex2d(559,345);
    glVertex2d(566,341);
    glVertex2d(566,371);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(580,362);
    glVertex2d(580,332);
    glVertex2d(587,329);
    glVertex2d(587,359);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(601,350);
    glVertex2d(601,326);
    glVertex2d(608,330);
    glVertex2d(608,346);

    glEnd();

    ////dark 2
    //1
    glBegin(GL_POLYGON);

    glColor3ub(199,181,156);

    glVertex2d(601,326);
    glVertex2d(601,320);
    glVertex2d(608,316);
    glVertex2d(608,330);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(622,338);
    glVertex2d(622,308);
    glVertex2d(629,304);
    glVertex2d(629,334);

    glEnd();

}

void Holes()
{
    ////blue
    //1
    glBegin(GL_POLYGON);

    glColor3ub(84,107,130);

    glVertex2d(191,161);
    glVertex2d(191,153);
    glVertex2d(198,157);
    glVertex2d(198,165);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(223,180);
    glVertex2d(223,172);
    glVertex2d(230,176);
    glVertex2d(230,183);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(255,199);
    glVertex2d(255,191);
    glVertex2d(262,195);
    glVertex2d(262,202);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(288,217);
    glVertex2d(288,210);
    glVertex2d(294,214);
    glVertex2d(294,221);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(320,236);
    glVertex2d(320,229);
    glVertex2d(326,232);
    glVertex2d(326,240);

    glEnd();

    //6
    glBegin(GL_POLYGON);

    glVertex2d(352,255);
    glVertex2d(352,248);
    glVertex2d(358,251);
    glVertex2d(358,259);

    glEnd();

    //7
    glBegin(GL_POLYGON);

    glVertex2d(384,259);
    glVertex2d(384,251);
    glVertex2d(391,248);
    glVertex2d(391,255);

    glEnd();

    //8
    glBegin(GL_POLYGON);

    glVertex2d(416,240);
    glVertex2d(416,232);
    glVertex2d(423,229);
    glVertex2d(423,236);

    glEnd();

    //9
    glBegin(GL_POLYGON);

    glVertex2d(449,221);
    glVertex2d(449,214);
    glVertex2d(455,210);
    glVertex2d(455,217);

    glEnd();

    //10
    glBegin(GL_POLYGON);

    glVertex2d(481,202);
    glVertex2d(481,195);
    glVertex2d(487,191);
    glVertex2d(487,199);

    glEnd();

    //11
    glBegin(GL_POLYGON);

    glVertex2d(513,183);
    glVertex2d(513,176);
    glVertex2d(519,172);
    glVertex2d(519,180);

    glEnd();

    //12
    glBegin(GL_POLYGON);

    glVertex2d(545,165);
    glVertex2d(545,157);
    glVertex2d(551,153);
    glVertex2d(551,161);

    glEnd();


    ////Dark
    //1
    glBegin(GL_POLYGON);

    glColor3ub(140,133,122);

    glVertex2d(185,165);
    glVertex2d(191,161);
    glVertex2d(198,165);
    glVertex2d(198,172);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(217,183);
    glVertex2d(223,180);
    glVertex2d(230,183);
    glVertex2d(230,191);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(249,202);
    glVertex2d(255,199);
    glVertex2d(262,202);
    glVertex2d(262,210);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(281,221);
    glVertex2d(288,217);
    glVertex2d(294,221);
    glVertex2d(294,229);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(313,240);
    glVertex2d(320,236);
    glVertex2d(326,240);
    glVertex2d(326,248);

    glEnd();

    //6
    glBegin(GL_POLYGON);

    glVertex2d(346,259);
    glVertex2d(352,255);
    glVertex2d(358,259);
    glVertex2d(358,266);

    glEnd();

    //7
    glBegin(GL_POLYGON);

    glVertex2d(384,266);
    glVertex2d(384,259);
    glVertex2d(391,255);
    glVertex2d(397,259);

    glEnd();

    //8
    glBegin(GL_POLYGON);

    glVertex2d(416,248);
    glVertex2d(416,240);
    glVertex2d(423,236);
    glVertex2d(429,240);

    glEnd();

    //9
    glBegin(GL_POLYGON);

    glVertex2d(449,229);
    glVertex2d(449,221);
    glVertex2d(455,217);
    glVertex2d(461,221);

    glEnd();

    //10
    glBegin(GL_POLYGON);

    glVertex2d(481,210);
    glVertex2d(481,202);
    glVertex2d(487,199);
    glVertex2d(494,202);

    glEnd();

    //11
    glBegin(GL_POLYGON);

    glVertex2d(513,191);
    glVertex2d(513,183);
    glVertex2d(519,180);
    glVertex2d(526,183);

    glEnd();

    //12
    glBegin(GL_POLYGON);

    glVertex2d(545,172);
    glVertex2d(545,165);
    glVertex2d(551,161);
    glVertex2d(558,165);

    glEnd();

    ////light
    //1
    glBegin(GL_POLYGON);

    glColor3ub(199,186,163);

    glVertex2d(185,165);
    glVertex2d(185,150);
    glVertex2d(191,153);
    glVertex2d(191,161);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(217,183);
    glVertex2d(217,168);
    glVertex2d(223,172);
    glVertex2d(223,180);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(249,202);
    glVertex2d(249,187);
    glVertex2d(255,191);
    glVertex2d(255,199);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(281,221);
    glVertex2d(281,206);
    glVertex2d(288,210);
    glVertex2d(288,217);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(313,240);
    glVertex2d(313,225);
    glVertex2d(320,229);
    glVertex2d(320,236);

    glEnd();

    //6
    glBegin(GL_POLYGON);

    glVertex2d(346,259);
    glVertex2d(346,244);
    glVertex2d(352,248);
    glVertex2d(352,255);

    glEnd();

    //7
    glBegin(GL_POLYGON);

    glVertex2d(391,255);
    glVertex2d(391,248);
    glVertex2d(397,244);
    glVertex2d(397,259);

    glEnd();

    //8
    glBegin(GL_POLYGON);

    glVertex2d(423,236);
    glVertex2d(423,229);
    glVertex2d(429,225);
    glVertex2d(429,240);

    glEnd();

    //9
    glBegin(GL_POLYGON);

    glVertex2d(455,217);
    glVertex2d(455,210);
    glVertex2d(461,206);
    glVertex2d(461,221);

    glEnd();

    //10
    glBegin(GL_POLYGON);

    glVertex2d(487,199);
    glVertex2d(487,191);
    glVertex2d(494,187);
    glVertex2d(494,202);

    glEnd();

    //11
    glBegin(GL_POLYGON);

    glVertex2d(519,180);
    glVertex2d(519,172);
    glVertex2d(526,168);
    glVertex2d(526,183);

    glEnd();

    //12
    glBegin(GL_POLYGON);

    glVertex2d(551,161);
    glVertex2d(551,153);
    glVertex2d(558,150);
    glVertex2d(558,165);

    glEnd();



}

void Windows()
{
    ////brown
    //1
    glBegin(GL_POLYGON);

    glColor3ub(135,125,107);

    glVertex2d(191,274);
    glVertex2d(191,214);
    glVertex2d(230,236);
    glVertex2d(230,297);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(249,308);
    glVertex2d(249,247);
    glVertex2d(288,270);
    glVertex2d(288,330);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(307,342);
    glVertex2d(307,281);
    glVertex2d(346,304);
    glVertex2d(346,364);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(397,364);
    glVertex2d(397,304);
    glVertex2d(436,281);
    glVertex2d(436,342);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(397,485);
    glVertex2d(397,425);
    glVertex2d(436,402);
    glVertex2d(436,462);

    glEnd();

    ////blue holes
    //1
    glBegin(GL_POLYGON);

    glColor3ub(84,107,130);

    glVertex2d(204,274);
    glVertex2d(204,259);
    glVertex2d(223,270);
    glVertex2d(223,285);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(262,308);
    glVertex2d(262,293);
    glVertex2d(281,304);
    glVertex2d(281,319);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(320,342);
    glVertex2d(320,327);
    glVertex2d(339,338);
    glVertex2d(339,353);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(403,353);
    glVertex2d(403,338);
    glVertex2d(423,327);
    glVertex2d(423,342);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(403,474);
    glVertex2d(403,459);
    glVertex2d(423,447);
    glVertex2d(423,462);

    glEnd();

    ////blue glass
    //1
    glBegin(GL_POLYGON);

    glColor3ub(135,209,212);

    glVertex2d(198,236);
    glVertex2d(198,225);
    glVertex2d(223,240);
    glVertex2d(223,251);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(256,270);
    glVertex2d(256,259);
    glVertex2d(281,274);
    glVertex2d(281,285);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(313,304);
    glVertex2d(313,293);
    glVertex2d(339,308);
    glVertex2d(339,319);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(403,319);
    glVertex2d(403,308);
    glVertex2d(429,293);
    glVertex2d(429,304);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(403,440);
    glVertex2d(403,428);
    glVertex2d(429,413);
    glVertex2d(429,425);

    glEnd();

    ////young blue glass
    //1
    glBegin(GL_POLYGON);

    glColor3ub(181,252,255);

    glVertex2d(198,248);
    glVertex2d(198,236);
    glVertex2d(223,251);
    glVertex2d(223,263);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(256,281);
    glVertex2d(256,270);
    glVertex2d(281,285);
    glVertex2d(281,296);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(313,315);
    glVertex2d(313,304);
    glVertex2d(339,319);
    glVertex2d(339,330);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(403,330);
    glVertex2d(403,319);
    glVertex2d(429,304);
    glVertex2d(429,315);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(403,451);
    glVertex2d(403,439);
    glVertex2d(429,424);
    glVertex2d(429,436);

    glEnd();

    ////light
    //1
    glBegin(GL_POLYGON);

    glColor3ub(250,242,227);

    glVertex2d(185,278);
    glVertex2d(191,274);
    glVertex2d(223,293);
    glVertex2d(230,297);
    glVertex2d(223,300);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(198,278);
    glVertex2d(204,274);
    glVertex2d(223,285);
    glVertex2d(223,293);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(243,312);
    glVertex2d(249,308);
    glVertex2d(281,327);
    glVertex2d(288,330);
    glVertex2d(281,334);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(256,312);
    glVertex2d(262,308);
    glVertex2d(281,319);
    glVertex2d(281,327);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(301,346);
    glVertex2d(307,342);
    glVertex2d(339,361);
    glVertex2d(346,364);
    glVertex2d(339,368);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(313,346);
    glVertex2d(320,342);
    glVertex2d(339,353);
    glVertex2d(339,361);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(403,368);
    glVertex2d(397,364);
    glVertex2d(429,346);
    glVertex2d(436,342);
    glVertex2d(442,346);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(403,361);
    glVertex2d(403,353);
    glVertex2d(423,342);
    glVertex2d(429,346);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(403,489);
    glVertex2d(397,485);
    glVertex2d(429,466);
    glVertex2d(436,462);
    glVertex2d(442,466);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2d(404,481);
    glVertex2d(404,474);
    glVertex2d(423,462);
    glVertex2d(429,466);

    glEnd();

    ////dark top
    //1
    glBegin(GL_POLYGON);

    glColor3ub(191,184,176);

    glVertex2d(198,278);
    glVertex2d(198,255);
    glVertex2d(204,259);
    glVertex2d(204,274);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(256,312);
    glVertex2d(256,289);
    glVertex2d(262,293);
    glVertex2d(262,308);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(313,346);
    glVertex2d(313,323);
    glVertex2d(320,327);
    glVertex2d(320,342);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(423,342);
    glVertex2d(423,327);
    glVertex2d(429,323);
    glVertex2d(429,346);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(423,462);
    glVertex2d(423,447);
    glVertex2d(429,444);
    glVertex2d(429,466);

    glEnd();

    ////dark bottom
    //1
    glBegin(GL_POLYGON);

    glColor3ub(209,199,191);

    glVertex2d(185,285);
    glVertex2d(185,278);
    glVertex2d(223,300);
    glVertex2d(223,308);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(243,319);
    glVertex2d(243,312);
    glVertex2d(281,334);
    glVertex2d(281,342);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(301,353);
    glVertex2d(301,346);
    glVertex2d(339,368);
    glVertex2d(339,376);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(403,376);
    glVertex2d(403,368);
    glVertex2d(442,346);
    glVertex2d(442,353);

    glEnd();

    //5
    glBegin(GL_POLYGON);

    glVertex2d(403,496);
    glVertex2d(403,489);
    glVertex2d(442,466);
    glVertex2d(442,474);

    glEnd();

    ////dark right
    //1
    glBegin(GL_POLYGON);

    glColor3ub(189,176,161);

    glVertex2d(223,308);
    glVertex2d(223,300);
    glVertex2d(230,297);
    glVertex2d(230,304);

    glEnd();

    //2
    glBegin(GL_POLYGON);

    glVertex2d(281,342);
    glVertex2d(281,334);
    glVertex2d(288,330);
    glVertex2d(288,338);

    glEnd();

    //3
    glBegin(GL_POLYGON);

    glVertex2d(339,376);
    glVertex2d(339,368);
    glVertex2d(346,364);
    glVertex2d(346,372);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glColor3ub(242,224,199);

    glVertex2d(397,372);
    glVertex2d(397,364);
    glVertex2d(403,368);
    glVertex2d(403,376);

    glEnd();

    //4
    glBegin(GL_POLYGON);

    glVertex2d(397,493);
    glVertex2d(397,485);
    glVertex2d(403,489);
    glVertex2d(403,496);

    glEnd();

}


void Chairs()
{


    //////Bottom
    //top
    glBegin(GL_POLYGON);

    glColor3ub(255,255,255);

    glVertex2d(286,551);
    glVertex2d(246,528);
    glVertex2d(262,519);
    glVertex2d(302,542);

    glEnd();

    //side Left
    glBegin(GL_POLYGON);

    glColor3ub(227,219,207);

    glVertex2d(286,556);
    glVertex2d(246,532);
    glVertex2d(246,528);
    glVertex2d(286,551);

    glEnd();

    //side right
    glBegin(GL_POLYGON);

    glColor3ub(181,173,161);

    glVertex2d(286,556);
    glVertex2d(286,551);
    glVertex2d(302,542);
    glVertex2d(302,546);

    glEnd();

    //leg left
    glBegin(GL_POLYGON);

    glColor3ub(140,130,115);

    glVertex2d(248,533);
    glVertex2d(248,545);
    glVertex2d(249,546);
    glVertex2d(250,547);
    glVertex2d(251,545);
    glVertex2d(251,535);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(181,173,161);

    glVertex2d(249,546);
    glVertex2d(249,534);
    glVertex2d(250,534);
    glVertex2d(250,547);

    glEnd();

    //leg middle
    glBegin(GL_POLYGON);

    glColor3ub(140,130,115);

    glVertex2d(284,555);
    glVertex2d(284,567);
    glVertex2d(285,568);
    glVertex2d(286,568);
    glVertex2d(288,567);
    glVertex2d(288,555);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(181,173,161);

    glVertex2d(285,568);
    glVertex2d(285,555);
    glVertex2d(286,555);
    glVertex2d(286,568);

    glEnd();

    //leg right
    glBegin(GL_POLYGON);

    glColor3ub(140,130,115);

    glVertex2d(298,549);
    glVertex2d(298,559);
    glVertex2d(298,560);
    glVertex2d(300,560);
    glVertex2d(301,559);
    glVertex2d(301,547);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(181,173,161);

    glVertex2d(298,560);
    glVertex2d(298,549);
    glVertex2d(300,548);
    glVertex2d(300,560);

    glEnd();


    int addX=0;
    int addY=0;

    for(int i=0;i<2;i++)
    {

        //shadow

        glBegin(GL_POLYGON);

        glColor3ub(196,173,140);

        glVertex2d(313+addX,174+addY);
        glVertex2d(348+addX,195+addY);
        glVertex2d(364+addX,185+addY);
        glVertex2d(330+addX,165+addY);

        glEnd();

        glBegin(GL_POLYGON);

        glColor3ub(242,224,199);

        glVertex2d(315+addX,173+addY);
        glVertex2d(334+addX,184+addY);
        glVertex2d(345+addX,177+addY);
        glVertex2d(327+addX,166+addY);

        glEnd();

        //shadow ^^^

        ////legs middle
    //dark
    glBegin(GL_POLYGON);

    glColor3ub(140,130,115);

    glVertex2d(313+addX,174+addY);
    glVertex2d(313+addX,161+addY);
    glVertex2d(316+addX,161+addY);
    glVertex2d(316+addX,174+addY);
    glVertex2d(315+addX,167+addY);
    glVertex2d(313+addX,175+addY);

    glEnd();

    //light
    glBegin(GL_POLYGON);

    glColor3ub(181,173,161);

    glVertex2d(313+addX,175+addY);
    glVertex2d(313+addX,161+addY);
    glVertex2d(315+addX,162+addY);
    glVertex2d(315+addX,175+addY);

    glEnd();

    ////legs right
    //dark
    glBegin(GL_POLYGON);

    glColor3ub(140,130,115);

    glVertex2d(327+addX,165+addY);
    glVertex2d(327+addX,155+addY);
    glVertex2d(330+addX,153+addY);
    glVertex2d(330+addX,165+addY);
    glVertex2d(329+addX,167+addY);
    glVertex2d(327+addX,166+addY);

    glEnd();

    //light
    glBegin(GL_POLYGON);

    glColor3ub(181,173,161);

    glVertex2d(327+addX,166+addY);
    glVertex2d(327+addX,155+addY);
    glVertex2d(329+addX,154+addY);
    glVertex2d(329+addX,167+addY);

    glEnd();

    //////// Top Chairs

    //white
    glBegin(GL_POLYGON);

    glColor3ub(255,255,255);

    glVertex2d(298+addX,148+addY);
    glVertex2d(315+addX,138+addY);
    glVertex2d(331+addX,148+addY);
    glVertex2d(315+addX,157+addY);

    glEnd();

    //side left
    glBegin(GL_POLYGON);

    glColor3ub(227,219,207);

    glVertex2d(298+addX,152+addY);
    glVertex2d(298+addX,148+addY);
    glVertex2d(315+addX,157+addY);
    glVertex2d(315+addX,162+addY);

    glEnd();

    //side right
    glBegin(GL_POLYGON);

    glColor3ub(181,173,161);

    glVertex2d(315+addX,162+addY);
    glVertex2d(315+addX,157+addY);
    glVertex2d(331+addX,148+addY);
    glVertex2d(331+addX,152+addY);

    glEnd();

    ////legs left
    //dark
    glBegin(GL_POLYGON);

    glColor3ub(140,130,115);

    glVertex2d(299+addX,165+addY);
    glVertex2d(299+addX,153+addY);
    glVertex2d(303+addX,155+addY);
    glVertex2d(303+addX,165+addY);
    glVertex2d(301+addX,167+addY);
    glVertex2d(300+addX,166+addY);

    glEnd();

    //light
    glBegin(GL_POLYGON);

    glColor3ub(181,173,161);

    glVertex2d(300+addX,166+addY);
    glVertex2d(300+addX,153+addY);
    glVertex2d(301+addX,154+addY);
    glVertex2d(301+addX,167+addY);

    glEnd();


    addX=23;
    addY=-33;


    }

}

/////////////////////////////////////////////////

void display()  {
    glClear(GL_COLOR_BUFFER_BIT);

        Background();
        Land();
        Fondasi();
        Walls();
        Fondasi2();
        SideStairs();
        Stairs();
        Balcony();
        Holes();
        Windows();
        Tree();
        Chairs();

    glFlush();
}

///////////////////////////////////////////////////


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

    while (!glfwWindowShouldClose(window))//kecepatan FPS dari while ini tergantung komputer masing masing
    {
        setup_viewport(window);

        display();

        ////////////////////////////////////////////////////////////


        ////////////////////////////////////////////////////////////

        glfwSwapBuffers(window);
        glfwPollEvents();



        //y
    }
    glfwDestroyWindow(window);
    glfwTerminate();

    exit(EXIT_SUCCESS);
}
