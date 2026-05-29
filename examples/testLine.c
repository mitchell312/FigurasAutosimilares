#include "../turtlec.h"
void tree(turtle *, float len, int level);
int main(void){
  TurtleApp *app = turtleAppCreate(400, 200, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 50.0f, 100.0f);
  turtlePenDown(t);

  turtleSetColor(t, 255, 100, 0);
  turtleSetSpeed(t, 5.0f);
  turtleForward(t, 300.0f);

  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;
}
