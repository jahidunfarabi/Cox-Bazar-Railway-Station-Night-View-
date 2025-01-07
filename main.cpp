
#include <GL/glut.h>
#include <math.h>
#include <string.h>

void *font;
#define PI 3.14159265358979323846


void renderBitmapString(float x, float y, float z, void *font, const char *string)
{
    const char *c;
    glRasterPos3f(x, y, z);

    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void rail_Line()
{

    /**....................................... Rail Line Stone ..........................................**/
    glBegin(GL_QUADS);
    ///    Upper
    glColor3f(0.537, 0.569, 0.592);
    glVertex2f(-1.0f, 0.03f);
    glColor3f(0.553, 0.584, 0.635);
    glVertex2f(-1.0f, 0.09f);
    glColor3f(0.235, 0.365, 0.459);
    glVertex2f(1.0f, 0.09f);
    glColor3f(0.486, 0.388, 0.267);
    glVertex2f(1.0f, 0.03f);
    ///     lower
    glColor3f(0.537, 0.569, 0.592);
    glVertex2f(-1.0f, 0.11f);
    glColor3f(0.553, 0.584, 0.635);
    glVertex2f(-1.0f, 0.17f);
    glColor3f(0.235, 0.365, 0.459);
    glVertex2f(1.0f, 0.17f);
    glColor3f(0.486, 0.388, 0.267);
    glVertex2f(1.0f, 0.11f);
    glEnd();

    /**....................................... Rail Line Soil ..........................................**/
    glBegin(GL_QUADS);
    ///      Middle
    // glColor3f(0.663, 0.447, 0.29);
    glVertex2f(-1.0f, 0.09f);
    glColor3f(0.322, 0.22, 0.188);
    glVertex2f(-1.0f, 0.11f);
    glColor3f(0.855, 0.686, 0.4940);
    glVertex2f(1.0f, 0.11f);
    glColor3f(0.678, 0.467, 0.294);
    glVertex2f(1.0f, 0.09f);
    ///    Lower
    glColor3f(0.855, 0.686, 0.4940);
    glVertex2f(-1.0f, 0.0f);
    glColor3f(0.678, 0.467, 0.294);
    glVertex2f(-1.0f, 0.03f);
    glColor3f(0.322, 0.22, 0.188);
    glVertex2f(1.0f, 0.03f);
    glColor3f(0.663, 0.447, 0.29);
    glVertex2f(1.0f, 0.00f);
    ///    Upper
    glColor3f(0.678, 0.467, 0.294);
    glVertex2f(-1.0f, 0.17f);
    glColor3f(0.855, 0.686, 0.4940);
    glVertex2f(-1.0f, 0.22f);
    glColor3f(0.322, 0.22, 0.188);
    glVertex2f(1.0f, 0.22f);
    glColor3f(0.663, 0.447, 0.29);
    glVertex2f(1.0f, 0.17f);

    glEnd();



    /**....................................... Rail Line ..........................................**/
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    ///     Lower Line
    glVertex2f(-1.0f, 0.04f);
    glVertex2f(1.0f, 0.04f);
    glVertex2f(-1.0f, 0.08f);
    glVertex2f(1.0f, 0.08f);
    ///     Upper Line
    glVertex2f(-1.0f, 0.12f);
    glVertex2f(1.0f, 0.12f);
    glVertex2f(-1.0f, 0.16f);
    glVertex2f(1.0f, 0.16f);
    glEnd();

    /**....................................... Lower Line Joiner ..........................................**/
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-1.01f, 0.04f);
    glVertex2f(-0.98f, 0.08f);

    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);

    glEnd();
    glPushMatrix();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);

    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.04f);
    glVertex2f(-0.94f, 0.08f);
    glEnd();

    glPopMatrix();

    /**....................................... Upper Line Joiner ..........................................**/
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-1.01f, 0.12f);
    glVertex2f(-0.98f, 0.16f);

    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);

    glEnd();
    glPushMatrix();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);

    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();
    glTranslated(0.04f,0.0f,0.0f);
    glBegin(GL_LINES);
    glColor3f(0.114f, 0.106f, 0.125f);
    glVertex2f(-0.97f, 0.12f);
    glVertex2f(-0.94f, 0.16f);
    glEnd();

    glPopMatrix();

}





