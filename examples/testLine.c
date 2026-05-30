#include "../turtlec.h"
void levy(Turtle *, float, int);
void fractaltree(Turtle *, float, int);
int main(void){
  TurtleApp *app = turtleAppCreate(800, 400, "Test Line");

  if(app == NULL)
    return 1;

  Turtle *t = turtleAppGetTurtle(app);

  turtlePenUp(t);
  turtleGoTo(t, 400.0f, 400.0f);
  turtleLeft(t, 90);
  turtlePenDown(t);

  turtleSetColor(t, 255, 100, 0);
  turtleSetSpeed(t, 5.0f);
  

  int level = 5;
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
  fractaltree(t, len * 0.5, level - 1);
  turtleRight(t, 45);
  fractaltree(t, len * 0.5, level - 1);
  turtleRight(t, 45);
  fractaltree(t, len * 0.5, level - 1);
  turtleRight(t, 135);
  turtleForward(t, len);
  turtleRight(t, 180);
}
void levy(Turtle *t, float len, int level){
  if(level == 0){
    turtleForward(t, len);
    return;
  }
  turtleLeft(t, 45);
  levy(t, len * 0.9, level - 1);
  turtleRight(t, 90);
  levy(t, len * 0.9, level - 1);
  turtleLeft(t, 45);
}
