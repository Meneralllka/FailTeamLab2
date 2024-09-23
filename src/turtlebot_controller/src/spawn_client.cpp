#include "ros/ros.h"
#include "turtlesim/Spawn.h"
#include <cstdlib>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "spawn_turtle_client");
  ros::NodeHandle nh;
  ros::ServiceClient client1 = nh.serviceClient<turtlesim::Spawn>("/spawn");

  turtlesim::Spawn srv1; // define a /spawn service message
  srv1.request.x = 1.0;
  srv1.request.y = 5.0;
  srv1.request.theta = 0.0;
  srv1.request.name = "Turtle_FAILED_TEAM";

  if (client1.call(srv1))
  {
    ROS_INFO("Spawned");
  }
  else
  {
    ROS_ERROR("Failed to call service add_two_ints");
    return 1;
  }

  return 0;
}
