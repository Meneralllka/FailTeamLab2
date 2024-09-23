#include "ros/ros.h"
#include "std_msgs/Float64.h"

//for sin()
#include <math.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "rotate");

    ros::NodeHandle nh;

    ros::Publisher pub2 = nh.advertise<std_msgs::Float64>("/joint2/command", 100);

    ros::Rate loop_rate(10);

    ros::Time startTime = ros::Time::now();

    while (ros::ok()) {
        // Create a message to publish
        std_msgs::Float64 msg_to_send;

        // Calculate elapsed time
        ros::Duration elapsed = ros::Time::now() - startTime;
        double time = elapsed.toSec();

        // Parameters for the sine wave

        // Compute the sine wave value
        msg_to_send.data = 1.0

        // Publish the message
        pub1.publish(msg_to_send);



        // Log the published value
        ROS_INFO("Publishing step value: %f", msg_to_send.data);

        ros::spinOnce();
        loop_rate.sleep();
    }
}
