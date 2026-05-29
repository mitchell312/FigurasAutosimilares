#include "../turtlec.h"
void fractaltree(turtle *, float, int);
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
void fractaltree(Turtle* t, float len, int level){
  if(level == 0 || len < 10){
    return;
  }
  turtleLeft(t, len);
  fractaltree(t, len * 0.9, level - 1);
  turtleLeft(t, 45);
  fractaltree(t, len * 0.9, level - 1);
  turtleRight(t, 90);
}
