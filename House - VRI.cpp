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
        Fondasi2();


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
