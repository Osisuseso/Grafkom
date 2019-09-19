#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static void error_callback(int error, const char* description)
{
    fputs(description, stderr);
}
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);
}

void circle(float size){
        int N = 180;
        float pX, pY;
        glBegin(GL_POLYGON);
        for(int i = 0; i < N; i++)
        {
            pX = sin(i*2*3.14 / N);
            pY = cos(i*2*3.14 / N);
            glVertex2f(pX * size, pY * size);
        }
        glEnd();
}

void kotak(float x, float y, float panjang, float lebar){
    glBegin(GL_QUADS);
        glVertex2f(x,y);
        glVertex2f(x+panjang,y);
        glVertex2f(x+panjang,y+lebar);
        glVertex2f(x,y+lebar);
    glEnd();
}

void display(){
    glPushMatrix();
        glColor3f(0,0,1);
        kotak(-10,-15,20,-200);
        circle(10);
        glColor3f(1,0,0);
        glRotatef((float)glfwGetTime()*-80,0,0,1);
        kotak(-10,10,20,180);
        kotak(-10,-10,20,-180);
        kotak(10,-10,180,20);
        kotak(-10,-10,-180,20);
    glPopMatrix();

}

int main(void)
{
    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if (!glfwInit())
        exit(EXIT_FAILURE);
    window = glfwCreateWindow(1000, 600, "Kincir angin punya osi", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    glfwSetKeyCallback(window, key_callback);
    while (!glfwWindowShouldClose(window))
    {
        float ratio;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width * 10 / (float) height;
        glViewport(0, 0, width, height);
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(-500, 500, 0, 600, 1, -1);
        //glOrtho(-ratio, ratio, ymin, ymax, 1, -1);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();


        glTranslatef(0,200,0);
        display();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}
