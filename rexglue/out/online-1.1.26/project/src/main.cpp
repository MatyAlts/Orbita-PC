// orbita - ReXGlue Recompiled Project

#include <rex/app/title_app.h>

#include "generated/default/orbita_init.h"

class OrbitaApp : public rex::app::TitleApp {
 public:
  OrbitaApp() : TitleApp("orbita", kPPCImageConfig) {}
};

REX_TITLE_APP(OrbitaApp)
