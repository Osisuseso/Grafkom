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
class Rumahku{
    public:
    void Tanah(){
        glColor3ub(158,117,72);

        glBegin(GL_QUADS);
        glVertex2d(86,536.07);
        glVertex2d(86,560.21);
        glVertex2d(700,889.05);
        glVertex2d(700,864.91);
        glEnd();

        glColor3ub(105,69,44);
        glBegin(GL_QUADS);
        glVertex2d(700,864.91);
        glVertex2d(700,889.05);
        glVertex2d(1314,560.21);
        glVertex2d(1314,536.07);
        glEnd();

    }
    void Rumput(){
        glColor3ub(53,110,72);
        glBegin(GL_QUADS);
        glVertex2d(778,799.24);
        glVertex2d(778,823.38);
        glVertex2d(1314,536.07);
        glVertex2d(1314,511.93);
        glEnd();

        glColor3ub(100,242,114);
        glBegin(GL_QUADS);
        glVertex2d(164,470.37);
        glVertex2d(778,799.24);
        glVertex2d(1313.71,511.93);
        glVertex2d(699.89,183.05);
        glEnd();

    }
    void Teras(){
        glColor3ub(242,228,198);
        glBegin(GL_QUADS);
        glVertex2d(421.29,608.42);
        glVertex2d(519.8,661.18);
        glVertex2d(698.73,565.32);
        glVertex2d(600.22,512.56);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(412.08,415.72);
        glVertex2d(952.66,705.34);
        glVertex2d(1280.01,529.98);
        glVertex2d(739.4,240.33);
        glEnd();
    }
    void Pohon(){
        for(int i=0, j=0; i<= 325; i+=65,j-=35){

            glColor3ub(47,160,79);
            glBegin(GL_QUADS);
            glVertex2d(336+i,344.69+j);
            glVertex2d(336+i,398.71+j);
            glVertex2d(351+i,406.689+j);
            glVertex2d(351+i,352.669+j);
            glEnd();

            glColor3ub(50,120,69);
            glBegin(GL_QUADS);
            glVertex2d(351+i,352.67+j);
            glVertex2d(351+i,406.69+j);
            glVertex2d(364+i,399.13+j);
            glVertex2d(364+i,345.11+j);
            glEnd();


            glColor3ub(53,181,89);
            glBegin(GL_QUADS);
            glVertex2d(325+i,337.28+j);
            glVertex2d(325+i,383.46+j);
            glVertex2d(351+i,397.138+j);
            glVertex2d(351+i,350.92+j);
            glEnd();

            glColor3ub(57,135,78);
            glBegin(GL_QUADS);
            glVertex2d(351+i,350.92+j);
            glVertex2d(351+i,397.14+j);
            glVertex2d(374+i,384.19+j);
            glVertex2d(374+i,337.98+j);
            glEnd();

            glColor3ub(57,219,105);
            glBegin(GL_QUADS);
            glVertex2d(349.09+i,324.3+j);
            glVertex2d(324.91+i,337.28+j);
            glVertex2d(350.42+i,350.92+j);
            glVertex2d(374.6+i,337.98+j);
            glEnd();
        }

    }
    void Jalan(){
        glColor3ub(84,94,110);
        glBegin(GL_QUADS);
        glVertex2d(86,511.93);
        glVertex2d(86,536.07);
        glVertex2d(700,864.91);
        glVertex2d(699.89,840.77);
        glEnd();

        glColor3ub(52,65,84);
        glBegin(GL_QUADS);
        glVertex2d(699.89,840.77);
        glVertex2d(700,865.91);
        glVertex2d(778,823.38);
        glVertex2d(778,799.24);
        glEnd();

        glColor3ub(110,120,135);
        glBegin(GL_QUADS);
        glVertex2d(86.1,511.93);
        glVertex2d(699.89,840.77);
        glVertex2d(778,799.24);
        glVertex2d(164,470.37);
        glEnd();

        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2d(148.08,478.69);
        glVertex2d(405.71,616.75);
        glVertex2d(411.28,613.78);
        glVertex2d(153.64,475.72);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(504.23,669.51);
        glVertex2d(761.9,807.57);
        glVertex2d(767.46,804.59);
        glVertex2d(509.79,666.54);
        glEnd();
    }
    void Trotoar(){
        glColor3ub(201,136,128);
        glBegin(GL_QUADS);
        glVertex2d(164,457.98);
        glVertex2d(164,470.37);
        glVertex2d(421,608.42);
        glVertex2d(421,596.04);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(520,648.8);
        glVertex2d(520,661.18);
        glVertex2d(778,799.241);
        glVertex2d(778,786.856);
        glEnd();

        glColor3ub(166,96,96);
        glBegin(GL_QUADS);
        glVertex2d(421,596.04);
        glVertex2d(421,608.42);
        glVertex2d(460,587.12);
        glVertex2d(460,574.73);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(778,786.86);
        glVertex2d(778,799.24);
        glVertex2d(817,777.93);
        glVertex2d(817,765.55);
        glEnd();

        glColor3ub(240,172,153);
        glBegin(GL_QUADS);
        glVertex2d(163.65,457.98);
        glVertex2d(421.29,596.04);
        glVertex2d(461.04,574.73);
        glVertex2d(203.4,436.67);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(559.56,627.49);
        glVertex2d(519.8,648.8);
        glVertex2d(777.44,786.86);
        glVertex2d(817.23,765.55);
        glEnd();

        glColor3ub(245,194,155);
        glBegin(GL_QUADS);
        glVertex2d(191.51,472.92);
        glVertex2d(220.24,488.31);
        glVertex2d(259.99,467.01);
        glVertex2d(231.26,451.61);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(248.93,503.71);
        glVertex2d(277.67,519.07);
        glVertex2d(317.42,497.76);
        glVertex2d(288.72,482.4);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(306.4,534.46);
        glVertex2d(335.13,549.86);
        glVertex2d(374.88,528.55);
        glVertex2d(346.15,513.15);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(363.86,565.25);
        glVertex2d(392.56,580.64);
        glVertex2d(432.35,559.34);
        glVertex2d(403.61,543.94);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(547.66,663.74);
        glVertex2d(576.39,679.13);
        glVertex2d(616.14,657.82);
        glVertex2d(587.41,642.43);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(605.12,694.49);
        glVertex2d(633.82,709.88);
        glVertex2d(673.61,688.58);
        glVertex2d(644.87,673.22);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(662.55,725.28);
        glVertex2d(691.28,740.67);
        glVertex2d(731.03,719.37);
        glVertex2d(702.3,703.97);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(720.01,756.07);
        glVertex2d(748.74,771.46);
        glVertex2d(788.5,750.15);
        glVertex2d(759.77,734.76);
        glEnd();
    }
    void PagerRumput(){
        glColor3ub(53,181,89);
        glBegin(GL_QUADS);
        glVertex2d(204,373.07);
        glVertex2d(204,449.06);
        glVertex2d(460,587.116);
        glVertex2d(460,511.09);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(559,563.88);
        glVertex2d(559,639.88);
        glVertex2d(817,777.934);
        glVertex2d(817,701.908);
        glEnd();

        glColor3ub(57,135,78);
        glBegin(GL_QUADS);
        glVertex2d(460,511.09);
        glVertex2d(460,587.12);
        glVertex2d(481,576.45);
        glVertex2d(481,500.45);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(817,701.91);
        glVertex2d(817,777.93);
        glVertex2d(837,767.26);
        glVertex2d(837,691.27);
        glEnd();

        glColor3ub(57,219,105);
        glBegin(GL_QUADS);
        glVertex2d(223.28,362.4);
        glVertex2d(203.4,373.07);
        glVertex2d(461.04,511.09);
        glVertex2d(480.96,500.45);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(579.43,553.21);
        glVertex2d(559.56,563.88);
        glVertex2d(817.23,701.91);
        glVertex2d(837.11,691.27);
        glEnd();
    }
    void Lampu(){
     //ISI ANJIR WOY
    }

