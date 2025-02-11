#include <string>

#include <eigen3/Eigen/Dense>

#include "sensor_msgs/msg/joy.h"
#include "geometry_msgs/msg/twist.h"
#include "geometry_msgs/msg/pose.h"
#include "geometry_msgs/msg/vector3.h"

using std::string;

class SubBase {
    public:

    private:
        // Sub Constants
        string subName_;    // Name of the sub
        double mass_;   //  [kg]
        double volume_; //  [m³]

        // Topside Info
        sensor_msgs__msg__Joy joy_;

        // Sub Vectors
        geometry_msgs__msg__Pose pose_;  // 6-Vector [m | rad]
        geometry_msgs__msg__Twist twist_;  // 6-Vector [m/s | rad/s]
        geometry_msgs__msg__Vector3 acc_;    // 3-Vector [m/s²]

        geometry_msgs__msg__Vector3 magnetic_;  // 3-Vector [µT]

};