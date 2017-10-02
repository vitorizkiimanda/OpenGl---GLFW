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
void display()  {
    glClear(GL_COLOR_BUFFER_BIT);

    glFlush();
}


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

    ////blueside
    glBegin(GL_POLYGON);

    glColor3ub(84,107,130);

    glVertex2d(204,387);
    glVertex2d(204,342);
    glVertex2d(243,364);

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



}

/////////////////////////////////////////////////


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

        Background();
        Land();
        Fondasi();
        Walls();
        Fondasi2();
        SideStairs();
        Stairs();

        Tree();
        ////////////////////////////////////////////////////////////

        glfwSwapBuffers(window);
        glfwPollEvents();



        //y
    }
    glfwDestroyWindow(window);
    glfwTerminate();

    exit(EXIT_SUCCESS);
}
