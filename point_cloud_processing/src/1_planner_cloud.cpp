#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int main()
{
    pcl::PointCloud<pcl::PointXYZ> cloud;
    cloud.push_back(pcl::PointXYZ(-1.0, 2.0, 3.0));
    cloud.push_back(pcl::PointXYZ(-3.0, 4.0, 5.0));
    cloud.push_back(pcl::PointXYZ(-5.0, 6.0, 7.0));
    cloud.push_back(pcl::PointXYZ(-7.0, 8.0, 9.0));
  
    std::string path = "/home/david/ros2_ws/src/ROS2-Point-Cloud-Clustering-and-Segmentation-for-Autonomous-Behaviour/point_cloud_processing/point_clouds/plane_.pcd";
    pcl::io::savePCDFileASCII(path, cloud);
    std::cout << cloud.size();

    return 0;
}