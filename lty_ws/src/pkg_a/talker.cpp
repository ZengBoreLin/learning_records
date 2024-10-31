#include <std_msgs/String.h>
#include <ros/ros.h>
#include <sstream>
int main(int argc, char **argv) {
    ros::init(argc, argv, "talker"); //talker is node name
    ros::NodeHandle n;

    ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);
    ros::Rate loop_rate(10);

    int count = 0;
    while (ros::ok()) {
        std_msgs::String msg;
        std::stringstream ss;
        ss << "生生不息的激荡 " << count;
        msg.data = ss.str();

        ROS_INFO("%s", msg.data.c_str());

        chatter_pub.publish(msg);
        ros::spinOnce();

        loop_rate.sleep();
        ++count;
    }

    return 0;
}