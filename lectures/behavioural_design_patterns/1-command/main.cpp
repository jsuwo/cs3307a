#include "Menu.h"
#include "Light.h"
#include "Stereo.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "StereoOnCommand.h"
#include "StereoOffCommand.h"
#include "StereoPlayCommand.h"

main()
{
  Light* l1 = new Light("Lamp");
  Light* l2 = new Light("Porch light");
  Stereo* s = new Stereo("Living room stereo");

  Command* cmd1 = new LightOnCommand(l1);
  Command* cmd2 = new LightOffCommand(l1);
  Command* cmd3 = new LightOnCommand(l2);
  Command* cmd4 = new LightOffCommand(l2);
  Command* cmd5 = new StereoOnCommand(s);
  Command* cmd6 = new StereoOffCommand(s);
  Command* cmd7 = new StereoPlayCommand(s);

  Menu menu;
  menu.add(new MenuItem("Turn on lamp", cmd1));
  menu.add(new MenuItem("Turn off lamp", cmd2));
  menu.add(new MenuItem("Turn on porch light", cmd3));
  menu.add(new MenuItem("Turn off porch light", cmd4));
  menu.add(new MenuItem("Turn on stereo", cmd5));
  menu.add(new MenuItem("Turn off stereo", cmd6));
  menu.add(new MenuItem("Play stereo", cmd7));

  while (true)
  {
    menu.getChoice();
  }


}



