#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#define TRUE 1
#define FALSE 0
#define rangey 305
using namespace std;

float osiii=0;
class Nama{
    public:
        float red = 1;
        float green = 0;
        float blue = 1;
        float alphafauzi = 1;
        float alphamuhammad = 0;
        float alphasulaeman = 0;
        float alphalengkap = 0;
        int x = 0;
        int isSelected = FALSE;

    void Fauzi(){
        if(x==0 || x>=3){
            alphafauzi=1;
        }
        else{
            alphafauzi=0;
        }
        //F
        glBegin(GL_QUADS);
        glColor4f(red, green, blue, alphafauzi);
        glVertex2f(38,329);
        glVertex2f(38,347);
        glVertex2f(84,347);
        glVertex2f(84,329);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(38,347);
        glVertex2f(38,419);
        glVertex2f(56,419);
        glVertex2f(56,347);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(56,365);
        glVertex2f(56,383);
        glVertex2f(84,383);
        glVertex2f(84,365);
        glEnd();
        /*--------------------------------------*/

        //a
        glBegin(GL_QUADS);
        glVertex2f(92,356);
        glVertex2f(92,374);
        glVertex2f(138,374);
        glVertex2f(138,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(120,374);
        glVertex2f(120,419);
        glVertex2f(138,419);
        glVertex2f(138,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(92,401);
        glVertex2f(92,419);
        glVertex2f(138,419);
        glVertex2f(138,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(92,383);
        glVertex2f(92,401);
        glVertex2f(110,401);
        glVertex2f(110,383);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(92,383);
        glVertex2f(92,392);
        glVertex2f(120,392);
        glVertex2f(120,383);
        glEnd();
        /*--------------------------------------*/

        //u
        glBegin(GL_QUADS);
        glVertex2f(146,356);
        glVertex2f(146,419);
        glVertex2f(164,419);
        glVertex2f(164,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(164,401);
        glVertex2f(164,419);
        glVertex2f(174,419);
        glVertex2f(174,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(174,356);
        glVertex2f(174,419);
        glVertex2f(192,419);
        glVertex2f(192,356);
        glEnd();
        /*--------------------------------------*/

        //z
        glBegin(GL_QUADS);
        glVertex2f(200,356);
        glVertex2f(200,374);
        glVertex2f(246,374);
        glVertex2f(246,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(228,374);
        glVertex2f(228,392);
        glVertex2f(246,392);
        glVertex2f(246,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(200,383);
        glVertex2f(200,392);
        glVertex2f(246,392);
        glVertex2f(246,383);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(200,392);
        glVertex2f(200,419);
        glVertex2f(218,419);
        glVertex2f(218,392);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(218,401);
        glVertex2f(218,419);
        glVertex2f(246,419);
        glVertex2f(246,401);
        glEnd();
        /*--------------------------------------*/

        //i
        glBegin(GL_QUADS);
        glVertex2f(254,329);
        glVertex2f(254,347);
        glVertex2f(272,347);
        glVertex2f(272,329);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(254,356);
        glVertex2f(254,419);
        glVertex2f(272,419);
        glVertex2f(272,356);
        glEnd();
        /*--------------------------------------*/
    }
    void Muhammad(){
        if(x==1 || x>=3){
            alphamuhammad=1;
        }
        else{
            alphamuhammad=0;
        }
        //M
        glBegin(GL_QUADS);
        glColor4f(red, green, blue, alphamuhammad);
        glVertex2f(308,329);
        glVertex2f(308,347);
        glVertex2f(399,347);
        glVertex2f(399,329);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(308,347);
        glVertex2f(308,419);
        glVertex2f(327,419);
        glVertex2f(327,347);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(344,347);
        glVertex2f(344,419);
        glVertex2f(363,419);
        glVertex2f(363,347);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(380,347);
        glVertex2f(380,419);
        glVertex2f(399,419);
        glVertex2f(399,347);
        glEnd();
        /*--------------------------------------*/

        //u
        glBegin(GL_QUADS);
        glVertex2f(407,356);
        glVertex2f(407,419);
        glVertex2f(425,419);
        glVertex2f(425,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(425,401);
        glVertex2f(425,419);
        glVertex2f(435,419);
        glVertex2f(435,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(435,356);
        glVertex2f(435,419);
        glVertex2f(453,419);
        glVertex2f(453,356);
        glEnd();
        /*--------------------------------------*/

        //h
        glBegin(GL_QUADS);
        glVertex2f(461,329);
        glVertex2f(461,419);
        glVertex2f(479,419);
        glVertex2f(479,329);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(479,356);
        glVertex2f(479,374);
        glVertex2f(507,374);
        glVertex2f(507,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(489,374);
        glVertex2f(489,419);
        glVertex2f(507,419);
        glVertex2f(507,374);
        glEnd();
        /*--------------------------------------*/

        //a
        glBegin(GL_QUADS);
        glVertex2f(515,356);
        glVertex2f(515,374);
        glVertex2f(561,374);
        glVertex2f(561,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(543,374);
        glVertex2f(543,419);
        glVertex2f(561,419);
        glVertex2f(561,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(515,401);
        glVertex2f(515,419);
        glVertex2f(543,419);
        glVertex2f(543,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(515,383);
        glVertex2f(515,401);
        glVertex2f(533,401);
        glVertex2f(533,383);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(533,383);
        glVertex2f(533,392);
        glVertex2f(543,392);
        glVertex2f(543,383);
        glEnd();
        /*--------------------------------------*/

        //m
        glBegin(GL_QUADS);
        glVertex2f(569,356);
        glVertex2f(569,374);
        glVertex2f(642,374);
        glVertex2f(642,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(569,374);
        glVertex2f(569,419);
        glVertex2f(588,419);
        glVertex2f(588,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(596,374);
        glVertex2f(596,419);
        glVertex2f(615,419);
        glVertex2f(615,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(623,374);
        glVertex2f(623,419);
        glVertex2f(642,419);
        glVertex2f(642,374);
        glEnd();
        /*--------------------------------------*/

        //m
        glBegin(GL_QUADS);
        glVertex2f(650,356);
        glVertex2f(650,374);
        glVertex2f(723,374);
        glVertex2f(723,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(650,374);
        glVertex2f(650,419);
        glVertex2f(669,419);
        glVertex2f(669,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(677,374);
        glVertex2f(677,419);
        glVertex2f(696,419);
        glVertex2f(696,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(704,374);
        glVertex2f(704,419);
        glVertex2f(723,419);
        glVertex2f(723,374);
        glEnd();
        /*--------------------------------------*/

        //a
        glBegin(GL_QUADS);
        glVertex2f(731,356);
        glVertex2f(731,374);
        glVertex2f(777,374);
        glVertex2f(777,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(759,374);
        glVertex2f(759,419);
        glVertex2f(777,419);
        glVertex2f(777,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(731,401);
        glVertex2f(731,419);
        glVertex2f(759,419);
        glVertex2f(759,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(731,383);
        glVertex2f(731,401);
        glVertex2f(749,401);
        glVertex2f(749,383);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(749,383);
        glVertex2f(749,392);
        glVertex2f(759,392);
        glVertex2f(759,383);
        glEnd();
        /*--------------------------------------*/

        //d
        glBegin(GL_QUADS);
        glVertex2f(813,329);
        glVertex2f(813,401);
        glVertex2f(831,401);
        glVertex2f(831,329);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(803,401);
        glVertex2f(803,419);
        glVertex2f(831,419);
        glVertex2f(831,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(785,375);
        glVertex2f(785,419);
        glVertex2f(803,419);
        glVertex2f(803,375);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(785,356);
        glVertex2f(785,375);
        glVertex2f(813,375);
        glVertex2f(813,356);
        glEnd();
        /*--------------------------------------*/
    }
    void Sulaeman(){
        if(x==2 || x>=3){
            alphasulaeman=1;
        }
        else{
            alphasulaeman=0;
        }
        //S
        glBegin(GL_QUADS);
        glColor4f(red, green, blue, alphasulaeman);
        glVertex2f(866,329);
        glVertex2f(866,347);
        glVertex2f(921,347);
        glVertex2f(921,329);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(866,347);
        glVertex2f(866,383);
        glVertex2f(884,383);
        glVertex2f(884,347);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(884,365);
        glVertex2f(884,383);
        glVertex2f(921,383);
        glVertex2f(921,365);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(903,383);
        glVertex2f(903,419);
        glVertex2f(921,419);
        glVertex2f(921,383);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(866,401);
        glVertex2f(866,419);
        glVertex2f(903,419);
        glVertex2f(903,401);
        glEnd();
        /*--------------------------------------*/

        //u
        glBegin(GL_QUADS);
        glVertex2f(929,356);
        glVertex2f(929,419);
        glVertex2f(947,419);
        glVertex2f(947,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(947,401);
        glVertex2f(947,419);
        glVertex2f(957,419);
        glVertex2f(957,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(957,356);
        glVertex2f(957,419);
        glVertex2f(975,419);
        glVertex2f(975,356);
        glEnd();
        /*--------------------------------------*/

        //l
        glBegin(GL_QUADS);
        glVertex2f(983,329);
        glVertex2f(983,419);
        glVertex2f(1001,419);
        glVertex2f(1001,329);
        glEnd();
        /*--------------------------------------*/

        //a
        glBegin(GL_QUADS);
        glVertex2f(1010,356);
        glVertex2f(1010,374);
        glVertex2f(1056,374);
        glVertex2f(1056,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1038,374);
        glVertex2f(1038,419);
        glVertex2f(1056,419);
        glVertex2f(1056,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1010,401);
        glVertex2f(1010,419);
        glVertex2f(1038,419);
        glVertex2f(1038,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1010,383);
        glVertex2f(1010,401);
        glVertex2f(1028,401);
        glVertex2f(1028,383);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1028,383);
        glVertex2f(1028,392);
        glVertex2f(1038,392);
        glVertex2f(1038,383);
        glEnd();
        /*--------------------------------------*/

        //e
        glBegin(GL_QUADS);
        glVertex2f(1064,356);
        glVertex2f(1064,374);
        glVertex2f(1110,374);
        glVertex2f(1110,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1092,374);
        glVertex2f(1092,392);
        glVertex2f(1110,392);
        glVertex2f(1110,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1082,383);
        glVertex2f(1082,392);
        glVertex2f(1092,392);
        glVertex2f(1092,383);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1064,374);
        glVertex2f(1064,419);
        glVertex2f(1082,419);
        glVertex2f(1082,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1082,401);
        glVertex2f(1082,419);
        glVertex2f(1110,419);
        glVertex2f(1110,401);
        glEnd();
        /*--------------------------------------*/

        //m
        glBegin(GL_QUADS);
        glVertex2f(1118,356);
        glVertex2f(1118,374);
        glVertex2f(1191,374);
        glVertex2f(1191,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1118,374);
        glVertex2f(1118,419);
        glVertex2f(1137,419);
        glVertex2f(1137,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1145,374);
        glVertex2f(1145,419);
        glVertex2f(1164,419);
        glVertex2f(1164,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1172,374);
        glVertex2f(1172,419);
        glVertex2f(1191,419);
        glVertex2f(1191,374);
        glEnd();
        /*--------------------------------------*/

        //a
        glBegin(GL_QUADS);
        glVertex2f(1199,356);
        glVertex2f(1199,374);
        glVertex2f(1245,374);
        glVertex2f(1245,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1227,374);
        glVertex2f(1227,419);
        glVertex2f(1245,419);
        glVertex2f(1245,374);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1199,401);
        glVertex2f(1199,419);
        glVertex2f(1245,419);
        glVertex2f(1245,401);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1199,383);
        glVertex2f(1199,401);
        glVertex2f(1217,401);
        glVertex2f(1217,383);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1217,383);
        glVertex2f(1217,392);
        glVertex2f(1227,392);
        glVertex2f(1227,383);
        glEnd();
        /*--------------------------------------*/

        //n
        glBegin(GL_QUADS);
        glVertex2f(1253,356);
        glVertex2f(1253,419);
        glVertex2f(1271,419);
        glVertex2f(1271,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1271,356);
        glVertex2f(1271,374);
        glVertex2f(1299,374);
        glVertex2f(1299,356);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2f(1281,374);
        glVertex2f(1281,419);
        glVertex2f(1299,419);
        glVertex2f(1299,374);
        glEnd();
        /*--------------------------------------*/
    }
    void Underline(){
        if(x>=3){
            alphalengkap=1;
        }
        else{
            alphalengkap=0;
        }
        glBegin(GL_QUADS);
        glColor4f(red, green, blue, alphalengkap);
        glVertex2f(38,432);
        glVertex2f(38,440);
        glVertex2f(1299,440);
        glVertex2f(1299,432);
        glEnd();
    }
    void circle(float size){
        int N = 180;
        float pX, pY;
        glBegin(GL_POLYGON);
        for(int i = 0; i < N; i++)
        {
            if(i%11 == 0)
                glColor4ub(0,0,0,alphalengkap);
            else
                glColor4f(red,green,blue,alphalengkap);
            pX = sin(i*2*3.14 / N);
            pY = cos(i*2*3.14 / N);
            glVertex2f(pX * size, pY * size);
        }
        glEnd();
}
    void Buletbulet(){
        float posx1=18;
        float posy1=305;
        float posx2=1318;
        float posy2=487;
        //int x = 0;
        int i=0;


        /*while(x%2 < 3){
            if(x%2 == 0){
                float alpha = 1;
            }
            else if(x%2 == 1){
                float alpha = 0;
            }*/
            if(x>=3){
                alphalengkap = 1;
            }
            else{
                alphalengkap = 0;
            }
            //atas
            /*if(posx>=posx1 && posx <= posx2 && posy==posy1){
                posx+=10;
            }
            else if(i==305 && posy1>=305 && posy){

            }*/


            //atas kiri(18,305)
            for(float i=posx1;i<=posx2-26;i+=26){
                glPushMatrix();
                glTranslatef(i,posy1,0);
                glRotatef((float) glfwGetTime()*200,0,0,0);
                circle(10);
                glPopMatrix();
            }

            //kanan(1318,331)
            for(float i=posy1;i<= posy2-26;i+=26){
                glPushMatrix();
                glTranslatef(posx2,i,0);
                glRotatef((float) glfwGetTime()*200,0,0,0);
                circle(10);
                glPopMatrix();
            }

            //bawah(18,460)
            for(float i=posx1+26;i<=posx2;i+=26){
                glPushMatrix();
                glTranslatef(i,posy2,0);
                glRotatef((float) glfwGetTime()*200,0,0,0);
                circle(10);
                glPopMatrix();
            }

            //kiri(18,331)
            for(float i=posy1+26;i<=posy2;i+=26){
                glPushMatrix();
                glTranslatef(posx1,i,0);
                glRotatef((float) glfwGetTime()*200,0,0,0);
                circle(10);
                glPopMatrix();
            }



        //}
    }
    void NamaLengkap(){
        if(x>=3){
            alphalengkap=1;
        }
        else{
            alphalengkap=0;
        }


        Fauzi();
        Muhammad();
        Sulaeman();
        Underline();
        Buletbulet();
    }
    void Background(){
        glBegin(GL_QUADS);
        glColor3ub(75, 174, 160);
        glVertex2f(0,0);
        glColor3ub(75, 174, 160);
        glVertex2f(0,750);
        glColor3ub(182, 230, 189);
        glVertex2f(1334,750);
        glColor3ub(182, 230, 189);
        glVertex2f(1334,0);
        glEnd();
    }
    void doIfKeyPressed(int key, int action){
        if (key == GLFW_KEY_SPACE && action == GLFW_PRESS)
            x++;
    }
};
Nama namaosi;

static void CursorPositionCallback(GLFWwindow *window, double xPos, double yPos);

/*static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos){
    namaosi.doIfSelected(xpos, ypos);
}*/

static void error_callback(int error, const char* description) {
    fputs(description, stderr);
    }
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
    namaosi.doIfKeyPressed(key, action);
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    glfwSetWindowShouldClose(window, GL_TRUE);
    }


void setup_viewport(GLFWwindow* window){
    // setting viewports size, projection etc
    float ratio;
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    ratio = width / (float) height;
    glViewport(0, 0, width, height);

    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-350, 350, 350, -350, 1.f, -1.f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void setup_blend(){
          glEnable(GL_BLEND);
          glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
          glEnable(GL_LINE_SMOOTH);
          glEnable(GL_POLYGON_SMOOTH);
          glEnable(GL_POINT_SMOOTH);
}



int main(void) {


    GLFWwindow* window;

    glfwSetErrorCallback(error_callback);

    if (!glfwInit()) exit(EXIT_FAILURE);
    window = glfwCreateWindow(1334, 750, "G64170094 - Fauzi Muhammad Sulaeman", NULL, NULL);

    if (!window){
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    glfwSetKeyCallback(window, key_callback);

    glfwSetCursorPosCallback(window, CursorPositionCallback);

    while (!glfwWindowShouldClose(window)){
      float ratio;
      int width, height;
      glfwGetFramebufferSize(window, &width, &height);
      ratio = width / (float) height;
      glViewport(0, 0, width, height);
      glClear(GL_COLOR_BUFFER_BIT);
      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      setup_blend();
      glOrtho(0, 1334, 750, 0, 1.f, -1.f);
      glMatrixMode(GL_MODELVIEW);
      glLoadIdentity();
      //glRotatef((float) glfwGetTime() * 50.f, 0.f, 0.f, 1.f);
      namaosi.Background();
      osiii+=0.02;
      glPushMatrix();
      glTranslatef(0,cos(osiii)*30,0);
      namaosi.NamaLengkap();
      glPopMatrix();

      glfwSwapBuffers(window);
      glfwPollEvents();
    }

    //fungsi exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}

static void CursorPositionCallback(GLFWwindow *window, double xPos, double yPos){
    //printf("%.3lf : %.3lf\n", xPos, yPos);
    cout << xPos << " : " << yPos << endl;
}
