#include <gazebo/gazebo.hh>

namespace gazebo 
{ 
  class WorldPluginANYRobot : public WorldPlugin
  {
    public: WorldPluginANYRobot() : WorldPlugin()
            {
              printf("Welcome to Amit's World\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginANYRobot)
}

