#include "ros/ros.h"
#include "std_msgs/Float64.h"

//for sin()
#include <math.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "rotate");

    ros::NodeHandle nh;

    ros::Publisher pub2 = nh.advertise<std_msgs::Float64>("/joint2/command", 100);
    ros::Publisher pub3 = nh.advertise<std_msgs::Float64>("/joint4/command", 100);
    ros::Publisher pub4 = nh.advertise<std_msgs::Float64>("/joint6/command", 100);
    ros::Publisher pub5 = nh.advertise<std_msgs::Float64>("/end/command", 100);
    ros::Publisher pub1 = nh.advertise<std_msgs::Float64>("/motortom2m/command", 100);

    ros::Rate loop_rate(10);

    ros::Time startTime = ros::Time::now();

    while (ros::ok()) {
        // Create a message to publish
        std_msgs::Float64 msg_to_send;
        std_msgs::Float64 msg_to_send2;

        // Calculate elapsed time
        ros::Duration elapsed = ros::Time::now() - startTime;
        double time = elapsed.toSec();

        // Parameters for the sine wave
        double amplitude = 1.0;  // Amplitude of the sine wave
        double frequency = 0.3;  // Frequency of the sine wave in Hz

        // Compute the sine wave value
        msg_to_send.data = amplitude * sin(2 * M_PI * frequency * time);
        msg_to_send2.data = -amplitude * sin(2 * M_PI * frequency * time);

        // Publish the message
        pub1.publish(msg_to_send2);
        pub2.publish(msg_to_send);
        pub3.publish(msg_to_send2);
        pub4.publish(msg_to_send);
        pub5.publish(msg_to_send2);
        

        
        // Log the published value
        ROS_INFO("Publishing sine wave value: %f", msg_to_send.data);

        ros::spinOnce();
        loop_rate.sleep();
    }
}