void station()
{



    /**....................................... Upper Half Circle Roof ..........................................**/
    GLfloat x=0.0f;
    GLfloat y=0.3f;
    GLfloat  radius =.4f;
    int  triangleAmount = 100; ///# of lines used to draw circle

    GLfloat twicePi =.892f * PI;
    // glColor3f(0.663, 0.482, 0.91);

    glColor3ub(212, 190, 131);
    //121, 96, 68
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); /// center of circle
    for(float i = 12.6; i <= triangleAmount; i++)
    {
        glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount)) );
        glColor3ub(121, 96, 68);


    }
    glEnd();



    /**....................................... Upper Roof Stand 1 ..........................................**/
    glLineWidth(3);
    x=0.0f;
    y=0.3f;
    radius =0.36f;
    float i;
    int lineAmount = 100; //# of triangles used to draw circle

    twicePi = .891f * PI;

    glColor3ub(103, 80, 67);
    // glColor3f(0.663, 0.482, 0.91);
    glBegin(GL_LINE_LOOP);
    glVertex2f(x, y);
    for(i = 12.7; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();
    /**....................................... Upper Roof Stand 2 ..........................................**/
    x=0.0f;
    y=0.3f;
    radius =0.4f;
    glLineWidth(6.2);

    lineAmount = 100; //# of triangles used to draw circle


    twicePi = 1.05f * PI;

    glColor3ub(103, 80, 67);
    // glColor3f(0.663, 0.482, 0.91);
    // glColor3f(0.663, 0.482, 0.91);
    glBegin(GL_LINE_LOOP);
    for(i = -4; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();


    /**....................................... Upper Roof Stand 3  ..........................................**/
    glLineWidth(6.2);
    glBegin(GL_LINES);
    //glColor3f(0.663, 0.482, 0.91);
    glColor3ub(103, 80, 67);
    glVertex2f(-0.375f, 0.437f);
    glVertex2f(-0.27f, 0.2f);

    glVertex2f(0.375f, 0.437f);
    glVertex2f(0.27f, 0.2f);
    glEnd();

    /**....................................... Upper Roof Stand 4 ..........................................**/
    glLineWidth(2);
    x=0.0f;
    y=0.11f;
    radius =0.4f;

    lineAmount = 100; //# of triangles used to draw circle


    twicePi = 1.0f * PI;

    glColor3ub(103, 80, 67);
    //glColor3f(0.663, 0.482, 0.91);
    glBegin(GL_LINE_LOOP);
    for(i = 1; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();
    /**....................................... Upper Roof Stand 5 ..........................................**/
    glLineWidth(2);
    x=0.0f;
    y=0.099f;
    radius =0.4f;

    lineAmount = 100; //# of triangles used to draw circle


    twicePi = 1.0f * PI;


    glColor3ub(103, 80, 67);
    //glColor3f(0.663, 0.482, 0.91);
    glBegin(GL_LINE_LOOP);
    for(i = 1; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();

    /**....................................... Upper Roof Stand 6 ..........................................**/
    glLineWidth(2);
    x=0.0f;
    y=0.089f;
    radius =0.4f;

    lineAmount = 100; //# of triangles used to draw circle


    twicePi = 1.0f * PI;


    glColor3ub(103, 80, 67);
    glBegin(GL_LINE_LOOP);
    for(i = 1; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();

    /**....................................... Upper Roof Stand 7 ..........................................**/
    glLineWidth(2);
    x=0.0f;
    y=0.079f;
    radius =0.4f;

    lineAmount = 100; //# of triangles used to draw circle


    twicePi = 1.0f * PI;


    glColor3ub(103, 80, 67);
    glBegin(GL_LINE_LOOP);
    for(i = 1; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();

    /**....................................... Upper Roof Stand 8 ..........................................**/
    glLineWidth(2);
    x=0.0f;
    y=0.069f;
    radius =0.4f;

    lineAmount = 100; //# of triangles used to draw circle


    twicePi = 1.0f * PI;

    glColor3ub(103, 80, 67);
    glBegin(GL_LINE_LOOP);
    for(i = 1; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();
    /**....................................... Upper Roof Stand 9 ..........................................**/
    glLineWidth(2);
    x=0.0f;
    y=0.059f;
    radius =0.4f;

    lineAmount = 100; //# of triangles used to draw circle


    twicePi = 1.0f * PI;

    glColor3ub(103, 80, 67);
    //glColor3f(0.663, 0.482, 0.91);
    glBegin(GL_LINE_LOOP);
    for(i = 1; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();
    /**....................................... Upper Roof Stand 10 ..........................................**/
    glLineWidth(2);
    x=0.0f;
    y=0.049f;
    radius =0.4f;

    lineAmount = 100; //# of triangles used to draw circle


    twicePi = 1.0f * PI;


    glColor3ub(103, 80, 67);
    //glColor3f(0.663, 0.482, 0.91);
    glBegin(GL_LINE_LOOP);
    for(i = 1; i <= lineAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / lineAmount)),
            y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();
    /**....................................... Upper Roof stand ..........................................**/
    glLineWidth(2);
    glBegin(GL_LINES);

    //glColor3ub( 96, 80, 77);
    // glColor3f(0.663, 0.482, 0.91);
    glColor3ub(103, 80, 67);

    glVertex2f(-0.36f, 0.47f);
    glVertex2f(-0.3f, 0.41f);

    glVertex2f(-0.35f, 0.5f);
    glVertex2f(-0.25f, 0.4f);

    glVertex2f(-0.333f, 0.53f);
    glVertex2f(-0.20f, 0.4f);

    glVertex2f(-0.31f, 0.56f);
    glVertex2f(-0.15f, 0.4f);

    glVertex2f(-0.285f, 0.585f);
    glVertex2f(-0.10f, 0.4f);

    glVertex2f(-0.255f, 0.61f);
    glVertex2f(-0.05f, 0.405f);

    glVertex2f(-0.225f, 0.635f);
    glVertex2f(-0.0f, 0.41f);

    glVertex2f(-0.19f, 0.655f);
    glVertex2f(0.05f, 0.41f);

    glVertex2f(-0.15f, 0.675f);
    glVertex2f(0.10f, 0.41f);

    glVertex2f(-0.105f, 0.69f);
    glVertex2f(0.15f, 0.41f);

    glVertex2f(-0.057f, 0.7f);
    glVertex2f(0.20f, 0.41f);

    glVertex2f(0.36f, 0.47f);
    glVertex2f(0.3f, 0.41f);

    glVertex2f(0.35f, 0.5f);
    glVertex2f(0.25f, 0.4f);

    glVertex2f(0.333f, 0.53f);
    glVertex2f(0.20f, 0.4f);

    glVertex2f(0.31f, 0.56f);
    glVertex2f(0.15f, 0.4f);

    glVertex2f(0.285f, 0.585f);
    glVertex2f(0.10f, 0.4f);

    glVertex2f(0.255f, 0.61f);
    glVertex2f(0.05f, 0.405f);

    glVertex2f(0.225f, 0.635f);
    glVertex2f(0.0f, 0.41f);

    glVertex2f(0.19f, 0.655f);
    glVertex2f(-0.05f, 0.41f);

    glVertex2f(0.15f, 0.675f);
    glVertex2f(-0.10f, 0.41f);

    glVertex2f(0.105f, 0.69f);
    glVertex2f(-0.15f, 0.41f);

    glVertex2f(0.057f, 0.7f);
    glVertex2f(-0.20f, 0.41f);

    glVertex2f(0.00f, 0.7f);
    glVertex2f(0.00f, 0.4f);


    glEnd();


    /**....................................... Side Glass Wall Left ..........................................**/
    glBegin(GL_QUADS);
    glColor3ub(116, 122, 175);
    glVertex2f(-0.27f, 0.4f);
    glColor3ub(116, 122, 175);
    glVertex2f(-0.17f, 0.4f);
    glColor3ub(116, 122, 175);
    glVertex2f(-0.17f, 0.26f);
    glColor3ub(116, 122, 175);
    glVertex2f(-0.23f, 0.26f);
    glEnd();

    glLineWidth(0.8);
    glBegin(GL_LINES);
    glColor3f(0.643, 0.663, 0.675);
    glVertex2f(-0.19f, 0.26f);
    glVertex2f(-0.19f, 0.4f);
    glVertex2f(-0.21f, 0.26f);
    glVertex2f(-0.21f, 0.4f);
    glVertex2f(-0.23f, 0.26f);
    glVertex2f(-0.23f, 0.4f);
    glVertex2f(-0.25f, 0.335f);
    glVertex2f(-0.25f, 0.4f);
    glVertex2f(-0.17f, 0.27f);
    glVertex2f(-0.23f, 0.27f);
    glVertex2f(-0.17f, 0.28f);
    glVertex2f(-0.24f, 0.28f);
    glVertex2f(-0.17f, 0.29f);
    glVertex2f(-0.24f, 0.29f);
    glVertex2f(-0.17f, 0.30f);
    glVertex2f(-0.24f, 0.30f);
    glVertex2f(-0.17f, 0.31f);
    glVertex2f(-0.24f, 0.31f);
    glVertex2f(-0.17f, 0.32f);
    glVertex2f(-0.24f, 0.32f);
    glVertex2f(-0.17f, 0.33f);
    glVertex2f(-0.251f, 0.33f);
    glVertex2f(-0.17f, 0.34f);
    glVertex2f(-0.254f, 0.34f);
    glVertex2f(-0.17f, 0.35f);
    glVertex2f(-0.257f, 0.35f);
    glVertex2f(-0.17f, 0.36f);
    glVertex2f(-0.259f, 0.36f);
    glVertex2f(-0.17f, 0.37f);
    glVertex2f(-0.262f, 0.37f);
    glVertex2f(-0.17f, 0.38f);
    glVertex2f(-0.265f, 0.38f);
    glVertex2f(-0.17f, 0.39f);
    glVertex2f(-0.267f, 0.39f);
    glEnd();



    /**....................................... Side Glass Wall Left ..........................................**/
    glBegin(GL_QUADS);

    glColor3ub(116, 122, 175);
    glVertex2f(0.27f, 0.4f);
    glColor3ub(116, 122, 175);
    glVertex2f(0.17f, 0.4f);
    glColor3ub(116, 122, 175);
    glVertex2f(0.17f, 0.26f);
    glColor3ub(116, 122, 175);
    glVertex2f(0.23f, 0.26f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.643, 0.663, 0.675);
    glVertex2f(0.19f, 0.26f);
    glVertex2f(0.19f, 0.4f);
    glVertex2f(0.21f, 0.26f);
    glVertex2f(0.21f, 0.4f);
    glVertex2f(0.23f, 0.26f);
    glVertex2f(0.23f, 0.4f);
    glVertex2f(0.25f, 0.335f);
    glVertex2f(0.25f, 0.4f);
    glVertex2f(0.17f, 0.27f);
    glVertex2f(0.234f, 0.27f);
    glVertex2f(0.17f, 0.28f);
    glVertex2f(0.237f, 0.28f);
    glVertex2f(0.17f, 0.29f);
    glVertex2f(0.24f, 0.29f);
    glVertex2f(0.17f, 0.30f);
    glVertex2f(0.24f, 0.30f);
    glVertex2f(0.17f, 0.31f);
    glVertex2f(0.24f, 0.31f);
    glVertex2f(0.17f, 0.32f);
    glVertex2f(0.24f, 0.32f);
    glVertex2f(0.17f, 0.33f);
    glVertex2f(0.251f, 0.33f);
    glVertex2f(0.17f, 0.34f);
    glVertex2f(0.254f, 0.34f);
    glVertex2f(0.17f, 0.35f);
    glVertex2f(0.257f, 0.35f);
    glVertex2f(0.17f, 0.36f);
    glVertex2f(0.259f, 0.36f);
    glVertex2f(0.17f, 0.37f);
    glVertex2f(0.262f, 0.37f);
    glVertex2f(0.17f, 0.38f);
    glVertex2f(0.265f, 0.38f);
    glVertex2f(0.17f, 0.39f);
    glVertex2f(0.267f, 0.39f);
    glEnd();
    /**....................................... Top Glass roof ..........................................**/
    glBegin(GL_QUADS);

    glColor3ub(116, 122, 175);
    glVertex2f(-0.19f, 0.38f);

    glColor3ub(116, 122, 175);
    glVertex2f(-0.19f, 0.5f);
    glColor3ub(116, 122, 175);
    glVertex2f(0.19f, 0.5f);

    glColor3ub(116, 122, 175);
    glVertex2f(0.19f, 0.38f);
    glEnd();
    /**....................................... Top Glass Roof Joining Aluminium frame..........................................**/
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.643, 0.663, 0.675);
    glVertex2f(-0.19f, 0.39f);
    glVertex2f(0.19f, 0.39f);
    glVertex2f(-0.19f, 0.40f);
    glVertex2f(0.19, 0.40f);
    glVertex2f(-0.19f, 0.41f);
    glVertex2f(0.19f, 0.41f);
    glVertex2f(-0.19f, 0.42f);
    glVertex2f(0.19f, 0.42f);
    glVertex2f(-0.19f, 0.43f);
    glVertex2f(0.19f, 0.43f);
    glVertex2f(-0.19f, 0.44f);
    glVertex2f(0.19f, 0.44f);
    glVertex2f(-0.19f, 0.45f);
    glVertex2f(0.19f, 0.45f);
    glVertex2f(-0.19f, 0.46f);
    glVertex2f(0.19f, 0.46f);
    glVertex2f(-0.19f, 0.47f);
    glVertex2f(0.19f, 0.47f);
    glVertex2f(-0.19f, 0.48f);
    glVertex2f(0.19f, 0.48f);
    glVertex2f(-0.19f, 0.49f);
    glVertex2f(0.19f, 0.49f);
    glVertex2f(-0.17f, 0.50f);
    glVertex2f(-0.17f, 0.38f);
    glVertex2f(-0.15f, 0.50f);
    glVertex2f(-0.15f, 0.38f);
    glVertex2f(-0.13f, 0.5f);
    glVertex2f(-0.13f, 0.38f);
    glVertex2f(-0.11f, 0.5f);
    glVertex2f(-0.11f, 0.38f);
    glVertex2f(-0.09f, 0.5f);
    glVertex2f(-0.09f, 0.38f);
    glVertex2f(-0.07f, 0.5f);
    glVertex2f(-0.07f, 0.38f);
    glVertex2f(-0.05f, 0.5f);
    glVertex2f(-0.05f, 0.38f);
    glVertex2f(-0.03f, 0.5f);
    glVertex2f(-0.03f, 0.38f);
    glVertex2f(-0.01f, 0.5f);
    glVertex2f(-0.01f, 0.38f);
    glVertex2f(0.01f, 0.50f);
    glVertex2f(0.01f, 0.38f);
    glVertex2f(0.03f, 0.50f);
    glVertex2f(0.03f, 0.38f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.05f, 0.38f);
    glVertex2f(0.07f, 0.5f);
    glVertex2f(0.07f, 0.38f);
    glVertex2f(0.09f, 0.5f);
    glVertex2f(0.09f, 0.38f);
    glVertex2f(0.11f, 0.5f);
    glVertex2f(0.11f, 0.38f);
    glVertex2f(0.13f, 0.50f);
    glVertex2f(0.13f, 0.38f);
    glVertex2f(0.15f, 0.5f);
    glVertex2f(0.15f, 0.38f);
    glVertex2f(0.17f, 0.5f);
    glVertex2f(0.17f, 0.38f);

    glEnd();



    /**....................................... Terminal ..........................................**/

    ///  2 side wall
    glBegin(GL_QUADS);
    //glColor3f(0.698, 0.596, 0.592);
    glColor3ub(154, 134, 131);
    glVertex2f(-0.17f, 0.26f);
    glVertex2f(-0.17f, 0.38f);
    glVertex2f(0.17f, 0.38f);
    glVertex2f(0.17f, 0.26f);
    glEnd();
    ///  Terminal Glass
    glBegin(GL_QUADS);

    glColor3f(0.698, 0.596, 0.592);
    glVertex2f(-0.1f, 0.26f);
    glColor3f(0.698, 0.596, 0.592);
    glVertex2f(-0.1f, 0.38f);
    glColor3f(0.698, 0.596, 0.592);
    glVertex2f(0.1f, 0.38f);
    glColor3f(0.698, 0.596, 0.592);
    glVertex2f(0.1f, 0.26f);
    glEnd();
    /**....................................... Terminal Glass Joining Aluminium frame..........................................**/
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.643, 0.663, 0.675);
    glVertex2f(-0.1f, 0.27f);
    glVertex2f(0.1f, 0.27f);
    glVertex2f(-0.1f, 0.28f);
    glVertex2f(0.1f, 0.28f);
    glVertex2f(-0.1f, 0.29f);
    glVertex2f(0.1f, 0.29f);
    glVertex2f(-0.1f, 0.30f);
    glVertex2f(0.1f, 0.30f);
    glVertex2f(-0.1f, 0.31f);
    glVertex2f(0.1f, 0.31f);
    glVertex2f(-0.1f, 0.32f);
    glVertex2f(0.1f, 0.32f);
    glVertex2f(-0.1f, 0.33f);
    glVertex2f(0.1f, 0.33f);
    glVertex2f(-0.1f, 0.34f);
    glVertex2f(0.1f, 0.34f);
    glVertex2f(-0.1f, 0.35f);
    glVertex2f(0.1f, 0.35f);
    glVertex2f(-0.1f, 0.36f);
    glVertex2f(0.1f, 0.36f);
    glVertex2f(-0.1f, 0.37f);
    glVertex2f(0.1f, 0.37f);
    glVertex2f(-0.09f, 0.26f);
    glVertex2f(-0.09f, 0.38f);
    glVertex2f(-0.08f, 0.26f);
    glVertex2f(-0.08f, 0.38f);
    glVertex2f(-0.07f, 0.26f);
    glVertex2f(-0.07f, 0.38f);
    glVertex2f(-0.06f, 0.26f);
    glVertex2f(-0.06f, 0.38f);
    glVertex2f(-0.05f, 0.26f);
    glVertex2f(-0.05f, 0.38f);
    glVertex2f(-0.04f, 0.26f);
    glVertex2f(-0.04f, 0.38f);
    glVertex2f(-0.03f, 0.26f);
    glVertex2f(-0.03f, 0.38f);
    glVertex2f(-0.02f, 0.26f);
    glVertex2f(-0.02f, 0.38f);
    glVertex2f(-0.01f, 0.26f);
    glVertex2f(-0.01f, 0.38f);
    glVertex2f(0.0f, 0.26f);
    glVertex2f(0.0f, 0.38f);
    glVertex2f(0.01f, 0.26f);
    glVertex2f(0.01f, 0.38f);
    glVertex2f(0.02f, 0.26f);
    glVertex2f(0.02f, 0.38f);
    glVertex2f(0.03f, 0.26f);
    glVertex2f(0.03f, 0.38f);
    glVertex2f(0.04f, 0.26f);
    glVertex2f(0.04f, 0.38f);
    glVertex2f(0.05f, 0.26f);
    glVertex2f(0.05f, 0.38f);
    glVertex2f(0.06f, 0.26f);
    glVertex2f(0.06f, 0.38f);
    glVertex2f(0.07f, 0.26f);
    glVertex2f(0.07f, 0.38f);
    glVertex2f(0.08f, 0.26f);
    glVertex2f(0.08f, 0.38f);
    glVertex2f(0.09f, 0.26f);
    glVertex2f(0.09f, 0.38f);
    glEnd();
    /**....................................... Gate ..........................................**/
    glBegin(GL_QUADS);
    glColor3f(0.98, 0.98, 0.98);
    glVertex2f(-0.02f, 0.26f);
    glVertex2f(-0.02f, 0.35f);
    glVertex2f(0.04f, 0.35f);
    glVertex2f(0.04f, 0.26f);
    glEnd();

    ///  Gate Joining Aluminium frame
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.643, 0.663, 0.675);
    glVertex2f(0.01f, 0.26f);
    glVertex2f(0.01f, 0.35f);
    glVertex2f(-0.02f, 0.29f);
    glVertex2f(0.04f, 0.29f);
    glEnd();

    /**....................................... Roof Supporting Stand ..........................................**/
    glLineWidth(4);
    glBegin(GL_LINES);
    // glColor3f(0.478, 0.478, 0.463);
    glColor3ub(90, 74, 70);

    glVertex2f(-0.32f, 0.47f);
    glVertex2f(-0.29f, 0.33f);
    glVertex2f(-0.32f, 0.47f);
    glVertex2f(-0.32f, 0.33f);

    /*glVertex2f(-0.303f, 0.50f);
    glVertex2f(-0.27f, 0.33f);
    glVertex2f(-0.303f, 0.50f);
    glVertex2f(-0.24f, 0.33f);*/

    glVertex2f(-0.28f, 0.53f);
    glVertex2f(-0.22f, 0.33f);
    glVertex2f(-0.28f, 0.53f);
    glVertex2f(-0.19f, 0.33f);

    /*glVertex2f(-0.255f, 0.555f);
    glVertex2f(-0.17f, 0.33f);
    glVertex2f(-0.255f, 0.555f);
    glVertex2f(-0.14f, 0.33f);*/

    glVertex2f(-0.225f, 0.583f);
    glVertex2f(-0.12f, 0.33f);
    glVertex2f(-0.225f, 0.583f);
    glVertex2f(-0.09f, 0.33f);

    /*glVertex2f(-0.195f, 0.603f);
    glVertex2f(-0.07f, 0.33f);
    glVertex2f(-0.195f, 0.603f);
    glVertex2f(-0.04f, 0.33f);*/

    glVertex2f(-0.16f, 0.623f);
    glVertex2f(-0.02f, 0.33f);
    glVertex2f(-0.16f, 0.623f);
    glVertex2f(0.01f, 0.33f);

    /*glVertex2f(-0.12f, 0.643f);
    glVertex2f(0.03f, 0.33f);
    glVertex2f(-0.12f, 0.643f);
    glVertex2f(0.06f, 0.33f);*/

    glVertex2f(-0.075f, 0.655f);
    glVertex2f(0.08f, 0.33f);
    glVertex2f(-0.075f, 0.655f);
    glVertex2f(0.11f, 0.33f);

    /*glVertex2f(-0.025f, 0.66f);
    glVertex2f(0.13f, 0.33f);
    glVertex2f(-0.025f, 0.66f);
    glVertex2f(0.16f, 0.33f);*/

    glVertex2f(0.0f, 0.66f);
    glVertex2f(-0.45f, 0.33f);
    glVertex2f(0.0f, 0.66f);
    glVertex2f(0.45f, 0.33f);


    glVertex2f(0.32f, 0.47f);
    glVertex2f(0.29f, 0.33f);
    glVertex2f(0.32f, 0.47f);
    glVertex2f(0.32f, 0.33f);

    /*glVertex2f(0.303f, 0.50f);
    glVertex2f(0.27f, 0.33f);
    glVertex2f(0.303f, 0.50f);
    glVertex2f(0.24f, 0.33f);*/

    glVertex2f(0.28f, 0.53f);
    glVertex2f(0.22f, 0.33f);
    glVertex2f(0.28f, 0.53f);
    glVertex2f(0.19f, 0.33f);

    /*glVertex2f(0.255f, 0.555f);
    glVertex2f(0.17f, 0.33f);
    glVertex2f(0.255f, 0.555f);
    glVertex2f(0.14f, 0.33f);*/

    glVertex2f(0.225f, 0.583f);
    glVertex2f(0.12f, 0.33f);
    glVertex2f(0.225f, 0.583f);
    glVertex2f(0.09f, 0.33f);

    /*glVertex2f(0.195f, 0.603f);
    glVertex2f(0.07f, 0.33f);
    glVertex2f(0.195f, 0.603f);
    glVertex2f(0.04f, 0.33f);*/

    glVertex2f(0.16f, 0.623f);
    glVertex2f(0.02f, 0.33f);
    glVertex2f(0.16f, 0.623f);
    glVertex2f(-0.01f, 0.33f);

    /*glVertex2f(0.12f, 0.643f);
    glVertex2f(-0.03f, 0.33f);
    glVertex2f(0.12f, 0.643f);
    glVertex2f(-0.06f, 0.33f);*/

    glVertex2f(0.075f, 0.655f);
    glVertex2f(-0.08f, 0.33f);
    glVertex2f(0.075f, 0.655f);
    glVertex2f(-0.11f, 0.33f);

    /*glVertex2f(0.025f, 0.66f);
    glVertex2f(-0.13f, 0.33f);
    glVertex2f(0.025f, 0.66f);
    glVertex2f(-0.16f, 0.33f);*/

    glEnd();

    glColor3ub(115, 94, 95);
    renderBitmapString(-0.16f, 0.505f, 0.0f, GLUT_BITMAP_HELVETICA_18, "COX-BAZAR RAILWAY STATION");

    rail_Line();
}

void display()
{
    // Set background color to dark blue for night sky
    glClearColor(0.0f, 0.0f, 0.2f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    station();
    glFlush();
    /*  glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.0f, 1.0f);    // x, y

      glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(-1.0f, 0.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
    glVertex2f(0.0f, -1.0f);
    */

}



void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 800);
    glutInitWindowPosition(375,70);
    glutCreateWindow("Night View Of Cox-Bazar Railway Station");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    font = GLUT_BITMAP_HELVETICA_18;
    glutMainLoop();
    return 0;
}

