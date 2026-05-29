#include "../turtlec.h"
void fractaltree(Turtle *, float, int);
int main(void){
  TurtleApp *app = turtleAppCreate(400, 200, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 200.0f, 200.0f);
  turtleLeft(t, 90);
  turtlePenDown(t);

  turtleSetColor(t, 255, 100, 0);
  turtleSetSpeed(t, 5.0f);
  

  int level = 3;
  fractaltree(t, 100, level);

  turtleAppRun(app);
  turtleAppDestroy(app);
  return 0;
}
void fractaltree(Turtle* t, float len, int level){
  if(level == 0 || len < 10){
    return;
  }
  turtleForward(t, len);
  turtleLeft(t, 45);
  fractaltree(t, len * 0.9, level - 1);
  turtleRight(t, 90);
  fractaltree(t, len * 0.6, level - 1);
  turtleRight(t, 135);
  turtleForward(t, len);
  turtleRight(t, 180);
}
