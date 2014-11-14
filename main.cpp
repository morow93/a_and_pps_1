using namespace std;

// standart headers

#include <iostream>
#include <vector>

// custom headers

#include "Archer/Archer.h"
#include "Infantryman/Infantryman.h"
#include "Horseman/Horseman.h"

#include "CompositeUnit/CompositeUnit.h"

#include "ConcreteArmy/ConcreteArmy.h"
#include "ConcreteMediator/ConcreteMediator.h"

#include <GL/glut.h>

void draw(void) {
	// Black background
	glClearColor(0.0f,0.0f,0.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	//Draw i
	glFlush();
}

CompositeUnit* createRomanLegion()
{
	CompositeUnit* romanLegion = new CompositeUnit;

	for (int i = 0; i<3000; ++i)
		romanLegion->addUnit(new Infantryman);

	for (int i = 0; i<1500; ++i)
		romanLegion->addUnit(new Archer);

	for (int i = 0; i<500; ++i)
		romanLegion->addUnit(new Horseman);

	return romanLegion;
}

CompositeUnit* createGreekLegion()
{
	CompositeUnit* greekLegion = new CompositeUnit;

	for (int i = 0; i<2000; ++i)
		greekLegion->addUnit(new Infantryman);

	for (int i = 0; i<1000; ++i)
		greekLegion->addUnit(new Archer);

	for (int i = 0; i<500; ++i)
		greekLegion->addUnit(new Horseman);

	return greekLegion;
}

int main(int argc, char **argv)
{
	ConcreteMediator mediator;

	ConcreteArmy* romanArmy = new ConcreteArmy("Roman army", &mediator);
	ConcreteArmy* greekArmy = new ConcreteArmy("Greek army", &mediator);

	for (int i = 0; i < 4; ++i)
		romanArmy->addUnit(createRomanLegion());

	for (int i = 0; i < 5; i++)
		greekArmy->addUnit(createGreekLegion());

	cout << "Roman army damaging strength is " << romanArmy->getStrength() << endl;
	cout << "Greek army damaging strength is " << greekArmy->getStrength() << endl;

	mediator.SetArmy1(romanArmy);
	mediator.SetArmy2(greekArmy);

	romanArmy->Send("Are you ready to die, dirty hellens?");
	greekArmy->Send("Doing is better than saying, nasty legionnaires!");

	cout << "Press \"ENTER\" to exit";

	cin.get();

	delete romanArmy;
	delete greekArmy;

	glutInit(&argc, argv);
	/*Setting up The Display
	/ -RGB color model + Alpha Channel = GLUT_RGBA
	*/
	glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
	//Configure Window Postion
	glutInitWindowPosition(50, 25);
	//Configure Window Size
	glutInitWindowSize(480,480);
	//Create Window
	glutCreateWindow("Hello OpenGL");
	//Call to the drawing function
	glutDisplayFunc(draw);
	// Loop require by OpenGL
	glutMainLoop();

	return 0;
}
