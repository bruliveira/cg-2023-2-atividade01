#include <windows.h>
#include <GL/glut.h>

int init(void){
    glClearColor(1.0,1.0,1.0,0.0); // Cor de fundo preta

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0,10.0,-10.0,12.0);
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);

    // Desenha a faixa preta superior
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-5.0, 0.33);
        glVertex2f(5.0, 0.33);
        glVertex2f(5.0, 6.0);
        glVertex2f(-5.0, 6.0);
    glEnd();

    // Desenha a faixa vermelha do meio
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-5.0, -3.0);
        glVertex2f(5.0, -3.0);
        glVertex2f(5.0, 3.0);
        glVertex2f(-5.0, 3.0);
    glEnd();

    // Desenha a faixa dourada (amarela) inferior
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-5.0, -3.5);
        glVertex2f(5.0, -3.5);
        glVertex2f(5.0, -0.33);
        glVertex2f(-5.0, -0.33);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char**  argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(400,300);
    glutCreateWindow("Bandeira: Alemanha");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}