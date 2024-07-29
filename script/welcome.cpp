#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginFourWheeledRobot : public WorldPlugin
  {
    public: WorldPluginFourWheeledRobot() : WorldPlugin()
            {
              printf("Welcome to Fifolu's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginFourWheeledRobot)
}
