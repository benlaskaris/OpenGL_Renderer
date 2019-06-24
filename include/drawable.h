
// Virtual base class for all drawable object
#ifndef DRAWABLE_H
#define DRAWABLE_H

class Drawable {
 public:
  virtual void draw() {}
  virtual void update() {}
};

#endif // DRAWABLE_H