    void LantaiBawah(){
        glColor3ub(179,179,179);
        glBegin(GL_QUADS);
        glVertex2d(617,421.7);
        glVertex2d(617,427.12);
        glVertex2d(969,615.56);
        glVertex2d(969,610.138);
        glEnd();

        glColor3ub(128,128,128);
        glBegin(GL_QUADS);
        glVertex2d(969,610.14);
        glVertex2d(969,615.56);
        glVertex2d(1181,501.47);
        glVertex2d(1181,496.05);
        glEnd();

        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2d(829.97,307.61);
        glVertex2d(616.98,421.7);
        glVertex2d(968.72,610.14);
        glVertex2d(1181.67,496.05);
        glEnd();
    }
    void LantaisatuKiri(){
        glColor3ub(209,198,170);
        glBegin(GL_QUADS);
        glVertex2d(633,316.53);
        glVertex2d(633,413.27);
        glVertex2d(812,509.55);
        glVertex2d(812,412.812);
        glEnd();

        glColor3ub(168,145,123);
        glBegin(GL_QUADS);
        glVertex2d(812,412.812);
        glVertex2d(812,509.55);
        glVertex2d(902,461.408);
        glVertex2d(902,364.67);
        glEnd();

        glColor3ub(150,99,63);
        glBegin(GL_QUADS);
        glVertex2d(731,373.66);
        glVertex2d(731,470.4);
        glVertex2d(809,511.825);
        glVertex2d(809,415.086);
        glEnd();

        glBegin(GL_QUADS);
        glVertex2d(812,412.812);
        glVertex2d(809,415.09);
        glVertex2d(809,511.82);
        glVertex2d(812,509.55);
        glEnd();

        for(int i=0; i<=71.16; i+=23.72){
            glColor3ub(189,121,72);
            glBegin(GL_QUADS);
            glVertex2d(731,380.55+i);
            glVertex2d(731,392.41+i);
            glVertex2d(809,433.804+i);
            glVertex2d(809,421.943+i);
            glEnd();

            glBegin(GL_QUADS);
            glVertex2d(809,433.804+i);
            glVertex2d(809,421.943+i);
            glVertex2d(812,419.7+i);
            glVertex2d(812,431.56+i);
            glEnd();
        }

        glColor3ub(237,168,99);
        glBegin(GL_QUADS);
        glVertex2d(735.16,371.42);
        glVertex2d(730.93,373.66);
        glVertex2d(808.23,415.09);
        glVertex2d(812.469,412.812);
        glEnd();

        //Jendela Kiri Bawah
        for(double i=0.0, j=0.0;i <= 24.106; i+=24.106, j+=45){
            glColor3ub(178,190,214);
            glBegin(GL_QUADS);
            glVertex2d(640+j,326.464+i);
            glVertex2d(640+j,407.66+i);
            glVertex2d(678+j,427.856+i);
            glVertex2d(678+j,346.69+i);
            glEnd();

            glColor3ub(168,145,123);
            glBegin(GL_QUADS);
            glVertex2d(640+j,326.464+i);
            glVertex2d(638+j,325.314+i);
            glVertex2d(638+j,408.784+i);
            glVertex2d(640+j,407.634+i);
            glEnd();

            glColor3ub(255,255,255);
            glBegin(GL_QUADS);
            glVertex2d(669.2+j,342.244+i);
            glVertex2d(664.16+j,339.554+i);
            glVertex2d(641.48+j,408.444+i);
            glVertex2d(646.49+j,411.244+i);
            glEnd();

            glColor3ub(255,255,255);
            glBegin(GL_QUADS);
            glVertex2d(675.01+j,345.354+i);
            glVertex2d(676.76+j,346.304+i);
            glVertex2d(654.08+j,415.294+i);
            glVertex2d(652.33+j,414.354+i);
            glEnd();

            glColor3ub(255,255,255);
            glBegin(GL_QUADS);
            glVertex2d(678+j,430.17+i);
            glVertex2d(678+j,427.86+i);
            glVertex2d(640.18+j,407.67+i);
            glVertex2d(637.89+j,408.82+i);
            glEnd();

        }


    }
    void LantaisatuKanan(){
        glColor3ub(150,99,63);
        glBegin(GL_QUADS);
        glVertex2d(902,364.67);
        glVertex2d(902,461.41);
        glVertex2d(1060,546.322);
        glVertex2d(1060,449.583);
        glEnd();

        glColor3ub(107,66,45);
        glBegin(GL_QUADS);
        glVertex2d(1060,449.583);
        glVertex2d(1060,546.32);
        glVertex2d(1168,488.8);
        glVertex2d(1168,392.06);
        glEnd();

        for(double i=0.0; i<=70.4; i+=17.6){
            glColor3ub(130,79,54);
            glBegin(GL_QUADS);
            glVertex2d(1060,458.36+i);
            glVertex2d(1060,467.18+i);
            glVertex2d(1168,409.66+i);
            glVertex2d(1168,400.85+i);
            glEnd();

        }

        glColor3ub(178,190,214);
        glBegin(GL_QUADS);
        glVertex2d(910,375.236);
        glVertex2d(910,463.018);
        glVertex2d(965,492.93);
        glVertex2d(965,405.15);
        glEnd();

        glColor3ub(168,145,123);
        glBegin(GL_QUADS);
        glVertex2d(910,375.24);
        glVertex2d(907,374.08);
        glVertex2d(907,464.17);
        glVertex2d(910,463.02);
        glEnd();

        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2d(929.19,385.56);
        glVertex2d(924.05,382.86);
        glVertex2d(910,426.32);
        glVertex2d(910,444.3);
        glEnd();

        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2d(936.46,389.62);
        glVertex2d(934.71,388.67);
        glVertex2d(910.25,463.33);
        glVertex2d(912,464.28);
        glEnd();

        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2d(957.21,400.71);
        glVertex2d(952.17,398.05);
        glVertex2d(927.71,472.71);
        glVertex2d(932.71,475.37);
        glEnd();

        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2d(964.77,404.76);
        glVertex2d(963.02,403.86);
        glVertex2d(938.56,478.52);
        glVertex2d(940.31,479.43);
        glEnd();

        glColor3ub(102,102,102);
        glBegin(GL_QUADS);
        glVertex2d(938,390.77);
        glVertex2d(937,389.62);
        glVertex2d(937,477.4);
        glVertex2d(938,478.55);
        glEnd();

        glColor3ub(255,255,255);
        glBegin(GL_QUADS);
        glVertex2d(909.26,463.02);
        glVertex2d(907.21,464.17);
        glVertex2d(965,495.24);
        glVertex2d(965,492.932);
        glEnd();

        //Jendela Kiri Bawah
        for(double i=0.0, j=0.0;i <= 24.106; i+=24.106, j+=45){
            glColor3ub(178,190,214);
            glBegin(GL_QUADS);
            glVertex2d(1010+j,429.26+i);
            glVertex2d(973+j,409.068+i);
            glVertex2d(973+j,490.238+i);
            glVertex2d(1010+j,510.425+i);
            glEnd();

            glColor3ub(168,145,123);
            glBegin(GL_QUADS);
            glVertex2d(973+j,409.068+i);
            glVertex2d(973+j,490.238+i);
            glVertex2d(970+j,491.39+i);
            glVertex2d(970+j,407.91+i);
            glEnd();

            glColor3ub(255,255,255);
            glBegin(GL_QUADS);
            glVertex2d(1002.18+j,424.81+i);
            glVertex2d(997.18+j,422.12+i);
            glVertex2d(974.46+j,491.15+i);
            glVertex2d(979.5+j,493.84+i);
            glEnd();

            glColor3ub(255,255,255);
            glBegin(GL_QUADS);
            glVertex2d(1009.77+j,428.87+i);
            glVertex2d(1007.99+j,427.93+i);
            glVertex2d(985.31+j,496.96+i);
            glVertex2d(987.06+j,497.9+i);
            glEnd();

            glColor3ub(255,255,255);
            glBegin(GL_QUADS);
            glVertex2d(973+j,490.238+i);
            glVertex2d(1010+j,510.425+i);
            glVertex2d(1010+j,512.73+i);
            glVertex2d(973+j,491.39+i);
            glEnd();
        }

        for(double i=0.0, j=0.0; i <=26; i+=13, j+=8.4){
            glColor3ub(150,99,63);
            glBegin(GL_QUADS);
            glVertex2d(940+i,474.6+j);
            glVertex2d(933+i,471.24+j);
            glVertex2d(933+i,566.33+j);
            glVertex2d(940+i,569.693+j);
            glEnd();

            glColor3ub(107,66,45);
            glBegin(GL_QUADS);
            glVertex2d(940+i,474.6+j);
            glVertex2d(940+i,569.693+j);
            glVertex2d(947+i,565.95+j);
            glVertex2d(947+i,470.86+j);
            glEnd();

            glColor3ub(128,128,128);
            glBegin(GL_QUADS);
            glVertex2d(940.27+i,467.5+j);
            glVertex2d(933+i,471.24+j);
            glVertex2d(940+i,474.6+j);
            glVertex2d(947+i,470.86+j);
            glEnd();
        }

        glColor3ub(128,128,128);
        glBegin(GL_QUADS);
        glVertex2d(972.36,283.75);
        glVertex2d(939.083,301.589);
        glVertex2d(1097.543,386.502);
        glVertex2d(1130.86,368.66);
        glEnd();

        glColor3ub(102,102,102);
        glBegin(GL_QUADS);
        glVertex2d(939.083,301.589);
        glVertex2d(1097.543,386.502);
        glVertex2d(1060.8,449.58);
        glVertex2d(902.03,364.67);
        glEnd();

        glColor3ub(77,77,77);
        glBegin(GL_QUADS);
        glVertex2d(1097.543,386.502);
        glVertex2d(1130.86,368.66);
        glVertex2d(1168.13,392.06);
        glVertex2d(1060.8,449.58);
        glEnd();

        glColor3ub(128,128,128);
        glBegin(GL_QUADS);
        glVertex2d(1060.8,449.58);
        glVertex2d(902.03,364.67);
        glVertex2d(812.47,412.81);
        glVertex2d(970.93,497.72);
        glEnd();

        glColor3ub(77,77,77);
        glBegin(GL_QUADS);
        glVertex2d(1060.8,449.58);
        glVertex2d(970,497.72);
        glVertex2d(970,503.15);
        glVertex2d(1060.8,455.01);
        glEnd();

        glColor3ub(102,102,102);
        glBegin(GL_QUADS);
        glVertex2d(812.47,412.81);
        glVertex2d(970.93,497.72);
        glVertex2d(970,503.15);
        glVertex2d(812,418.27);
        glEnd();




    }
    void Lantaidua(){

    }

