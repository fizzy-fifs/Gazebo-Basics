#include <functional>
#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <ignition/math/Vector3.hh>

namespace gazebo
{
    class FourWheeledRobotPushPlugin : public ModelPlugin
    {
        private:
        physics::ModelPtr model;
        event::ConnectionPtr updateConnection;

        public:
        void Load(physics::ModelPtr _model, sdf::ElementPtr /*_sdf*/)
        {
            this->model = _model;

            this->updateConnection = event::Events::ConnectWorldUpdateBegin(
                std::bind(&FourWheeledRobotPushPlugin::OnUpdate, this)
            );
        }

        void OnUpdate()
        {
            this->model->SetLinearVel(ignition::math::Vector3d(3,0,0));
        }
    };
    GZ_REGISTER_MODEL_PLUGIN(FourWheeledRobotPushPlugin)
}