    //Fungsi Semua
    void TanahLapang(){
        Tanah();
        Rumput();
        Pohon();
    }
    void Jalanan(){
        Jalan();
        Teras();
    }
    void Pagar(){
        PagerRumput();
        Trotoar();
    }
    void Rumah(){
        LantaiBawah();
        LantaisatuKiri();
        LantaisatuKanan();
    }

    void All(){
        TanahLapang();
        Jalanan();
        Pagar();
        Rumah();

    }


    void circle(float size){
        int N = 180;
        float pX, pY;
        glBegin(GL_POLYGON);
        for(int i = 0; i < N; i++){
            if(i%11 == 0)
                glColor4ub(0,0,0,1);
            else
                //glColor4f(red,green,blue,1);
            pX = sin(i*2*3.14 / N);
            pY = cos(i*2*3.14 / N);
            glVertex2f(pX * size, pY * size);
        }
        glEnd();
    }

};Rumahku RumahOsi;


static void CursorPositionCallback(GLFWwindow *window, double xPos, double yPos);

/*static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos){
    namaosi.doIfSelected(xpos, ypos);
}*/

static void error_callback(int error, const char* description) {
    fputs(description, stderr);
    }
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
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
    window = glfwCreateWindow(1400, 980, "G64170094 - Fauzi Muhammad Sulaeman", NULL, NULL);

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
      glOrtho(0, 1400, 980, 0, 1.f, -1.f);
      glMatrixMode(GL_MODELVIEW);
      glLoadIdentity();
      //glRotatef((float) glfwGetTime() * 50.f, 0.f, 0.f, 1.f);


      RumahOsi.All();




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
